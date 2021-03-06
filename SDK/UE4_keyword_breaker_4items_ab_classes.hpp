#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_breaker_4items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_breaker_4items_ab.keyword_breaker_4items_ab_C
// 0x0008 (0x05F8 - 0x05F0)
class Ukeyword_breaker_4items_ab_C : public Ukeyword_breaker_3items_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_breaker_4items_ab.keyword_breaker_4items_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_keyword_breaker_4items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
