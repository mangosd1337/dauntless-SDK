// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_transmog_button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_transmog_button.w_transmog_button_C.OnLoaded_A058EA6248D678A919D5DF9190C13AD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_button_C::OnLoaded_A058EA6248D678A919D5DF9190C13AD1(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_button.w_transmog_button_C.OnLoaded_A058EA6248D678A919D5DF9190C13AD1");

	Uw_transmog_button_C_OnLoaded_A058EA6248D678A919D5DF9190C13AD1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_button.w_transmog_button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_transmog_button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_button.w_transmog_button_C.Construct");

	Uw_transmog_button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_button.w_transmog_button_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_button_C::Set_Selected(bool InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_button.w_transmog_button_C.Set Selected");

	Uw_transmog_button_C_Set_Selected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_button.w_transmog_button_C.ExecuteUbergraph_w_transmog_button
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_button_C::ExecuteUbergraph_w_transmog_button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_button.w_transmog_button_C.ExecuteUbergraph_w_transmog_button");

	Uw_transmog_button_C_ExecuteUbergraph_w_transmog_button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
