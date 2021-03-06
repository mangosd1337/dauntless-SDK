#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_HeadMountedDisplay_classes.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8_t
{
	ETrackedDeviceType__None       = 0,
	ETrackedDeviceType__HMD        = 1,
	ETrackedDeviceType__LTouch     = 2,
	ETrackedDeviceType__RTouch     = 3,
	ETrackedDeviceType__Touch      = 4,
	ETrackedDeviceType__DeviceObjectZero = 5,
	ETrackedDeviceType__All        = 6,
	ETrackedDeviceType__ETrackedDeviceType_MAX = 7
};


// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8_t
{
	EBoundaryType__Boundary_Outer  = 0,
	EBoundaryType__Boundary_PlayArea = 1,
	EBoundaryType__Boundary_MAX    = 2
};


// Enum OculusHMD.EGearVRControllerHandedness_DEPRECATED
enum class EGearVRControllerHandedness_DEPRECATED : uint8_t
{
	EGearVRControllerHandedness_DEPRECATED__RightHanded_DEPRECATED = 0,
	EGearVRControllerHandedness_DEPRECATED__LeftHanded_DEPRECATED = 1,
	EGearVRControllerHandedness_DEPRECATED__Unknown_DEPRECATED = 2,
	EGearVRControllerHandedness_DEPRECATED__EGearVRControllerHandedness_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OculusHMD.BoundaryTestResult
// 0x0020
struct FBoundaryTestResult
{
	bool                                               IsTriggering;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETrackedDeviceType                                 DeviceType;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ClosestDistance;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestPoint;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ClosestPointNormal;                                       // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct OculusHMD.HmdUserProfileField
// 0x0020
struct FHmdUserProfileField
{
	class FString                                      FieldName;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      FieldValue;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OculusHMD.HmdUserProfile
// 0x0048
struct FHmdUserProfile
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      Gender;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              PlayerHeight;                                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeHeight;                                                // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IPD;                                                      // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NeckToEyeDistance;                                        // 0x002C(0x0008) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FHmdUserProfileField>                ExtraFields;                                              // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OculusHMD.OculusSplashDesc
// 0x0090
struct FOculusSplashDesc
{
	struct FStringAssetReference                       TexturePath;                                              // 0x0000(0x0010) (Edit, Config)
	struct FTransform                                  TransformInMeters;                                        // 0x0010(0x0030) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   QuadSizeInMeters;                                         // 0x0040(0x0008) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FQuat                                       DeltaRotation;                                            // 0x0050(0x0010) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   TextureOffset;                                            // 0x0060(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   TextureScale;                                             // 0x0068(0x0008) (Edit, Config, IsPlainOldData)
	bool                                               bNoAlphaChannel;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0071(0x001F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
