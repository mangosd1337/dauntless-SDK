#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_LanternActivate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GC_GameplayCue_Combat_LanternActivate.GC_GameplayCue_Combat_LanternActivate_C
// 0x0018 (0x0448 - 0x0430)
class AGC_GameplayCue_Combat_LanternActivate_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DischargeLoopEffect;                                      // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_GameplayCue_Combat_LanternActivate.GC_GameplayCue_Combat_LanternActivate_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GC_GameplayCue_Combat_LanternActivate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
