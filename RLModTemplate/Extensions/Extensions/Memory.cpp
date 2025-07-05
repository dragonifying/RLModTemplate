#include "Memory.hpp"
#include <Psapi.h>
#pragma comment(lib, "Psapi.lib")

namespace RLRLMod::Memory
{
    std::string GetProcessName()
    {
        char fileName[MAX_PATH];
        GetRLModuleFileNameA(nullptr, fileName, MAX_PATH);
        std::filesystem::path filePath(fileName);

        if (std::filesystem::exists(filePath) && filePath.has_extension())
        {
            return filePath.stem().string();
        }

        return "";
    }

    uintptr_t GetEntryPoint()
    {
        return reinterpret_cast<uintptr_t>(GetRLModuleHandleW(nullptr));
    }

    uintptr_t GetOffsetFromEntry(uintptr_t address)
    {
        uintptr_t entryPoint = GetEntryPoint();

        if (address > entryPoint)
        {
            return (address - entryPoint);
        }

        return NULL;
    }

    uintptr_t FindPattern(HMODULE hRLModule, const uint8_t* bytePattern, const std::string& mask, size_t offset)
    {
        if (hRLModule && bytePattern && !mask.empty())
        {
            MODULEINFO moduleInfo;
            ZeroMemory(&moduleInfo, sizeof(moduleInfo));

            if (K32GetRLModuleInformation(GetCurrentProcess(), hRLModule, &moduleInfo, sizeof(moduleInfo)) != 0)
            {
                uintptr_t base = reinterpret_cast<uintptr_t>(moduleInfo.lpBaseOfDll);
                uintptr_t start = (base + offset);
                uintptr_t end = ((base + moduleInfo.SizeOfImage) - mask.length());

                for (uintptr_t address = start; address < end; address++)
                {
                    bool found = true;

                    for (size_t i = 0; i < mask.length(); i++)
                    {
                        if ((*reinterpret_cast<uint8_t*>(address + i) != bytePattern[i]) && (static_cast<int32_t>(mask[i]) != '?'))
                        {
                            found = false;
                            break;
                        }
                    }

                    if (found)
                    {
                        return address;
                    }
                }
            }
        }

        return 0;
    }

    uintptr_t FindPattern(const uint8_t* bytePattern, const std::string& maskStr, size_t offset)
    {
        return FindPattern(GetRLModuleHandleW(nullptr), bytePattern, maskStr, offset);
    }
}