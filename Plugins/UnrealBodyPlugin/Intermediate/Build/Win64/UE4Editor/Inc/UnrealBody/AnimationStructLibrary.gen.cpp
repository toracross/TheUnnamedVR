// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealBody/Public/Library/AnimationStructLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStructLibrary() {}
// Cross Module References
	UNREALBODY_API UEnum* Z_Construct_UEnum_UnrealBody_EFingerBone();
	UPackage* Z_Construct_UPackage__Script_UnrealBody();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FFingerStateMap();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphFingerIK();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphArmIK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphFootIK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphHeadIK();
	UNREALBODY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphMovement();
// End Cross Module References
	static UEnum* EFingerBone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealBody_EFingerBone, Z_Construct_UPackage__Script_UnrealBody(), TEXT("EFingerBone"));
		}
		return Singleton;
	}
	template<> UNREALBODY_API UEnum* StaticEnum<EFingerBone>()
	{
		return EFingerBone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFingerBone(EFingerBone_StaticEnum, TEXT("/Script/UnrealBody"), TEXT("EFingerBone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealBody_EFingerBone_Hash() { return 3191490427U; }
	UEnum* Z_Construct_UEnum_UnrealBody_EFingerBone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFingerBone"), 0, Get_Z_Construct_UEnum_UnrealBody_EFingerBone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFingerBone::index_01_l", (int64)EFingerBone::index_01_l },
				{ "EFingerBone::index_02_l", (int64)EFingerBone::index_02_l },
				{ "EFingerBone::index_03_l", (int64)EFingerBone::index_03_l },
				{ "EFingerBone::middle_01_l", (int64)EFingerBone::middle_01_l },
				{ "EFingerBone::middle_02_l", (int64)EFingerBone::middle_02_l },
				{ "EFingerBone::middle_03_l", (int64)EFingerBone::middle_03_l },
				{ "EFingerBone::ring_01_l", (int64)EFingerBone::ring_01_l },
				{ "EFingerBone::ring_02_l", (int64)EFingerBone::ring_02_l },
				{ "EFingerBone::ring_03_l", (int64)EFingerBone::ring_03_l },
				{ "EFingerBone::pinky_01_l", (int64)EFingerBone::pinky_01_l },
				{ "EFingerBone::pinky_02_l", (int64)EFingerBone::pinky_02_l },
				{ "EFingerBone::pinky_03_l", (int64)EFingerBone::pinky_03_l },
				{ "EFingerBone::thumb_01_l", (int64)EFingerBone::thumb_01_l },
				{ "EFingerBone::thumb_02_l", (int64)EFingerBone::thumb_02_l },
				{ "EFingerBone::thumb_03_l", (int64)EFingerBone::thumb_03_l },
				{ "EFingerBone::index_01_r", (int64)EFingerBone::index_01_r },
				{ "EFingerBone::index_02_r", (int64)EFingerBone::index_02_r },
				{ "EFingerBone::index_03_r", (int64)EFingerBone::index_03_r },
				{ "EFingerBone::middle_01_r", (int64)EFingerBone::middle_01_r },
				{ "EFingerBone::middle_02_r", (int64)EFingerBone::middle_02_r },
				{ "EFingerBone::middle_03_r", (int64)EFingerBone::middle_03_r },
				{ "EFingerBone::ring_01_r", (int64)EFingerBone::ring_01_r },
				{ "EFingerBone::ring_02_r", (int64)EFingerBone::ring_02_r },
				{ "EFingerBone::ring_03_r", (int64)EFingerBone::ring_03_r },
				{ "EFingerBone::pinky_01_r", (int64)EFingerBone::pinky_01_r },
				{ "EFingerBone::pinky_02_r", (int64)EFingerBone::pinky_02_r },
				{ "EFingerBone::pinky_03_r", (int64)EFingerBone::pinky_03_r },
				{ "EFingerBone::thumb_01_r", (int64)EFingerBone::thumb_01_r },
				{ "EFingerBone::thumb_02_r", (int64)EFingerBone::thumb_02_r },
				{ "EFingerBone::thumb_03_r", (int64)EFingerBone::thumb_03_r },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "index_01_l.Name", "EFingerBone::index_01_l" },
				{ "index_01_r.Name", "EFingerBone::index_01_r" },
				{ "index_02_l.Name", "EFingerBone::index_02_l" },
				{ "index_02_r.Name", "EFingerBone::index_02_r" },
				{ "index_03_l.Name", "EFingerBone::index_03_l" },
				{ "index_03_r.Name", "EFingerBone::index_03_r" },
				{ "middle_01_l.Name", "EFingerBone::middle_01_l" },
				{ "middle_01_r.Name", "EFingerBone::middle_01_r" },
				{ "middle_02_l.Name", "EFingerBone::middle_02_l" },
				{ "middle_02_r.Name", "EFingerBone::middle_02_r" },
				{ "middle_03_l.Name", "EFingerBone::middle_03_l" },
				{ "middle_03_r.Name", "EFingerBone::middle_03_r" },
				{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
				{ "pinky_01_l.Name", "EFingerBone::pinky_01_l" },
				{ "pinky_01_r.Name", "EFingerBone::pinky_01_r" },
				{ "pinky_02_l.Name", "EFingerBone::pinky_02_l" },
				{ "pinky_02_r.Name", "EFingerBone::pinky_02_r" },
				{ "pinky_03_l.Name", "EFingerBone::pinky_03_l" },
				{ "pinky_03_r.Name", "EFingerBone::pinky_03_r" },
				{ "ring_01_l.Name", "EFingerBone::ring_01_l" },
				{ "ring_01_r.Name", "EFingerBone::ring_01_r" },
				{ "ring_02_l.Name", "EFingerBone::ring_02_l" },
				{ "ring_02_r.Name", "EFingerBone::ring_02_r" },
				{ "ring_03_l.Name", "EFingerBone::ring_03_l" },
				{ "ring_03_r.Name", "EFingerBone::ring_03_r" },
				{ "thumb_01_l.Name", "EFingerBone::thumb_01_l" },
				{ "thumb_01_r.Name", "EFingerBone::thumb_01_r" },
				{ "thumb_02_l.Name", "EFingerBone::thumb_02_l" },
				{ "thumb_02_r.Name", "EFingerBone::thumb_02_r" },
				{ "thumb_03_l.Name", "EFingerBone::thumb_03_l" },
				{ "thumb_03_r.Name", "EFingerBone::thumb_03_r" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealBody,
				nullptr,
				"EFingerBone",
				"EFingerBone",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFingerStateMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALBODY_API uint32 Get_Z_Construct_UScriptStruct_FFingerStateMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFingerStateMap, Z_Construct_UPackage__Script_UnrealBody(), TEXT("FingerStateMap"), sizeof(FFingerStateMap), Get_Z_Construct_UScriptStruct_FFingerStateMap_Hash());
	}
	return Singleton;
}
template<> UNREALBODY_API UScriptStruct* StaticStruct<FFingerStateMap>()
{
	return FFingerStateMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFingerStateMap(FFingerStateMap::StaticStruct, TEXT("/Script/UnrealBody"), TEXT("FingerStateMap"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealBody_StaticRegisterNativesFFingerStateMap
{
	FScriptStruct_UnrealBody_StaticRegisterNativesFFingerStateMap()
	{
		UScriptStruct::DeferCppStructOps<FFingerStateMap>(FName(TEXT("FingerStateMap")));
	}
} ScriptStruct_UnrealBody_StaticRegisterNativesFFingerStateMap;
	struct Z_Construct_UScriptStruct_FFingerStateMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StateMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StateMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFingerStateMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Graph - Finger IK */" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
		{ "ToolTip", "Anim Graph - Finger IK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFingerStateMap>();
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_ValueProp = { "StateMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_Key_KeyProp = { "StateMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_UnrealBody_EFingerBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_MetaData[] = {
		{ "Category", "FingerStateMap" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap = { "StateMap", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFingerStateMap, StateMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFingerStateMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerStateMap_Statics::NewProp_StateMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFingerStateMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
		nullptr,
		&NewStructOps,
		"FingerStateMap",
		sizeof(FFingerStateMap),
		alignof(FFingerStateMap),
		Z_Construct_UScriptStruct_FFingerStateMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerStateMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFingerStateMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerStateMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFingerStateMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFingerStateMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FingerStateMap"), sizeof(FFingerStateMap), Get_Z_Construct_UScriptStruct_FFingerStateMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFingerStateMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFingerStateMap_Hash() { return 1542347516U; }
class UScriptStruct* FAnimGraphFingerIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALBODY_API uint32 Get_Z_Construct_UScriptStruct_FAnimGraphFingerIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphFingerIK, Z_Construct_UPackage__Script_UnrealBody(), TEXT("AnimGraphFingerIK"), sizeof(FAnimGraphFingerIK), Get_Z_Construct_UScriptStruct_FAnimGraphFingerIK_Hash());
	}
	return Singleton;
}
template<> UNREALBODY_API UScriptStruct* StaticStruct<FAnimGraphFingerIK>()
{
	return FAnimGraphFingerIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGraphFingerIK(FAnimGraphFingerIK::StaticStruct, TEXT("/Script/UnrealBody"), TEXT("AnimGraphFingerIK"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphFingerIK
{
	FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphFingerIK()
	{
		UScriptStruct::DeferCppStructOps<FAnimGraphFingerIK>(FName(TEXT("AnimGraphFingerIK")));
	}
} ScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphFingerIK;
	struct Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlendMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Graph - Finger IK */" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
		{ "ToolTip", "Anim Graph - Finger IK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphFingerIK>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_ValueProp = { "BlendMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_Key_KeyProp = { "BlendMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_UnrealBody_EFingerBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_MetaData[] = {
		{ "Category", "AnimGraphFingerIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap = { "BlendMap", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphFingerIK, BlendMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::NewProp_BlendMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
		nullptr,
		&NewStructOps,
		"AnimGraphFingerIK",
		sizeof(FAnimGraphFingerIK),
		alignof(FAnimGraphFingerIK),
		Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphFingerIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGraphFingerIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGraphFingerIK"), sizeof(FAnimGraphFingerIK), Get_Z_Construct_UScriptStruct_FAnimGraphFingerIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGraphFingerIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGraphFingerIK_Hash() { return 2653228803U; }
class UScriptStruct* FAnimGraphArmIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALBODY_API uint32 Get_Z_Construct_UScriptStruct_FAnimGraphArmIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphArmIK, Z_Construct_UPackage__Script_UnrealBody(), TEXT("AnimGraphArmIK"), sizeof(FAnimGraphArmIK), Get_Z_Construct_UScriptStruct_FAnimGraphArmIK_Hash());
	}
	return Singleton;
}
template<> UNREALBODY_API UScriptStruct* StaticStruct<FAnimGraphArmIK>()
{
	return FAnimGraphArmIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGraphArmIK(FAnimGraphArmIK::StaticStruct, TEXT("/Script/UnrealBody"), TEXT("AnimGraphArmIK"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphArmIK
{
	FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphArmIK()
	{
		UScriptStruct::DeferCppStructOps<FAnimGraphArmIK>(FName(TEXT("AnimGraphArmIK")));
	}
} ScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphArmIK;
	struct Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTargetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftTargetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTargetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightTargetTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Graph - Arm IK */" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
		{ "ToolTip", "Anim Graph - Arm IK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphArmIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_LeftTargetTransform_MetaData[] = {
		{ "Category", "AnimGraphArmIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_LeftTargetTransform = { "LeftTargetTransform", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphArmIK, LeftTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_LeftTargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_LeftTargetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_RightTargetTransform_MetaData[] = {
		{ "Category", "AnimGraphArmIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_RightTargetTransform = { "RightTargetTransform", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphArmIK, RightTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_RightTargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_RightTargetTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_LeftTargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::NewProp_RightTargetTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
		nullptr,
		&NewStructOps,
		"AnimGraphArmIK",
		sizeof(FAnimGraphArmIK),
		alignof(FAnimGraphArmIK),
		Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphArmIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGraphArmIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGraphArmIK"), sizeof(FAnimGraphArmIK), Get_Z_Construct_UScriptStruct_FAnimGraphArmIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGraphArmIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGraphArmIK_Hash() { return 506850139U; }
class UScriptStruct* FAnimGraphFootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALBODY_API uint32 Get_Z_Construct_UScriptStruct_FAnimGraphFootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphFootIK, Z_Construct_UPackage__Script_UnrealBody(), TEXT("AnimGraphFootIK"), sizeof(FAnimGraphFootIK), Get_Z_Construct_UScriptStruct_FAnimGraphFootIK_Hash());
	}
	return Singleton;
}
template<> UNREALBODY_API UScriptStruct* StaticStruct<FAnimGraphFootIK>()
{
	return FAnimGraphFootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGraphFootIK(FAnimGraphFootIK::StaticStruct, TEXT("/Script/UnrealBody"), TEXT("AnimGraphFootIK"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphFootIK
{
	FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphFootIK()
	{
		UScriptStruct::DeferCppStructOps<FAnimGraphFootIK>(FName(TEXT("AnimGraphFootIK")));
	}
} ScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphFootIK;
	struct Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Graph - Foot IK */" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
		{ "ToolTip", "Anim Graph - Foot IK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphFootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootLocation_MetaData[] = {
		{ "Category", "AnimGraphFootIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootLocation = { "LeftFootLocation", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphFootIK, LeftFootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootLocation_MetaData[] = {
		{ "Category", "AnimGraphFootIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootLocation = { "RightFootLocation", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphFootIK, RightFootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootRotation_MetaData[] = {
		{ "Category", "AnimGraphFootIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootRotation = { "LeftFootRotation", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphFootIK, LeftFootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootRotation_MetaData[] = {
		{ "Category", "AnimGraphFootIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootRotation = { "RightFootRotation", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphFootIK, RightFootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_LeftFootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::NewProp_RightFootRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
		nullptr,
		&NewStructOps,
		"AnimGraphFootIK",
		sizeof(FAnimGraphFootIK),
		alignof(FAnimGraphFootIK),
		Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphFootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGraphFootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGraphFootIK"), sizeof(FAnimGraphFootIK), Get_Z_Construct_UScriptStruct_FAnimGraphFootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGraphFootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGraphFootIK_Hash() { return 2805125499U; }
class UScriptStruct* FAnimGraphHeadIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALBODY_API uint32 Get_Z_Construct_UScriptStruct_FAnimGraphHeadIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphHeadIK, Z_Construct_UPackage__Script_UnrealBody(), TEXT("AnimGraphHeadIK"), sizeof(FAnimGraphHeadIK), Get_Z_Construct_UScriptStruct_FAnimGraphHeadIK_Hash());
	}
	return Singleton;
}
template<> UNREALBODY_API UScriptStruct* StaticStruct<FAnimGraphHeadIK>()
{
	return FAnimGraphHeadIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGraphHeadIK(FAnimGraphHeadIK::StaticStruct, TEXT("/Script/UnrealBody"), TEXT("AnimGraphHeadIK"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphHeadIK
{
	FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphHeadIK()
	{
		UScriptStruct::DeferCppStructOps<FAnimGraphHeadIK>(FName(TEXT("AnimGraphHeadIK")));
	}
} ScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphHeadIK;
	struct Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Graph - Head IK */" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
		{ "ToolTip", "Anim Graph - Head IK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphHeadIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadRotation_MetaData[] = {
		{ "Category", "AnimGraphHeadIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadRotation = { "HeadRotation", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphHeadIK, HeadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadLocation_MetaData[] = {
		{ "Category", "AnimGraphHeadIK" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadLocation = { "HeadLocation", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphHeadIK, HeadLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::NewProp_HeadLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
		nullptr,
		&NewStructOps,
		"AnimGraphHeadIK",
		sizeof(FAnimGraphHeadIK),
		alignof(FAnimGraphHeadIK),
		Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphHeadIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGraphHeadIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGraphHeadIK"), sizeof(FAnimGraphHeadIK), Get_Z_Construct_UScriptStruct_FAnimGraphHeadIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGraphHeadIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGraphHeadIK_Hash() { return 741949021U; }
class UScriptStruct* FAnimGraphMovement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALBODY_API uint32 Get_Z_Construct_UScriptStruct_FAnimGraphMovement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphMovement, Z_Construct_UPackage__Script_UnrealBody(), TEXT("AnimGraphMovement"), sizeof(FAnimGraphMovement), Get_Z_Construct_UScriptStruct_FAnimGraphMovement_Hash());
	}
	return Singleton;
}
template<> UNREALBODY_API UScriptStruct* StaticStruct<FAnimGraphMovement>()
{
	return FAnimGraphMovement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGraphMovement(FAnimGraphMovement::StaticStruct, TEXT("/Script/UnrealBody"), TEXT("AnimGraphMovement"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphMovement
{
	FScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphMovement()
	{
		UScriptStruct::DeferCppStructOps<FAnimGraphMovement>(FName(TEXT("AnimGraphMovement")));
	}
} ScriptStruct_UnrealBody_StaticRegisterNativesFAnimGraphMovement;
	struct Z_Construct_UScriptStruct_FAnimGraphMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Graph - Movement */" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
		{ "ToolTip", "Anim Graph - Movement" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphMovement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "AnimGraphMovement" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphMovement, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "AnimGraphMovement" },
		{ "ModuleRelativePath", "Public/Library/AnimationStructLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimGraphMovement, Direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::NewProp_Direction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBody,
		nullptr,
		&NewStructOps,
		"AnimGraphMovement",
		sizeof(FAnimGraphMovement),
		alignof(FAnimGraphMovement),
		Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphMovement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGraphMovement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGraphMovement"), sizeof(FAnimGraphMovement), Get_Z_Construct_UScriptStruct_FAnimGraphMovement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGraphMovement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGraphMovement_Hash() { return 2837681121U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
