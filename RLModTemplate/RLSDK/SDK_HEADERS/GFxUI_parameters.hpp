/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: GFxUI_parameters.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedRLModding/RLMod-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function GFxUI.GFxEngine.UpdateMovieLoadingInfo
// [0x00420401] 
struct UGFxEngine_execUpdateMovieLoadingInfo_Params
{
	struct FLoadingMovieMapInfo                        LoadingInfo;                                      		// 0x0000 (0x00A0) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxEngine.Tick
// [0x00020800] 
struct UGFxEngine_eventTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] 
struct UGFxFSCmdHandler_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Cmd;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxInteraction.DebugInputKey
// [0x00020401] 
struct UGFxInteraction_execDebugInputKey_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Event;                                            		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020401] 
struct UGFxInteraction_execCloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020401] 
struct UGFxInteraction_execNotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x400020400] 
struct UGFxInteraction_execNotifyPlayerRemoved_Params
{
	int32_t                                            PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class ULocalPlayer*                                RemovedPlayer;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x400020400] 
struct UGFxInteraction_execNotifyPlayerAdded_Params
{
	int32_t                                            PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class ULocalPlayer*                                AddedPlayer;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x400020400] 
struct UGFxInteraction_execNotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020401] 
struct UGFxInteraction_execGetFocusMovie_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetFullScreen
// [0x00020401] 
struct UGFxMoviePlayer_execSetFullScreen_Params
{
	uint32_t                                           bFullScreen : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.IsHidden
// [0x00020401] 
struct UGFxMoviePlayer_execIsHidden_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetHidden
// [0x00020401] 
struct UGFxMoviePlayer_execSetHidden_Params
{
	uint32_t                                           bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.RenderOnce
// [0x00020401] 
struct UGFxMoviePlayer_execRenderOnce_Params
{
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] 
struct UGFxMoviePlayer_execUpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020001] 
struct UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params
{
	uint32_t                                           bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020001] 
struct UGFxMoviePlayer_execApplyPriorityBlurEffect_Params
{
	uint32_t                                           bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020803] 
struct UGFxMoviePlayer_eventApplyPriorityEffect_Params
{
	uint32_t                                           bRequestedBlurState : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bRequestedHiddenState : 1;                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024802] 
struct UGFxMoviePlayer_eventPlaySoundFromTheme_Params
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SoundThemeName;                                   		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            ThemeIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	// class UUISoundTheme*                               Theme;                                            		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020801] 
struct UGFxMoviePlayer_eventOnFocusLost_Params
{
	int32_t                                            LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020801] 
struct UGFxMoviePlayer_eventOnFocusGained_Params
{
	int32_t                                            LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020003] 
struct UGFxMoviePlayer_execConsoleCommand_Params
{
	class FString                                      Command;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class APlayerController*                           PC;                                               		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020803] 
struct UGFxMoviePlayer_eventGetPC_Params
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class ULocalPlayer*                                LocalPlayerOwner;                                 		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020803] 
struct UGFxMoviePlayer_eventGetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UEngine*                                     Eng;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024003] 
struct UGFxMoviePlayer_execInit_Params
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] 
struct UGFxMoviePlayer_execSetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Path;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020801] 
struct UGFxMoviePlayer_eventPostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020801] 
struct UGFxMoviePlayer_eventWidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020801] 
struct UGFxMoviePlayer_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptConstructor_Params
{
	class FString                                      ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptObject_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptString_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptFloat_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptInt_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptVoid_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020401] 
struct UGFxMoviePlayer_execInvoke_Params
{
	class FString                                      method;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FASValue>                            args;                                             		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      		// 0x0020 (0x0028) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] 
struct UGFxMoviePlayer_execActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020401] 
struct UGFxMoviePlayer_execCreateArray_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024401] 
struct UGFxMoviePlayer_execCreateObject_Params
{
	class FString                                      ASClass;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<struct FASValue>                            args;                                             		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableStringArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Arg;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableFloatArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<float>                                      Arg;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableIntArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<int32_t>                                    Arg;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FASValue>                            Arg;                                              		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableStringArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              Arg;                                              		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableFloatArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<float>                                      Arg;                                              		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableIntArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<int32_t>                                    Arg;                                              		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FASValue>                            Arg;                                              		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableObject_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Object;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableString_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableInt_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableNumber_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableBool_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B : 1;                                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariable_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              		// 0x0010 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024401] 
struct UGFxMoviePlayer_execGetVariableObject_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableString_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableInt_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableNumber_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableBool_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariable_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      		// 0x0010 (0x0028) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020401] 
struct UGFxMoviePlayer_execGetAVMVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020801] 
struct UGFxMoviePlayer_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] 
struct UGFxMoviePlayer_execFlushPlayerInput_Params
{
	uint32_t                                           capturekeysonly : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] 
