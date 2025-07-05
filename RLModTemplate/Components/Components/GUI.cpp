#include "Gui.hpp"
#include "../../ImGui/imgui.h"
#include "../../ImGui/imgui_impl_dx11.h"
#include "../../ImGui/imgui_impl_win32.h"
#include <cmath>
#include <d3d11.h>
#include <dxgi.h>
#include <Windows.h>
#pragma comment(lib, "d3d11.lib")

#include "Console.hpp"

#include "Instances.hpp"
#include "kiero.h"
#include <sstream>
#include "Drawing.hpp"





typedef HRESULT(__stdcall* Present)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

namespace RLMod {

    GUIComponent GUI;

    bool GUIComponent::s_Initialized = false;
    bool init = false;




    GUIComponent::GUIComponent() : Component("GUI", "Manages the graphical user interface.") {}
    GUIComponent::~GUIComponent() {}

    void GUIComponent::OnCreate() {}
    void GUIComponent::OnDestroy() {}

    bool GUIComponent::IsInitializedStatic() { return s_Initialized; }
    void GUIComponent::SetInitializedStatic(bool value) { s_Initialized = value; }

    void GUIComponent::Toggle() { IsOpen = !IsOpen; }

    void GUIComponent::InitImGui()
    {
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO(); (void)io;
        io.FontGlobalScale = 1.15f;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

        ImGuiStyle& s = ImGui::GetStyle();
        ImGui::StyleColorsDark();                       // base
        s.WindowRounding = 10.0f;
        s.FrameRounding = 6.0f;
        s.GrabRounding = 4.0f;
        s.ScrollbarSize = 14.0f;
        s.WindowBorderSize = 1.0f;
        s.FramePadding = { 10, 6 };
        s.ItemSpacing = { 12, 10 };
        s.WindowTitleAlign = { 0.5f, 0.5f };
        s.WindowMinSize = { 320, 140 };

        // ??? Rocket-League palette ???????????????????????????????????????????????
        auto rgb = [](int r, int g, int b, float a = 1.f) { return ImVec4(r / 255.f, g / 255.f, b / 255.f, a); };
        ImVec4 blue = rgb(0, 123, 255);   // team blue
        ImVec4 orange = rgb(255, 127, 0);   // team orange
        ImVec4 dkBg = rgb(15, 18, 25, 0.97f);

        s.Colors[ImGuiCol_WindowBg] = dkBg;
        s.Colors[ImGuiCol_ChildBg] = rgb(10, 14, 22, 0.94f);
        s.Colors[ImGuiCol_PopupBg] = rgb(20, 24, 30, 0.96f);
        s.Colors[ImGuiCol_Border] = rgb(60, 80, 100, 0.40f);
        s.Colors[ImGuiCol_BorderShadow] = rgb(0, 0, 0, 0);

        // text / widgets
        s.Colors[ImGuiCol_Text] = rgb(230, 235, 250);
        s.Colors[ImGuiCol_TextDisabled] = rgb(120, 130, 150);

        // headers & tabs use blue - orange
        s.Colors[ImGuiCol_Header] = blue;
        s.Colors[ImGuiCol_HeaderHovered] = rgb(80, 160, 255);
        s.Colors[ImGuiCol_HeaderActive] = blue;

        s.Colors[ImGuiCol_Tab] = rgb(30, 50, 85, 0.85f);
        s.Colors[ImGuiCol_TabHovered] = blue;
        s.Colors[ImGuiCol_TabActive] = rgb(25, 80, 200);
        s.Colors[ImGuiCol_TabUnfocused] = rgb(25, 35, 55, 0.70f);
        s.Colors[ImGuiCol_TabUnfocusedActive] = rgb(35, 70, 130, 0.85f);

        // buttons get the orange accent
        s.Colors[ImGuiCol_Button] = orange;
        s.Colors[ImGuiCol_ButtonHovered] = rgb(255, 160, 60);
        s.Colors[ImGuiCol_ButtonActive] = rgb(200, 100, 0);

        s.Colors[ImGuiCol_SliderGrab] = blue;
        s.Colors[ImGuiCol_SliderGrabActive] = rgb(80, 160, 255);
        s.Colors[ImGuiCol_CheckMark] = orange;

        ImGui_ImplWin32_Init(window);
        ImGui_ImplDX11_Init(pDevice, pContext);
    }




    void GUIComponent::Render()
    {
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        if (IsOpen)
        {
            ImGui::SetNextWindowBgAlpha(0.95f);
            ImGui::SetNextWindowSize({ 360,240 }, ImGuiCond_FirstUseEver);

            if (ImGui::Begin("Rocket League RLMod", &IsOpen,
                ImGuiWindowFlags_NoCollapse |
                ImGuiWindowFlags_AlwaysAutoResize |
                ImGuiWindowFlags_NoSavedSettings))
            {
                if (ImGui::BeginTabBar("MainTabs"))
                {
                    if (ImGui::BeginTabItem("Features"))
                    {
                        ImGui::TextColored({ 1,1,0,1 }, "Feature Controls");
                        ImGui::Separator();
                        ImGui::Text("Add toggle features here.");
                        ImGui::EndTabItem();
                    }
                    ImGui::EndTabBar();
                }
                ImGui::End();
            }
        }

        ImGui::Render();
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    }













    LRESULT __stdcall GUIComponent::WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        ImGuiIO& io = ImGui::GetIO();
        POINT mPos;
        GetCursorPos(&mPos);
        ScreenToClient(window, &mPos);
        io.MousePos = ImVec2((float)mPos.x, (float)mPos.y);

        if (uMsg == WM_KEYUP && wParam == VK_INSERT)
            GUI.Toggle();

        // Always pass to ImGui
        if (GUI.IsOpen)
        {
            ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
            return true; // Block input from reaching Rocket League
        }

        // GUI is closed ? let input through
        return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
    }



    HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
    {
        if (!init)
        {
            if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
            {
                pDevice->GetImmediateContext(&pContext);
                DXGI_SWAP_CHAIN_DESC sd;
                pSwapChain->GetDesc(&sd);
                window = sd.OutputWindow;
                ID3D11Texture2D* pBackBuffer = nullptr;
                pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
                pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
                pBackBuffer->Release();
                oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)GUIComponent::WndProc);
                GUI.InitImGui();
                init = true;
            }
            else return oPresent(pSwapChain, SyncInterval, Flags);
        }

        GUI.Render();
        pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        return oPresent(pSwapChain, SyncInterval, Flags);
    }

    DWORD WINAPI MainThread()
    {
        bool init_hook = false;
        do
        {
            if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
            {
                kiero::bind(8, (void**)&oPresent, hkPresent);
                init_hook = true;
            }
        } while (!init_hook);
        return TRUE;
    }

    bool GUIComponent::Initialize()
    {
        if (!IsInitialized())
        {
            InterfaceThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(MainThread), nullptr, 0, nullptr);
#ifdef _DEBUG
            Console.Success(GetNameFormatted() + " Initialized!");
#endif
            SetInitialized(true);
        }
        return IsInitialized();
    }
}
