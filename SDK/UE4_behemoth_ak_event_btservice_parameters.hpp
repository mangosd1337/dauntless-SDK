#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_ak_event_btservice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_ak_event_btservice.behemoth_ak_event_btservice_C.ReceiveActivationAI
struct Ubehemoth_ak_event_btservice_C_ReceiveActivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_ak_event_btservice.behemoth_ak_event_btservice_C.ReceiveDeactivationAI
struct Ubehemoth_ak_event_btservice_C_ReceiveDeactivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_ak_event_btservice.behemoth_ak_event_btservice_C.ExecuteUbergraph_behemoth_ak_event_btservice
struct Ubehemoth_ak_event_btservice_C_ExecuteUbergraph_behemoth_ak_event_btservice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
