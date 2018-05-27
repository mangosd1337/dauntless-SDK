#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_endurance_2items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_endurance_2items_ab.keyword_endurance_2items_ab_C
// 0x0018 (0x05E8 - 0x05D0)
class Ukeyword_endurance_2items_ab_C : public Ukeyword_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	float                                              MaxStaminaMultiplier;                                     // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRegenMultiplier;                                   // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EffectTag;                                                // 0x05E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_endurance_2items_ab.keyword_endurance_2items_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_keyword_endurance_2items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
