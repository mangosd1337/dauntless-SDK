#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_ResetFleeTimer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTTask_ResetFleeTimer_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_ResetFleeTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
