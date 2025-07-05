
"""
Full‑stack Visual Studio C++ project renamer.
- Renames .sln, .vcxproj, .vcxproj.filters, .vcxproj.user
- Updates <ProjectName> and <RootNamespace> XML tags inside .vcxproj
- Rewrites namespaces (namespace Old → New, Old:: → New::) in code
- Deletes *all* old‑name project files once new ones are in place
Usage:
    python rename_project.py NewName
    python rename_project.py --old OldName --oldns OldNS NewName
"""

import argparse, shutil, sys, re, xml.etree.ElementTree as ET
from pathlib import Path

TEXT_EXT = {'.sln', '.vcxproj', '.filters', '.user', '.cpp', '.h', '.hpp', '.inl'}
PROJ_SET = {'.vcxproj', '.vcxproj.filters', '.vcxproj.user'}

# ---------------------------------------------------------------------
def detect_old_name(root: Path):
    vcx = list(root.glob('*.vcxproj'))
    return vcx[0].stem if vcx else None

def rename_file(src: Path, dst: Path):
    if not src.exists():
        return False
    if dst.exists():
        dst.unlink()
    print(f'[rename] {src.name} -> {dst.name}')
    shutil.move(str(src), str(dst))
    return True

# ---------------------------------------------------------------------
def rename_proj_files(root: Path, old: str, new: str):
    renamed = False
    for ext in PROJ_SET:
        src = root / f'{old}{ext}'
        dst = root / f'{new}{ext}'
        if rename_file(src, dst):
            renamed = True
    return renamed

# ---------------------------------------------------------------------
def update_vcxproj_xml(path: Path, old: str, new: str):
    if path.suffix.lower() != '.vcxproj' or not path.exists():
        return
    ET.register_namespace('', 'http://schemas.microsoft.com/developer/msbuild/2003')
    tree = ET.parse(path)
    ns = {'ns': tree.getroot().tag.split('}')[0].strip('{')}
    changed = False
    for tag in ('ProjectName', 'RootNamespace'):
        node = tree.find(f'.//ns:{tag}', ns)
        if node is not None and old in node.text:
            node.text = node.text.replace(old, new)
            changed = True
    if changed:
        tree.write(path, encoding='utf-8', xml_declaration=True)
        print(f'[edit ] {path} (XML tags)')

# ---------------------------------------------------------------------
def patch_text(path: Path, old: str, new: str, oldns: str, newns: str):
    try:
        data = path.read_text(encoding='utf-8', errors='ignore')
    except Exception:
        return
    rep = data.replace(old, new)
    rep = re.sub(rf'\bnamespace\s+{re.escape(oldns)}\b', f'namespace {newns}', rep)
    rep = rep.replace(f'{oldns}::', f'{newns}::')
    if rep != data:
        path.write_text(rep, encoding='utf-8')
        print(f'[edit ] {path}')

# ---------------------------------------------------------------------
def patch_all(root: Path, old: str, new: str, oldns: str, newns: str):
    for p in root.rglob('*'):
        if p.suffix.lower() in TEXT_EXT:
            patch_text(p, old, new, oldns, newns)
            if p.suffix.lower() == '.vcxproj':
                update_vcxproj_xml(p, old, new)

# ---------------------------------------------------------------------
def finalize_solution(root: Path, old: str, new: str):
    new_sln = root / f'{new}.sln'
    if not new_sln.exists():
        for s in root.glob('*.sln'):
            rename_file(s, new_sln)
            break
    # delete any remaining old-name .sln
    for old_sln in root.glob(f'*{old}*.sln'):
        if old_sln != new_sln:
            print(f'[delete] {old_sln.name}')
            old_sln.unlink(missing_ok=True)

# ---------------------------------------------------------------------
def delete_old_proj_files(root: Path, old: str):
    for ext in PROJ_SET:
        for f in root.glob(f'{old}{ext}'):
            print(f'[delete] {f.name}')
            f.unlink(missing_ok=True)

# ---------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser(description='Rename VS C++ project fully.')
    ap.add_argument('new', help='New project / namespace name')
    ap.add_argument('--old', help='Old project name (auto-detect)')
    ap.add_argument('--oldns', help='Old namespace (defaults to old name)')
    ap.add_argument('--dir', default='.', help='Root directory')
    args = ap.parse_args()

    root = Path(args.dir).resolve()
    if not root.exists():
        sys.exit('Root directory not found.')

    old = args.old or detect_old_name(root)
    if not old:
        sys.exit('Could not detect .vcxproj; specify --old.')

    if old == args.new:
        sys.exit('Old and new names identical.')

    oldns = args.oldns or old
    print(f'=== {old} -> {args.new}  (namespace {oldns} -> {args.new}) ===')

    if not rename_proj_files(root, old, args.new):
        print('[warn ] No project files renamed – verify old name.')

    patch_all(root, old, args.new, oldns, args.new)
    finalize_solution(root, old, args.new)
    delete_old_proj_files(root, old)

    print('✅ Rename complete – open the new .sln and rebuild.')

if __name__ == '__main__':
    main()
