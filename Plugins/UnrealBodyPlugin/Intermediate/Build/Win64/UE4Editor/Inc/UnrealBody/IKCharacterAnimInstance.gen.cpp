// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealBody/Public/Animation/IKCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKCharacterAnimInstance() {}
// Cross Module References
	UNREALBODY_API UClass* Z_Construct_UClass_UIKCharacterAnimInstance_NoRegister();
	UNREALBODY_API UClass* Z_Construct_UClass_UIKCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UnrealBody();
	UNREALBODY_API UClass* Z_Construct_UClass_UIKBodyComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphMovement();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphHeadIK();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphFootIK();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphArmIK();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphFingerIK();
// End Cross Module References
	void UIKCharacterAnimInstance::StaticRegisterNativesUIKCharacterAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UIKCharacterAnimInstance_NoRegister()
	{
		return UIKCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIKCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadIKValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadIKValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootIKValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootIKValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmIKValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmIKValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerIKValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingerIKValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Main anim instance class for character\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/IKCharacterAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ToolTip", "Main anim instance class for character" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_BodyComponent_MetaData[] = {
		{ "Category", "IKCharacterAnimInstance" },
		{ "Comment", "/** References */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_BodyComponent = { "BodyComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, BodyComponent), Z_Construct_UClass_UIKBodyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_BodyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_BodyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "IKCharacterAnimInstance" },
		{ "Comment", "/** References */" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, Character), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_MovementValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Movement" },
		{ "Comment", "/** Anim Graph - Movement */" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Anim Graph - Movement" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_MovementValues = { "MovementValues", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, MovementValues), Z_Construct_UScriptStruct_FAnimGraphMovement, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_MovementValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_MovementValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_HeadIKValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Head IK" },
		{ "Comment", "/** Anim Graph - Foot IK */" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Anim Graph - Foot IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_HeadIKValues = { "HeadIKValues", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, HeadIKValues), Z_Construct_UScriptStruct_FAnimGraphHeadIK, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_HeadIKValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_HeadIKValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FootIKValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Foot IK" },
		{ "Comment", "/** Anim Graph - Foot IK */" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Anim Graph - Foot IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FootIKValues = { "FootIKValues", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, FootIKValues), Z_Construct_UScriptStruct_FAnimGraphFootIK, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FootIKValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FootIKValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_ArmIKValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Arm IK" },
		{ "Comment", "/** Anim Graph - Context Awareness */" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Anim Graph - Context Awareness" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_ArmIKValues = { "ArmIKValues", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, ArmIKValues), Z_Construct_UScriptStruct_FAnimGraphArmIK, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_ArmIKValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_ArmIKValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FingerIKValues_MetaData[] = {
		{ "Category", "Read Only Data|Anim Graph - Finger IK" },
		{ "Comment", "/** Anim Graph - Context Awareness */" },
		{ "ModuleRelativePath", "Public/Animation/IKCharacterAnimInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Anim Graph - Context Awareness" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FingerIKValues = { "FingerIKValues", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKCharacterAnimInstance, FingerIKValues), Z_Construct_UScriptStruct_FAnimGraphFingerIK, METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FingerIKValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FingerIKValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_BodyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_MovementValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_HeadIKValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FootIKValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_ArmIKValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKCharacterAnimInstance_Statics::NewProp_FingerIKValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIKCharacterAnimInstance_Statics::ClassParams = {
		&UIKCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIKCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIKCharacterAnimInstance, 409153864);
	template<> UNREALBODY_API UClass* StaticClass<UIKCharacterAnimInstance>()
	{
		return UIKCharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIKCharacterAnimInstance(Z_Construct_UClass_UIKCharacterAnimInstance, &UIKCharacterAnimInstance::StaticClass, TEXT("/Script/UnrealBody"), TEXT("UIKCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
