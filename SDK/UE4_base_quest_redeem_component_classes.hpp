#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_quest_redeem_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_quest_redeem_component.base_quest_redeem_component_C
// 0x0000 (0x03E0 - 0x03E0)
class Ubase_quest_redeem_component_C : public UArchonQuestRedeemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_quest_redeem_component.base_quest_redeem_component_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
