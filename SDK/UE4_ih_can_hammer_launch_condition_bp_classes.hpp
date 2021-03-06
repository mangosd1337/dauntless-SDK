#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_can_hammer_launch_condition_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ih_can_hammer_launch_condition_bp.ih_can_hammer_launch_condition_bp_C
// 0x0000 (0x0028 - 0x0028)
class Uih_can_hammer_launch_condition_bp_C : public UInputBufferTransitionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ih_can_hammer_launch_condition_bp.ih_can_hammer_launch_condition_bp_C");
		return ptr;
	}


	bool CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
