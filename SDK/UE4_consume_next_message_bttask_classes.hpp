#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_consume_next_message_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass consume_next_message_bttask.consume_next_message_bttask_C
// 0x0008 (0x00A8 - 0x00A0)
class Uconsume_next_message_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass consume_next_message_bttask.consume_next_message_bttask_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_consume_next_message_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
