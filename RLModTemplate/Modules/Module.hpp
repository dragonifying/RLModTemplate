#pragma once
#include "../pch.hpp"
#include "../Extensions/Includes.hpp"

namespace RLMod
{
	// Base class for all in game modules.
	class RLModule
	{
	private:
		std::string m_name;				// RLModules name.
		std::string m_description;		// RLModules description.
		uint32_t m_allowedStates;		// Game states that this module can be used in.
		bool m_initialized;				// If the modules settings have been loaded, and it's safe to use its functions.

	public:
		RLModule() = delete;
		RLModule(const std::string& name, const std::string& description, uint32_t states);
		RLModule(const RLModule& module);
		virtual ~RLModule();

	public:
		virtual void OnCreate(); // Initialize the default values for class members here.
		virtual void OnDestroy(); // Do class cleanup here, such as destroy created pointers.
		virtual void OnCreateVariables(); // Create settings and commands with the manager component here.
		virtual void OnSettingChanged(); // Update internal settings here when they are changed by the user.
		virtual void OnCanvasDraw(class UCanvas* unrealCanvas); // Called from the games main thread on the CPU, 60 times every second.

	public:
		std::string GetName() const;
		std::string GetNameFormatted() const;
		std::string GetDescription() const;
		uint32_t GetAllowedStates() const;
		bool IsAllowed() const;
		bool IsInitialized() const;
		void SetInitialized(bool bInitialized);

	public:
		RLModule& operator=(const RLModule& module);
	};
}