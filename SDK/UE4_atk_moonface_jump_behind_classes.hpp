#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atk_moonface_jump_behind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass atk_moonface_jump_behind.atk_moonface_jump_behind_C
// 0x0000 (0x05E8 - 0x05E8)
class Aatk_moonface_jump_behind_C : public ABP_BehemothAction_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass atk_moonface_jump_behind.atk_moonface_jump_behind_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
