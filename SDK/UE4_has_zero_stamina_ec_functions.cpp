// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_has_zero_stamina_ec_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function has_zero_stamina_ec.has_zero_stamina_ec_C.CanTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonWeapon**          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uhas_zero_stamina_ec_C::CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function has_zero_stamina_ec.has_zero_stamina_ec_C.CanTransition");

	Uhas_zero_stamina_ec_C_CanTransition_Params params;
	params.Character = Character;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
