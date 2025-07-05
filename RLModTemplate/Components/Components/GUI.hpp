#pragma once
#include "../Component.hpp"
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>

typedef HRESULT(__stdcall* Present)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

extern Present oPresent;
extern HWND window;
extern WNDPROC oWndProc;
extern ID3D11Device* pDevice;
extern ID3D11DeviceContext* pContext;
extern ID3D11RenderTargetView* mainRenderTargetView;

namespace RLMod
{
	class GUIComponent : public Component
	{
	public:
		GUIComponent();
		~GUIComponent();

		void OnCreate() override;
		void OnDestroy() override;

		bool Initialize();
		static void InitImGui();
		static void Render();
		static LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
		static void Toggle();



		int DisplayX = GetSystemMetrics(SM_CXSCREEN);
		int DisplayY = GetSystemMetrics(SM_CYSCREEN);

		// === Interface flags
		inline static bool IsOpen = false;
		inline static bool ShowMenu = true;
		inline static HANDLE InterfaceThread = nullptr;

		// === Feature toggles (static so usable anywhere)
		inline static bool showBallPrediction = false;
		inline static bool showBoostTimers = false;
		inline static bool showPlayerBoost = false;  // NEW  tracks the player-boost overlay
		inline static char  localPlayerName[32] = "";   // empty = no name filter
		inline static bool disableDemoExplosionFX = false;   // No Demo Smoke toggle
		// === ImGui initialized flag
		static bool IsInitializedStatic();
		static void SetInitializedStatic(bool value);

	private:
		static bool s_Initialized;
	};

	extern GUIComponent GUI;
}
