#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ihammer_iron_00_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ihammer_iron_00_bp.ihammer_iron_00_bp_C
// 0x0000 (0x0B60 - 0x0B60)
class Aihammer_iron_00_bp_C : public Abp_ihammer_weapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ihammer_iron_00_bp.ihammer_iron_00_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
