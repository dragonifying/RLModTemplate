#include "RLModule.hpp"
#include "../Components/Includes.hpp"

namespace RLMod
{
	RLModule::RLModule(const std::string& name, const std::string& description, uint32_t states) : m_name(name), m_description(description), m_allowedStates(states), m_initialized(false) { OnCreate(); }

	RLModule::RLModule(const RLModule& module) : m_name(module.m_name), m_description(module.m_description), m_allowedStates(module.m_allowedStates), m_initialized(module.m_initialized) {}

	RLModule::~RLModule() { OnDestroy(); }

	void RLModule::OnCreate() {}

	void RLModule::OnDestroy()
	{
		SetInitialized(false);
	}

	void RLModule::OnCreateVariables()
	{
		SetInitialized(false);
		// Update internal settings here.
		SetInitialized(true);
	}

	void RLModule::OnSettingChanged()
	{
		// Create your module specific variables here.
	}

	void RLModule::OnCanvasDraw(class UCanvas* unrealCanvas)
	{
		if (IsInitialized() && IsAllowed())
		{
			if (unrealCanvas)
			{

			}
		}
	}

	std::string RLModule::GetName() const
	{
		return m_name;
	}

	std::string RLModule::GetNameFormatted() const
	{
		return ("[" + GetName() + "] ");
	}

	std::string RLModule::GetDescription() const
	{
		return m_description;
	}

	uint32_t RLModule::GetAllowedStates() const
	{
		return m_allowedStates;
	}

	bool RLModule::IsAllowed() const
	{
		return (GetAllowedStates() & States::STATES_All) || (GetAllowedStates() & GameState.GetRawState());
	}

	bool RLModule::IsInitialized() const
	{
		return m_initialized;
	}

	void RLModule::SetInitialized(bool bInitialized)
	{
		m_initialized = bInitialized;
	}

	RLModule& RLModule::operator=(const RLModule& module)
	{
		m_name = module.m_name;
		m_description = module.m_description;
		m_allowedStates = module.m_allowedStates;
		m_initialized = module.m_initialized;
		return *this;
	}
}