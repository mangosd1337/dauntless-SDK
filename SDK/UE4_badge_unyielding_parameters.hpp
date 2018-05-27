#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_badge_unyielding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function badge_unyielding.badge_unyielding_C.GetSpecificBadgeScore
struct Abadge_unyielding_C_GetSpecificBadgeScore_Params
{
	class Aplayer_state_bp_C**                         PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitBadgeThreshold;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ImpressivenessScore;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   EliteLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function badge_unyielding.badge_unyielding_C.UserConstructionScript
struct Abadge_unyielding_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
