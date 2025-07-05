#pragma once
#include "../RLModule.hpp"

namespace RLMod
{
	// This is an example module.
	class PlaceholderRLModule : public RLModule
	{
	private:
		bool m_placeholder;
		int32_t m_someValue;

	public:
		PlaceholderRLModule() = delete;
		PlaceholderRLModule(const std::string& name, const std::string& description, uint32_t states);
		~PlaceholderRLModule() override;

	public:
		void OnCreate() override;
		void OnDestroy() override;
		void OnCreateVariables() override;
		void OnSettingChanged() override;
		void OnCanvasDraw(class UCanvas* unrealCanvas) override;

	public:
		void DoAThing();
	};
}