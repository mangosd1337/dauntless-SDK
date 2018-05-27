#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_fortress_4items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_fortress_4items_ab.keyword_fortress_4items_ab_C
// 0x0008 (0x0608 - 0x0600)
class Ukeyword_fortress_4items_ab_C : public Ukeyword_fortress_3items_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_fortress_4items_ab.keyword_fortress_4items_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_keyword_fortress_4items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
