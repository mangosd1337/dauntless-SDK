#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bttask_exit_rage_state_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bttask_exit_rage_state.bttask_exit_rage_state_C
// 0x0021 (0x00C1 - 0x00A0)
class Ubttask_exit_rage_state_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActionStartLocation;                                      // 0x00B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Aborted_;                                                 // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bttask_exit_rage_state.bttask_exit_rage_state_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void TriggerExitRageAudioEvent();
	void ExecuteUbergraph_bttask_exit_rage_state(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif