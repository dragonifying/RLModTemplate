#include "Core.hpp"
#include "../Includes.hpp"
#include "GUI.hpp"



#pragma comment(lib, "d3d11.lib") // optional, usually only needed in one .cpp



namespace RLMod
{
	std::atomic<HANDLE> CoreComponent::m_mainThread = nullptr;

	CoreComponent::CoreComponent() : Component("Core", "Initializes globals, components, and modules.") { OnCreate(); }

	CoreComponent::~CoreComponent() { OnDestroy(); }

	void CoreComponent::OnCreate() {}

	void CoreComponent::OnDestroy()
	{
		if (m_mainThread)
		{
			CloseHandle(m_mainThread);
			m_mainThread = nullptr;
		}

#ifdef CR_MINHOOK
		MinHook::MH_Uninitialize();
#endif
	}

	bool CoreComponent::Initialize()
	{
		if (!IsInitialized())
		{
			if (Console.Initialize()) // Initialize the console file which also opens the standard out stream.
			{
				if (FindGlobals())
				{
					Console.Notify(GetNameFormatted() + "Entry Point " + Format::ToHex(reinterpret_cast<void*>(GetRLModuleHandleW(nullptr))));
					Console.Notify(GetNameFormatted() + "Global Objects: " + Format::ToHex(UObject::GObjObjects()));
					Console.Notify(GetNameFormatted() + "Global Names: " + Format::ToHex(FName::Names()));

					


#ifdef CR_MINHOOK
					MinHook::MH_STATUS minhookStatus = MinHook::MH_Initialize();

					if (minhookStatus != MinHook::MH_STATUS::MH_OK)
					{
						Console.Error(GetNameFormatted() + "Failed to initialize MinHook, cannot continue!");
						return false;
					}
#endif

					

					GameState.Initialize();         // Unimplemented.
					Instances.Initialize();         // Initialize class instances.
					Variables.Initialize();         // Initialize settings and commands.
					Manager.Initialize();           // Initialize all modules.
					Variables.SetupVariables();     // Load any previously saved settings.
					Manager.UpdateAllSettings();    // Apply loaded settings to modules.
					Hooks.Initialize();             // Hook setup (if implemented).
					GUI.Initialize();               // Initialize GUI (creates rendering thread)
					Events.Initialize();            // Initialize event hooking (e.g. ProcessEvent)

					Console.Success(GetNameFormatted() + "Initialized!");
					SetInitialized(true);
				}
				else
				{
					Console.Error(GetNameFormatted() + "Failed to find globals!");
				}
			}
			else
			{
				MessageBoxA(NULL, "Failed to initialize console, cannot continue!", "RLMod", (IDOK | MB_ICONHAND));
			}
		}

		return IsInitialized();
	}


	void CoreComponent::InitializeThread()
	{
		if (!m_mainThread)
		{
			m_mainThread = CreateThread(nullptr, 0, CoreComponent::OnThreadCreated, nullptr, 0, nullptr);
		}
	}

	DWORD WINAPI CoreComponent::OnThreadCreated(LPVOID lpParam)
	{
		// ? Initialize core systems
		Core.Initialize();

		// ? Optional delay to allow game startup tasks to settle
		Sleep(2000);

		// ? Do NOT initialize ImGui here  it will be done in PostRender
		return 0;
	}


	bool CoreComponent::FindGlobals()
	{
		if (!UObject::GObjObjects() && !FName::Names())
		{
			constexpr unsigned char GNames_Pattern[] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x35\x25\x02\x00";
			constexpr char GNames_Mask[] = "??????xx??xxxxxx";
			uintptr_t GNames_Addr = Memory::FindPattern(GNames_Pattern, GNames_Mask);
			uintptr_t GObjects_Addr = GNames_Addr + 0x48;

			GObjects = reinterpret_cast<TArray<UObject*>*>(GObjects_Addr);
			GNames = reinterpret_cast<TArray<FNameEntry*>*>(GNames_Addr);
		}

		return AreGlobalsValid();
	}

	bool CoreComponent::AreGlobalsValid()
	{
		return (AreGObjectsValid() && AreGNamesValid());
	}

	bool CoreComponent::AreGObjectsValid()
	{
		if (UObject::GObjObjects()
			&& !UObject::GObjObjects()->empty()
			&& (UObject::GObjObjects()->capacity() > UObject::GObjObjects()->size()))
		{
			return true;
		}

		return false;
	}

	bool CoreComponent::AreGNamesValid()
	{
		if (FName::Names()
			&& !FName::Names()->empty()
			&& (FName::Names()->capacity() > FName::Names()->size()))
		{
			return true;
		}

		return false;
	}

	class CoreComponent Core;
}