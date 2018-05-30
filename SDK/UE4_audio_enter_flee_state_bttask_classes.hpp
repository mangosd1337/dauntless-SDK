#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_audio_enter_flee_state_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C
// 0x0008 (0x00A8 - 0x00A0)
class Uaudio_enter_flee_state_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_audio_enter_flee_state_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
