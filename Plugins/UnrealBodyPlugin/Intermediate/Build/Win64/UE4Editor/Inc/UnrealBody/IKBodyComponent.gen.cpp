// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealBody/Public/CharacterComponents/IKBodyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKBodyComponent() {}
// Cross Module References
	UNREALBODY_API UClass* Z_Construct_UClass_UIKBodyComponent_NoRegister();
	UNREALBODY_API UClass* Z_Construct_UClass_UIKBodyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealBody();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALBODY_API UEnum* Z_Construct_UEnum_UnrealBody_ECharacterIKHand();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UNREALBODY_API UEnum* Z_Construct_UEnum_UnrealBody_EFingerBone();
// End Cross Module References
	DEFINE_FUNCTION(UIKBodyComponent::execSetAllHitBoxes)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_index_01_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_index_02_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_index_03_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_middle_01_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_middle_02_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_middle_03_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_ring_01_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_ring_02_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_ring_03_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pinky_01_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pinky_02_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pinky_03_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_thumb_01_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_thumb_02_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_thumb_03_l);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_index_01_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_index_02_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_index_03_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_middle_01_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_middle_02_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_middle_03_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_ring_01_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_ring_02_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_ring_03_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pinky_01_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pinky_02_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_pinky_03_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_thumb_01_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_thumb_02_r);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_thumb_03_r);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllHitBoxes(Z_Param_index_01_l,Z_Param_index_02_l,Z_Param_index_03_l,Z_Param_middle_01_l,Z_Param_middle_02_l,Z_Param_middle_03_l,Z_Param_ring_01_l,Z_Param_ring_02_l,Z_Param_ring_03_l,Z_Param_pinky_01_l,Z_Param_pinky_02_l,Z_Param_pinky_03_l,Z_Param_thumb_01_l,Z_Param_thumb_02_l,Z_Param_thumb_03_l,Z_Param_index_01_r,Z_Param_index_02_r,Z_Param_index_03_r,Z_Param_middle_01_r,Z_Param_middle_02_r,Z_Param_middle_03_r,Z_Param_ring_01_r,Z_Param_ring_02_r,Z_Param_ring_03_r,Z_Param_pinky_01_r,Z_Param_pinky_02_r,Z_Param_pinky_03_r,Z_Param_thumb_01_r,Z_Param_thumb_02_r,Z_Param_thumb_03_r);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execEndTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execBeginTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execStopFingerIK)
	{
		P_GET_ENUM(ECharacterIKHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFingerIK(ECharacterIKHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execStartFingerIK)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_ENUM(ECharacterIKHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFingerIK(Z_Param_Target,ECharacterIKHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execTickFingerIK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickFingerIK(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execTickBodyMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickBodyMovement(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execUpdateBodyOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBodyOffset_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execUpdatePlayerHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerHeight_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execUpdateRotationThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRotationThreshold_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKBodyComponent::execUpdateMovementThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMovementThreshold_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_UIKBodyComponent_UpdateBodyOffset = FName(TEXT("UpdateBodyOffset"));
	void UIKBodyComponent::UpdateBodyOffset(float Value)
	{
		IKBodyComponent_eventUpdateBodyOffset_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UIKBodyComponent_UpdateBodyOffset),&Parms);
	}
	static FName NAME_UIKBodyComponent_UpdateMovementThreshold = FName(TEXT("UpdateMovementThreshold"));
	void UIKBodyComponent::UpdateMovementThreshold(float Value)
	{
		IKBodyComponent_eventUpdateMovementThreshold_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UIKBodyComponent_UpdateMovementThreshold),&Parms);
	}
	static FName NAME_UIKBodyComponent_UpdatePlayerHeight = FName(TEXT("UpdatePlayerHeight"));
	void UIKBodyComponent::UpdatePlayerHeight(float Value)
	{
		IKBodyComponent_eventUpdatePlayerHeight_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UIKBodyComponent_UpdatePlayerHeight),&Parms);
	}
	static FName NAME_UIKBodyComponent_UpdateRotationThreshold = FName(TEXT("UpdateRotationThreshold"));
	void UIKBodyComponent::UpdateRotationThreshold(float Value)
	{
		IKBodyComponent_eventUpdateRotationThreshold_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UIKBodyComponent_UpdateRotationThreshold),&Parms);
	}
	void UIKBodyComponent::StaticRegisterNativesUIKBodyComponent()
	{
		UClass* Class = UIKBodyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTeleport", &UIKBodyComponent::execBeginTeleport },
			{ "EndTeleport", &UIKBodyComponent::execEndTeleport },
			{ "SetAllHitBoxes", &UIKBodyComponent::execSetAllHitBoxes },
			{ "StartFingerIK", &UIKBodyComponent::execStartFingerIK },
			{ "StopFingerIK", &UIKBodyComponent::execStopFingerIK },
			{ "TickBodyMovement", &UIKBodyComponent::execTickBodyMovement },
			{ "TickFingerIK", &UIKBodyComponent::execTickFingerIK },
			{ "UpdateBodyOffset", &UIKBodyComponent::execUpdateBodyOffset },
			{ "UpdateMovementThreshold", &UIKBodyComponent::execUpdateMovementThreshold },
			{ "UpdatePlayerHeight", &UIKBodyComponent::execUpdatePlayerHeight },
			{ "UpdateRotationThreshold", &UIKBodyComponent::execUpdateRotationThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKBodyComponent_BeginTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_BeginTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_BeginTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "BeginTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_BeginTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_BeginTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_BeginTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_BeginTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_EndTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_EndTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_EndTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "EndTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_EndTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_EndTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_EndTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_EndTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics
	{
		struct IKBodyComponent_eventSetAllHitBoxes_Parms
		{
			UCapsuleComponent* index_01_l;
			UCapsuleComponent* index_02_l;
			UCapsuleComponent* index_03_l;
			UCapsuleComponent* middle_01_l;
			UCapsuleComponent* middle_02_l;
			UCapsuleComponent* middle_03_l;
			UCapsuleComponent* ring_01_l;
			UCapsuleComponent* ring_02_l;
			UCapsuleComponent* ring_03_l;
			UCapsuleComponent* pinky_01_l;
			UCapsuleComponent* pinky_02_l;
			UCapsuleComponent* pinky_03_l;
			UCapsuleComponent* thumb_01_l;
			UCapsuleComponent* thumb_02_l;
			UCapsuleComponent* thumb_03_l;
			UCapsuleComponent* index_01_r;
			UCapsuleComponent* index_02_r;
			UCapsuleComponent* index_03_r;
			UCapsuleComponent* middle_01_r;
			UCapsuleComponent* middle_02_r;
			UCapsuleComponent* middle_03_r;
			UCapsuleComponent* ring_01_r;
			UCapsuleComponent* ring_02_r;
			UCapsuleComponent* ring_03_r;
			UCapsuleComponent* pinky_01_r;
			UCapsuleComponent* pinky_02_r;
			UCapsuleComponent* pinky_03_r;
			UCapsuleComponent* thumb_01_r;
			UCapsuleComponent* thumb_02_r;
			UCapsuleComponent* thumb_03_r;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_01_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_index_01_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_02_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_index_02_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_03_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_index_03_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_middle_01_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_middle_01_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_middle_02_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_middle_02_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_middle_03_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_middle_03_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_01_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ring_01_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_02_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ring_02_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_03_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ring_03_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pinky_01_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pinky_01_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pinky_02_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pinky_02_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pinky_03_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pinky_03_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_01_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumb_01_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_02_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumb_02_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_03_l_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumb_03_l;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_01_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_index_01_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_02_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_index_02_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_03_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_index_03_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_middle_01_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_middle_01_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_middle_02_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_middle_02_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_middle_03_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_middle_03_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_01_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ring_01_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_02_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ring_02_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_03_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ring_03_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pinky_01_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pinky_01_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pinky_02_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pinky_02_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pinky_03_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pinky_03_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_01_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumb_01_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_02_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumb_02_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumb_03_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumb_03_r;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_l = { "index_01_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, index_01_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_l = { "index_02_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, index_02_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_l = { "index_03_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, index_03_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_l = { "middle_01_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, middle_01_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_l = { "middle_02_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, middle_02_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_l = { "middle_03_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, middle_03_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_l = { "ring_01_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, ring_01_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_l = { "ring_02_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, ring_02_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_l = { "ring_03_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, ring_03_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_l = { "pinky_01_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, pinky_01_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_l = { "pinky_02_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, pinky_02_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_l = { "pinky_03_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, pinky_03_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_l = { "thumb_01_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, thumb_01_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_l = { "thumb_02_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, thumb_02_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_l_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_l = { "thumb_03_l", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, thumb_03_l), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_l_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_l_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_r = { "index_01_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, index_01_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_r = { "index_02_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, index_02_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_r = { "index_03_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, index_03_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_r = { "middle_01_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, middle_01_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_r = { "middle_02_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, middle_02_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_r = { "middle_03_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, middle_03_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_r = { "ring_01_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, ring_01_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_r = { "ring_02_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, ring_02_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_r = { "ring_03_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, ring_03_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_r = { "pinky_01_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, pinky_01_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_r = { "pinky_02_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, pinky_02_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_r = { "pinky_03_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, pinky_03_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_r = { "thumb_01_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, thumb_01_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_r = { "thumb_02_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, thumb_02_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_r_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_r = { "thumb_03_r", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventSetAllHitBoxes_Parms, thumb_03_r), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_r_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_01_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_02_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_index_03_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_01_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_02_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_middle_03_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_01_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_02_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_ring_03_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_01_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_02_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_pinky_03_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_01_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_02_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::NewProp_thumb_03_r,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody | Fingers" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "SetAllHitBoxes", nullptr, nullptr, sizeof(IKBodyComponent_eventSetAllHitBoxes_Parms), Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics
	{
		struct IKBodyComponent_eventStartFingerIK_Parms
		{
			AActor* Target;
			ECharacterIKHand Hand;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventStartFingerIK_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventStartFingerIK_Parms, Hand), Z_Construct_UEnum_UnrealBody_ECharacterIKHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "StartFingerIK", nullptr, nullptr, sizeof(IKBodyComponent_eventStartFingerIK_Parms), Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_StartFingerIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_StartFingerIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics
	{
		struct IKBodyComponent_eventStopFingerIK_Parms
		{
			ECharacterIKHand Hand;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventStopFingerIK_Parms, Hand), Z_Construct_UEnum_UnrealBody_ECharacterIKHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "StopFingerIK", nullptr, nullptr, sizeof(IKBodyComponent_eventStopFingerIK_Parms), Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_StopFingerIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_StopFingerIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics
	{
		struct IKBodyComponent_eventTickBodyMovement_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventTickBodyMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody" },
		{ "Comment", "/*\n\x09\x09System Ticks\n\x09*/" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
		{ "ToolTip", "System Ticks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "TickBodyMovement", nullptr, nullptr, sizeof(IKBodyComponent_eventTickBodyMovement_Parms), Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics
	{
		struct IKBodyComponent_eventTickFingerIK_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventTickFingerIK_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "TickFingerIK", nullptr, nullptr, sizeof(IKBodyComponent_eventTickFingerIK_Parms), Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_TickFingerIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_TickFingerIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventUpdateBodyOffset_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "UpdateBodyOffset", nullptr, nullptr, sizeof(IKBodyComponent_eventUpdateBodyOffset_Parms), Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventUpdateMovementThreshold_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09\x09Replicated movement value changes, run on server\n\x09*/" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
		{ "ToolTip", "Replicated movement value changes, run on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "UpdateMovementThreshold", nullptr, nullptr, sizeof(IKBodyComponent_eventUpdateMovementThreshold_Parms), Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventUpdatePlayerHeight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "UpdatePlayerHeight", nullptr, nullptr, sizeof(IKBodyComponent_eventUpdatePlayerHeight_Parms), Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IKBodyComponent_eventUpdateRotationThreshold_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKBodyComponent, nullptr, "UpdateRotationThreshold", nullptr, nullptr, sizeof(IKBodyComponent_eventUpdateRotationThreshold_Parms), Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIKBodyComponent_NoRegister()
	{
		return UIKBodyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIKBodyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyRotationOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FingerHitboxes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerHitboxes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerHitboxes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerHitboxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingerHitboxes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKBodyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKBodyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKBodyComponent_BeginTeleport, "BeginTeleport" }, // 2284191636
		{ &Z_Construct_UFunction_UIKBodyComponent_EndTeleport, "EndTeleport" }, // 943467760
		{ &Z_Construct_UFunction_UIKBodyComponent_SetAllHitBoxes, "SetAllHitBoxes" }, // 1488273011
		{ &Z_Construct_UFunction_UIKBodyComponent_StartFingerIK, "StartFingerIK" }, // 607824052
		{ &Z_Construct_UFunction_UIKBodyComponent_StopFingerIK, "StopFingerIK" }, // 3773011813
		{ &Z_Construct_UFunction_UIKBodyComponent_TickBodyMovement, "TickBodyMovement" }, // 294681393
		{ &Z_Construct_UFunction_UIKBodyComponent_TickFingerIK, "TickFingerIK" }, // 673916313
		{ &Z_Construct_UFunction_UIKBodyComponent_UpdateBodyOffset, "UpdateBodyOffset" }, // 4031962578
		{ &Z_Construct_UFunction_UIKBodyComponent_UpdateMovementThreshold, "UpdateMovementThreshold" }, // 3565261874
		{ &Z_Construct_UFunction_UIKBodyComponent_UpdatePlayerHeight, "UpdatePlayerHeight" }, // 3783426951
		{ &Z_Construct_UFunction_UIKBodyComponent_UpdateRotationThreshold, "UpdateRotationThreshold" }, // 2958654380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterComponents/IKBodyComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "IKBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, Body), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RightController_MetaData[] = {
		{ "Category", "IKBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, RightController), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_LeftController_MetaData[] = {
		{ "Category", "IKBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, LeftController), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_LeftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "IKBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09 * Non-Replicated Setting variables\n\x09*/" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
		{ "ToolTip", "* Non-Replicated Setting variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, MovementSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementThreshold_MetaData[] = {
		{ "Category", "IKBody" },
		{ "Comment", "/*\n\x09 * Movement Values, replicated (server changes are sent to clients)\n\x09*/" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
		{ "ToolTip", "* Movement Values, replicated (server changes are sent to clients)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, MovementThreshold), METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RotationThreshold_MetaData[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RotationThreshold = { "RotationThreshold", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, RotationThreshold), METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RotationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, PlayerHeight), METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_PlayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_PlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyOffset_MetaData[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyOffset = { "BodyOffset", nullptr, (EPropertyFlags)0x0010000000000035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, BodyOffset), METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyRotationOffset_MetaData[] = {
		{ "Category", "IKBody" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyRotationOffset = { "BodyRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, BodyRotationOffset), METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyRotationOffset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_ValueProp = { "FingerHitboxes", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_Key_KeyProp = { "FingerHitboxes_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_UnrealBody_EFingerBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_MetaData[] = {
		{ "Category", "IKBody | Fingers" },
		{ "Comment", "/*\n\x09\x09""Finger IK maps\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterComponents/IKBodyComponent.h" },
		{ "ToolTip", "Finger IK maps" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes = { "FingerHitboxes", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKBodyComponent, FingerHitboxes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKBodyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_MovementThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_RotationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_PlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_BodyRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKBodyComponent_Statics::NewProp_FingerHitboxes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKBodyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKBodyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIKBodyComponent_Statics::ClassParams = {
		&UIKBodyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIKBodyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIKBodyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKBodyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKBodyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIKBodyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIKBodyComponent, 3668079949);
	template<> UNREALBODY_API UClass* StaticClass<UIKBodyComponent>()
	{
		return UIKBodyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIKBodyComponent(Z_Construct_UClass_UIKBodyComponent, &UIKBodyComponent::StaticClass, TEXT("/Script/UnrealBody"), TEXT("UIKBodyComponent"), false, nullptr, nullptr, nullptr);

	void UIKBodyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MovementThreshold(TEXT("MovementThreshold"));
		static const FName Name_RotationThreshold(TEXT("RotationThreshold"));
		static const FName Name_PlayerHeight(TEXT("PlayerHeight"));
		static const FName Name_BodyOffset(TEXT("BodyOffset"));

		const bool bIsValid = true
			&& Name_MovementThreshold == ClassReps[(int32)ENetFields_Private::MovementThreshold].Property->GetFName()
			&& Name_RotationThreshold == ClassReps[(int32)ENetFields_Private::RotationThreshold].Property->GetFName()
			&& Name_PlayerHeight == ClassReps[(int32)ENetFields_Private::PlayerHeight].Property->GetFName()
			&& Name_BodyOffset == ClassReps[(int32)ENetFields_Private::BodyOffset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UIKBodyComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKBodyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
