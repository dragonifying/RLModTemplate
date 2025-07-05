import os
import xml.etree.ElementTree as ET

# Register MSBuild XML namespace
ET.register_namespace('', 'http://schemas.microsoft.com/developer/msbuild/2003')

# Folders to exclude entirely
EXCLUDE_DIRS = {
    '.vs', 'x64', 'debug', 'release', 'bin', 'build', 'out',
    'ipch', 'obj', 'intermediate', 'generated', 'windows'
}

# System/standard header names to skip
SYSTEM_HEADERS = {
    'math.h', 'cmath', 'float.h', 'limits.h', 'stddef.h',
    'stl_vector.h', 'stl_map.h', 'stl_algobase.h', 'stl_function.h',
    'hash_map', 'hash_set', 'iosfwd', 'cstdlib', 'cstdio'
}

def should_exclude(path):
    parts = path.split(os.sep)
    for part in parts:
        if part.lower() in EXCLUDE_DIRS or part.startswith('.') or ' ' in part:
            return True
    lowered = path.lower()
    return 'microsoft visual studio' in lowered or 'windows kits' in lowered

def contains_valid_headers(path):
    try:
        for file in os.listdir(path):
            name = file.lower()
            if name.endswith(('.h', '.hpp')) and name not in SYSTEM_HEADERS:
                return True
    except:
        pass
    return False

def find_all_valid_dirs(root):
    valid_dirs = []
    for dirpath, _, _ in os.walk(root):
        if should_exclude(dirpath):
            continue
        if contains_valid_headers(dirpath):
            valid_dirs.append(dirpath)
    return valid_dirs

def make_relative_path(base, target):
    return os.path.relpath(target, base).replace('/', '\\').replace('\\\\', '\\')

def update_vcxproj(project_path, include_dirs, lib_dirs):
    print(f"Loading: {project_path}")
    tree = ET.parse(project_path)
    root = tree.getroot()

    ns = {'ns': 'http://schemas.microsoft.com/developer/msbuild/2003'}
    project_dir = os.path.dirname(os.path.abspath(project_path))

    include_paths = [f'$(ProjectDir){make_relative_path(project_dir, d)}' for d in include_dirs]
    lib_paths     = [f'$(ProjectDir){make_relative_path(project_dir, d)}' for d in lib_dirs]

    modified = False
    for item_def in root.findall('.//ns:ItemDefinitionGroup', ns):
        # ----- Include directories -----
        cl_compile = item_def.find('ns:ClCompile', ns)
        if cl_compile is None:
            cl_compile = ET.SubElement(item_def, '{http://schemas.microsoft.com/developer/msbuild/2003}ClCompile')

        include = cl_compile.find('ns:AdditionalIncludeDirectories', ns)
        if include is None:
            include = ET.SubElement(cl_compile, '{http://schemas.microsoft.com/developer/msbuild/2003}AdditionalIncludeDirectories')

        new_inc_value = ';'.join(include_paths) + ';%(AdditionalIncludeDirectories)'
        include.text = new_inc_value
        modified = True

        # ----- Library directories -----
        linker = item_def.find('ns:Link', ns)
        if linker is None:
            linker = ET.SubElement(item_def, '{http://schemas.microsoft.com/developer/msbuild/2003}Link')

        lib_dirs_tag = linker.find('ns:AdditionalLibraryDirectories', ns)
        if lib_dirs_tag is None:
            lib_dirs_tag = ET.SubElement(linker, '{http://schemas.microsoft.com/developer/msbuild/2003}AdditionalLibraryDirectories')

        new_lib_value = ';'.join(lib_paths) + ';%(AdditionalLibraryDirectories)'
        lib_dirs_tag.text = new_lib_value
        modified = True

    if modified:
        tree.write(project_path, encoding='utf-8', xml_declaration=True)
        print(f"✅ Updated include & library dirs in: {project_path}")
    else:
        print(f"❌ No changes made to: {project_path}")

# ---------- NEW: library discovery ----------
def find_all_lib_dirs(root):
    lib_dirs = set()
    for dirpath, _, files in os.walk(root):
        if should_exclude(dirpath):
            continue
        if any(f.lower().endswith('.lib') for f in files):
            lib_dirs.add(dirpath)
    return list(lib_dirs)

def main():
    project_root = os.getcwd()
    vcxproj_files = [f for f in os.listdir(project_root) if f.endswith('.vcxproj')]

    if not vcxproj_files:
        print("No .vcxproj file found in this folder.")
        return

    include_dirs = find_all_valid_dirs(project_root)
    lib_dirs     = find_all_lib_dirs(project_root)

    print("\n✅ Include directories added:")
    for d in include_dirs:
        print(" -", d)
    print("\n✅ Library directories added:")
    for d in lib_dirs:
        print(" -", d)

    for proj_file in vcxproj_files:
        update_vcxproj(os.path.join(project_root, proj_file), include_dirs, lib_dirs)

if __name__ == '__main__':
    main()