struct UGFxMoviePlayer_execClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] 
struct UGFxMoviePlayer_execAddFocusIgnoreKey_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] 
struct UGFxMoviePlayer_execClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] 
struct UGFxMoviePlayer_execAddCaptureKey_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] 
struct UGFxMoviePlayer_execSetMovieCanReceiveInput_Params
{
	uint32_t                                           bCanReceiveInput : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] 
struct UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params
{
	uint32_t                                           bCanReceiveFocus : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] 
struct UGFxMoviePlayer_execSetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                         		// 0x0000 (0x0040) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] 
struct UGFxMoviePlayer_execSetView3D_Params
{
	struct FMatrix                                     matView;                                          		// 0x0000 (0x0040) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] 
struct UGFxMoviePlayer_execGetVisibleFrameRect_Params
{
	float                                              x0;                                               		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              y0;                                               		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              X1;                                               		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] 
struct UGFxMoviePlayer_execSetAlignment_Params
{
	uint8_t                                            A;                                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleRLMode
// [0x00020401] 
struct UGFxMoviePlayer_execSetViewScaleRLMode_Params
{
	uint8_t                                            SM;                                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] 
struct UGFxMoviePlayer_execSetViewport_Params
{
	int32_t                                            X;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Y;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Width;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Height;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] 
struct UGFxMoviePlayer_execGetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020401] 
struct UGFxMoviePlayer_execSetPriority_Params
{
	uint8_t                                            NewPriority;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020401] 
struct UGFxMoviePlayer_execSetExternalTexture_Params
{
	class FString                                      Resource;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                          		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020003] 
struct UGFxMoviePlayer_execSetExternalInterface_Params
{
	class UObject*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetTimingRLMode
// [0x00020401] 
struct UGFxMoviePlayer_execSetTimingRLMode_Params
{
	uint8_t                                            RLMode;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020003] 
struct UGFxMoviePlayer_execSetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] 
struct UGFxMoviePlayer_eventConditionalClearPause_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020801] 
struct UGFxMoviePlayer_eventOnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] 
struct UGFxMoviePlayer_eventOnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] 
struct UGFxMoviePlayer_execClose_Params
{
	uint32_t                                           Unload : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024401] 
struct UGFxMoviePlayer_execSetPause_Params
{
	uint32_t                                           bPausePlayback : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120001] 
struct UGFxMoviePlayer_execOnPostAdvance_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020401] 
struct UGFxMoviePlayer_execPostAdvance_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] 
struct UGFxMoviePlayer_execAdvance_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] 
struct UGFxMoviePlayer_eventStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020801] 
struct UGFxObject_eventWidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020801] 
struct UGFxObject_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] 
struct UGFxObject_execAttachMovie_Params
{
	class FString                                      symbolname;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      instancename;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Depth;                                            		// 0x0020 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UClass*                                      Type;                                             		// 0x0028 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] 
struct UGFxObject_execCreateEmptyMovieClip_Params
{
	class FString                                      instancename;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Depth;                                            		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UClass*                                      Type;                                             		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] 
struct UGFxObject_execGotoAndStopI_Params
{
	int32_t                                            frame;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] 
struct UGFxObject_execGotoAndStop_Params
{
	class FString                                      frame;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] 
struct UGFxObject_execGotoAndPlayI_Params
{
	int32_t                                            frame;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] 
struct UGFxObject_execGotoAndPlay_Params
{
	class FString                                      frame;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] 
struct UGFxObject_execActionScriptArray_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class UGFxObject*>                          ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] 
struct UGFxObject_execActionScriptObject_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] 
struct UGFxObject_execActionScriptString_Params
{
	class FString                                      method;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] 
struct UGFxObject_execActionScriptFloat_Params
{
	class FString                                      method;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] 
struct UGFxObject_execActionScriptInt_Params
{
	class FString                                      method;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] 
struct UGFxObject_execActionScriptVoid_Params
{
	class FString                                      method;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] 
