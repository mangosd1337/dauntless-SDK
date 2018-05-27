// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_montage_from_loco_state_bpns_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function end_montage_from_loco_state_bpns.end_montage_from_loco_state_bpns_C.Received_NotifyTick
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uend_montage_from_loco_state_bpns_C::Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_montage_from_loco_state_bpns.end_montage_from_loco_state_bpns_C.Received_NotifyTick");

	Uend_montage_from_loco_state_bpns_C_Received_NotifyTick_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
