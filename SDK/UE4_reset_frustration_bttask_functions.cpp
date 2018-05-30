// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_reset_frustration_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function reset_frustration_bttask.reset_frustration_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureset_frustration_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function reset_frustration_bttask.reset_frustration_bttask_C.ReceiveExecuteAI");

	Ureset_frustration_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function reset_frustration_bttask.reset_frustration_bttask_C.ExecuteUbergraph_reset_frustration_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureset_frustration_bttask_C::ExecuteUbergraph_reset_frustration_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function reset_frustration_bttask.reset_frustration_bttask_C.ExecuteUbergraph_reset_frustration_bttask");

	Ureset_frustration_bttask_C_ExecuteUbergraph_reset_frustration_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
