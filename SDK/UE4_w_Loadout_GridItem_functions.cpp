// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_GridItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetContentColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_Loadout_GridItem_C::GetContentColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetContentColorAndOpacity_1");

	Uw_Loadout_GridItem_C_GetContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Get_StrokeHover_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_GridItem_C::Get_StrokeHover_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Get_StrokeHover_Visibility_1");

	Uw_Loadout_GridItem_C_Get_StrokeHover_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Get_RarityBG_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_Loadout_GridItem_C::Get_RarityBG_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Get_RarityBG_ColorAndOpacity_1");

	Uw_Loadout_GridItem_C_Get_RarityBG_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Loadout_GridItem_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnKeyDown");

	Uw_Loadout_GridItem_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Loadout_GridItem_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnMouseButtonDown");

	Uw_Loadout_GridItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetEmptyIconBrokenIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::SetEmptyIconBrokenIcon(class UImage* InputPin, EItemGroupType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetEmptyIconBrokenIcon");

	Uw_Loadout_GridItem_C_SetEmptyIconBrokenIcon_Params params;
	params.InputPin = InputPin;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetStackCountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Item_Kind                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::SetStackCountVisibility(EItemGroupType Item_Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetStackCountVisibility");

	Uw_Loadout_GridItem_C_SetStackCountVisibility_Params params;
	params.Item_Kind = Item_Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Loadout_GridItem_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetText_1");

	Uw_Loadout_GridItem_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Visibility_StackCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_GridItem_C::Visibility_StackCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Visibility_StackCount");

	Uw_Loadout_GridItem_C_Visibility_StackCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetVisibility_Equipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_GridItem_C::GetVisibility_Equipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetVisibility_Equipped");

	Uw_Loadout_GridItem_C_GetVisibility_Equipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Loadout_GridItem_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnFocusReceived");

	Uw_Loadout_GridItem_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnLoaded_A058EA6248D678A919D5DF91CDDD5514
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::OnLoaded_A058EA6248D678A919D5DF91CDDD5514(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnLoaded_A058EA6248D678A919D5DF91CDDD5514");

	Uw_Loadout_GridItem_C_OnLoaded_A058EA6248D678A919D5DF91CDDD5514_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Loadout_GridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Construct");

	Uw_Loadout_GridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Tick");

	Uw_Loadout_GridItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_GridItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	Uw_Loadout_GridItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Hover_Show
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_GridItem_C::Hover_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Hover_Show");

	Uw_Loadout_GridItem_C_Hover_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Hover_Hide
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_GridItem_C::Hover_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Hover_Hide");

	Uw_Loadout_GridItem_C_Hover_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_GridItem_C::BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_GridItem_C_BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_GridItem_C::BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_GridItem_C_BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetNewEquippedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Equipped                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::SetNewEquippedState(bool Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetNewEquippedState");

	Uw_Loadout_GridItem_C_SetNewEquippedState_Params params;
	params.Equipped = Equipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Secondary Click
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_GridItem_C::Secondary_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.Secondary Click");

	Uw_Loadout_GridItem_C_Secondary_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.ExecuteUbergraph_w_Loadout_GridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::ExecuteUbergraph_w_Loadout_GridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.ExecuteUbergraph_w_Loadout_GridItem");

	Uw_Loadout_GridItem_C_ExecuteUbergraph_w_Loadout_GridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemSecondaryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::GridItemSecondaryClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemSecondaryClicked__DelegateSignature");

	Uw_Loadout_GridItem_C_GridItemSecondaryClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemUnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_GridItem_C::GridItemUnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemUnFocused__DelegateSignature");

	Uw_Loadout_GridItem_C_GridItemUnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemUnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::GridItemUnHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemUnHovered__DelegateSignature");

	Uw_Loadout_GridItem_C_GridItemUnHovered__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::GridItemHovered__DelegateSignature(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemHovered__DelegateSignature");

	Uw_Loadout_GridItem_C_GridItemHovered__DelegateSignature_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::GridItemFocused__DelegateSignature(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemFocused__DelegateSignature");

	Uw_Loadout_GridItem_C_GridItemFocused__DelegateSignature_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemClicked_Equip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GridIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_GridItem_C::GridItemClicked_Equip__DelegateSignature(const class FString& ItemInstance, const class FString& ItemID, int GridIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemClicked_Equip__DelegateSignature");

	Uw_Loadout_GridItem_C_GridItemClicked_Equip__DelegateSignature_Params params;
	params.ItemInstance = ItemInstance;
	params.ItemID = ItemID;
	params.GridIndex = GridIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
