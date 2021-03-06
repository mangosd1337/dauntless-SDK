#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AnimNotify_AkEvent_LocalPlayerSwitched_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_AkEvent_LocalPlayerSwitched.AnimNotify_AkEvent_LocalPlayerSwitched_C
// 0x000E (0x0058 - 0x004A)
class UAnimNotify_AkEvent_LocalPlayerSwitched_C : public UAnimNotify_AkEvent_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               LocalPlayerEvent;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_AkEvent_LocalPlayerSwitched.AnimNotify_AkEvent_LocalPlayerSwitched_C");
		return ptr;
	}


	void PlayEvent(class USceneComponent** TargetComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