struct UGFxObject_execInvoke_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FASValue>                            args;                                             		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      		// 0x0020 (0x0028) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] 
struct UGFxObject_execActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] 
struct UGFxObject_execActionScriptSetFunction_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] 
struct UGFxObject_execSetElementMemberString_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] 
struct UGFxObject_execSetElementMemberInt_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] 
struct UGFxObject_execSetElementMemberFloat_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] 
struct UGFxObject_execSetElementMemberBool_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B : 1;                                            		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] 
struct UGFxObject_execSetElementMemberObject_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                              		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] 
struct UGFxObject_execSetElementMember_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              		// 0x0018 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] 
struct UGFxObject_execGetElementMemberString_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] 
struct UGFxObject_execGetElementMemberInt_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] 
struct UGFxObject_execGetElementMemberFloat_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] 
struct UGFxObject_execGetElementMemberBool_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] 
struct UGFxObject_execGetElementMemberObject_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] 
struct UGFxObject_execGetElementMember_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      		// 0x0018 (0x0028) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] 
struct UGFxObject_execSetElementColorTransform_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASColorTransform                           cxform;                                           		// 0x0004 (0x0020) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] 
struct UGFxObject_execSetElementPosition_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] 
struct UGFxObject_execSetElementVisible_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           Visible : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] 
struct UGFxObject_execSetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     M;                                                		// 0x0010 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] 
struct UGFxObject_execSetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASDisplayInfo                              D;                                                		// 0x0004 (0x002C) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] 
struct UGFxObject_execGetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] 
struct UGFxObject_execGetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASDisplayInfo                              ReturnValue;                                      		// 0x0004 (0x002C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] 
struct UGFxObject_execSetElementString_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      S;                                                		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] 
struct UGFxObject_execSetElementInt_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            I;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] 
struct UGFxObject_execSetElementFloat_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              F;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] 
struct UGFxObject_execSetElementBool_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] 
struct UGFxObject_execSetElementObject_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  val;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] 
struct UGFxObject_execSetElement_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASValue                                    Arg;                                              		// 0x0008 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] 
struct UGFxObject_execGetElementString_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] 
struct UGFxObject_execGetElementInt_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] 
struct UGFxObject_execGetElementFloat_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] 
struct UGFxObject_execGetElementBool_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] 
struct UGFxObject_execGetElementObject_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      Type;                                             		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] 
struct UGFxObject_execGetElement_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASValue                                    ReturnValue;                                      		// 0x0008 (0x0028) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] 
struct UGFxObject_execSetText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] 
struct UGFxObject_execGetText_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] 
struct UGFxObject_execSetVisible_Params
{
	uint32_t                                           Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] 
struct UGFxObject_execSetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] 
struct UGFxObject_execSetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] 
struct UGFxObject_execSetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                           		// 0x0000 (0x0020) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] 
struct UGFxObject_execSetPosition_Params
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] 
struct UGFxObject_execSetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                		// 0x0000 (0x002C) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] 
struct UGFxObject_execGetDisplayMatrix3D_Params
{
	struct FMatrix                                     ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] 
struct UGFxObject_execGetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] 
struct UGFxObject_execGetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] 
struct UGFxObject_execGetPosition_Params
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] 
struct UGFxObject_execGetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026401] 
struct UGFxObject_execTranslateString_Params
{
	class FString                                      StringToTranslate;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] 
struct UGFxObject_execSetFunction_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     Context;                                          		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       fname;                                            		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] 
struct UGFxObject_execSetObject_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                              		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] 
struct UGFxObject_execSetString_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxObject.SetInt
// [0x00020401] 
struct UGFxObject_execSetInt_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] 
struct UGFxObject_execSetFloat_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] 
struct UGFxObject_execSetBool_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B : 1;                                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.Set
// [0x00020401] 
struct UGFxObject_execSet_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              		// 0x0010 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] 
struct UGFxObject_execGetObjectW_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] 
struct UGFxObject_execGetString_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetInt
// [0x00020401] 
struct UGFxObject_execGetInt_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] 
struct UGFxObject_execGetFloat_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] 
struct UGFxObject_execGetBool_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.Get
// [0x00020401] 
struct UGFxObject_execGet_Params
{
	class FString                                      Member;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      		// 0x0010 (0x0028) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x400020802] 
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x400020802] 
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x400020802] 
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x400020802] 
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x400020802] 
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x400020C00] 
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Cmd;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] 
struct UGFxClikWidget_execASRemoveAllEventListeners_Params
{
	class FString                                      Event;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] 
struct UGFxClikWidget_execAS3AddEventListener_Params
{
	class FString                                      Type;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            listenerPriority;                                 		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           useWeakReference : 1;                             		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] 
struct UGFxClikWidget_execASAddEventListener_Params
{
	class FString                                      Type;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      func;                                             		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] 
struct UGFxClikWidget_execSetListener_Params
{
	class UGFxObject*                                  O;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Listener;                                         		// 0x0018 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] 
struct UGFxClikWidget_execGetEventStringFromTypename_Params
{
	struct FName                                       Typename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                      Typestring;                                       		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020003] 
struct UGFxClikWidget_execRemoveAllEventListeners_Params
{
	class FString                                      Event;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024003] 
struct UGFxClikWidget_execAddEventListener_Params
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             Listener;                                         		// 0x0008 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           useCapture : 1;                                   		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            listenerPriority;                                 		// 0x0024 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           useWeakReference : 1;                             		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class UGFxObject*                                  O;                                                		// 0x0030 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  funcobj;                                          		// 0x0038 (0x0008) [0x0000000000000000]               
	// class FString                                      Typestring;                                       		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120001] 
struct UGFxClikWidget_execEventListener_Params
{
	struct FEventData                                  Data;                                             		// 0x0000 (0x0038) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
