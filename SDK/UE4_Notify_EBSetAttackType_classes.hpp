#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Notify_EBSetAttackType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Notify_EBSetAttackType.Notify_EBSetAttackType_C
// 0x0001 (0x0031 - 0x0030)
class UNotify_EBSetAttackType_C : public UAnimNotifyState
{
public:
	TEnumAsByte<EBAttackType>                          EB_Attack_Type;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Notify_EBSetAttackType.Notify_EBSetAttackType_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
