// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AoE_IH_Blast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AoE_IH_Blast.BP_AoE_IH_Blast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AoE_IH_Blast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_Blast.BP_AoE_IH_Blast_C.UserConstructionScript");

	ABP_AoE_IH_Blast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_Blast.BP_AoE_IH_Blast_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AoE_IH_Blast_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_Blast.BP_AoE_IH_Blast_C.ReceiveTick");

	ABP_AoE_IH_Blast_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_Blast.BP_AoE_IH_Blast_C.ExecuteUbergraph_BP_AoE_IH_Blast
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AoE_IH_Blast_C::ExecuteUbergraph_BP_AoE_IH_Blast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_Blast.BP_AoE_IH_Blast_C.ExecuteUbergraph_BP_AoE_IH_Blast");

	ABP_AoE_IH_Blast_C_ExecuteUbergraph_BP_AoE_IH_Blast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
