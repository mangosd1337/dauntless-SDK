#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_receive_hit_bpuc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_receive_hit_bpuc.player_receive_hit_bpuc_C
// 0x0004 (0x003C - 0x0038)
class Uplayer_receive_hit_bpuc_C : public UUnlockCondition_Blueprint
{
public:
	int                                                HitCountThreshold;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_receive_hit_bpuc.player_receive_hit_bpuc_C");
		return ptr;
	}


	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif