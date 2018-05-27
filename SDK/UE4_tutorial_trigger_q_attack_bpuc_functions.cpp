// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_tutorial_trigger_q_attack_bpuc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function tutorial_trigger_q_attack_bpuc.tutorial_trigger_q_attack_bpuc_C.OnEvaluate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ututorial_trigger_q_attack_bpuc_C::OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function tutorial_trigger_q_attack_bpuc.tutorial_trigger_q_attack_bpuc_C.OnEvaluate");

	Ututorial_trigger_q_attack_bpuc_C_OnEvaluate_Params params;
	params.PlayerController = PlayerController;
	params.OwningQuest = OwningQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
