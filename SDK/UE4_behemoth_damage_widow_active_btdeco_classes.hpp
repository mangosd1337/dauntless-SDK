#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_damage_widow_active_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_damage_widow_active_btdeco.behemoth_damage_widow_active_btdeco_C
// 0x0000 (0x00A0 - 0x00A0)
class Ubehemoth_damage_widow_active_btdeco_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_damage_widow_active_btdeco.behemoth_damage_widow_active_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif