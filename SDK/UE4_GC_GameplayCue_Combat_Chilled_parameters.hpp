#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_Chilled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Combat_Chilled.GC_GameplayCue_Combat_Chilled_C.UserConstructionScript
struct AGC_GameplayCue_Combat_Chilled_C_UserConstructionScript_Params
{
};

// Function GC_GameplayCue_Combat_Chilled.GC_GameplayCue_Combat_Chilled_C.K2_HandleGameplayCue
struct AGC_GameplayCue_Combat_Chilled_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_GameplayCue_Combat_Chilled.GC_GameplayCue_Combat_Chilled_C.ExecuteUbergraph_GC_GameplayCue_Combat_Chilled
struct AGC_GameplayCue_Combat_Chilled_C_ExecuteUbergraph_GC_GameplayCue_Combat_Chilled_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
