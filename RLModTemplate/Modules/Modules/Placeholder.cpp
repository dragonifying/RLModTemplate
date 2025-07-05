#include "Placeholder.hpp"
#include "../../Components/Includes.hpp"

namespace RLMod
{
	PlaceholderRLModule::PlaceholderRLModule(const std::string& name, const std::string& description, uint32_t states) : RLModule(name, description, states) { OnCreate(); }

	PlaceholderRLModule::~PlaceholderRLModule() { OnDestroy(); }

	void PlaceholderRLModule::OnCreate()
	{
		m_placeholder = false;
		m_someValue = 0;
	}

	void PlaceholderRLModule::OnDestroy()
	{
		SetInitialized(false);
	}

	void PlaceholderRLModule::OnCreateVariables()
	{
		// When someone uses the command "placeholder_do_thing", this will trigger the function "DoAThing" in "PlaceholderRLModule".
		Variables.CreateCommand("placeholder_do_thing", new Command(VariableIds::PLACEHOLDER_DO_THING, "Calls the \"DoAThing\" function in the placeholder module."))->BindCallback([&]() { Manager.PlaceholderRLMod->OnSettingChanged(); });

		// When changes the setting "placeholder_can_do_thing true", we automatically callback to "PlaceholderRLModule" and tell it to update its settings stored in that class.
		Variables.CreateSetting("placeholder_can_do_thing", new Setting(VariableIds::PLACEHOLDER_ENABLED, SettingTypes::Bool, "Enable disable a boolean in the placeholder module.", "false", true))->BindCallback([&]() { Manager.PlaceholderRLMod->OnSettingChanged(); });

		// Integer setting that has a minimum value of "0" and a maximum value of "100".
		Variables.CreateSetting("placeholder_some_value", new Setting(VariableIds::PLACEHOLDER_SOME_VALUE, SettingTypes::Int32, "Some random integer value with a custom range.", "0", true))->SetInt32Range(0, 100)->BindCallback([&]() { Manager.PlaceholderRLMod->OnSettingChanged(); });
	}

	void PlaceholderRLModule::OnSettingChanged()
	{
		SetInitialized(false);
		m_placeholder = Variables.GetSetting(VariableIds::PLACEHOLDER_ENABLED)->GetBoolValue();
		m_someValue = Variables.GetSetting(VariableIds::PLACEHOLDER_SOME_VALUE)->GetInt32Value();
		SetInitialized(true);
	}

	void PlaceholderRLModule::OnCanvasDraw(class UCanvas* unrealCanvas)
	{
		if (IsInitialized() && IsAllowed())
		{
			if (unrealCanvas)
			{
				// Draw with the canvas here!
			}
		}
	}

	void PlaceholderRLModule::DoAThing()
	{
		if (IsInitialized() && IsAllowed())
		{
			if (m_placeholder)
			{
				Console.Success("(DoAThing) Wow! Placeholder is set to true!");
			}
			else
			{
				Console.Error("(DoAThing) Wow! Placeholder is set to false!");
			}
		}
	}
}