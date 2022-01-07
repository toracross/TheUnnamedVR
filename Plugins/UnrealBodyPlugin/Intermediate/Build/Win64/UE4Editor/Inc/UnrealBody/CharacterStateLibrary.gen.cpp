// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealBody/Public/Library/CharacterStateLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStateLibrary() {}
// Cross Module References
	UNREALBODY_API UEnum* Z_Construct_UEnum_UnrealBody_ECharacterIKHand();
	UPackage* Z_Construct_UPackage__Script_UnrealBody();
	UNREALBODY_API UEnum* Z_Construct_UEnum_UnrealBody_ECharacterState();
// End Cross Module References
	static UEnum* ECharacterIKHand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealBody_ECharacterIKHand, Z_Construct_UPackage__Script_UnrealBody(), TEXT("ECharacterIKHand"));
		}
		return Singleton;
	}
	template<> UNREALBODY_API UEnum* StaticEnum<ECharacterIKHand>()
	{
		return ECharacterIKHand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterIKHand(ECharacterIKHand_StaticEnum, TEXT("/Script/UnrealBody"), TEXT("ECharacterIKHand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealBody_ECharacterIKHand_Hash() { return 2219138274U; }
	UEnum* Z_Construct_UEnum_UnrealBody_ECharacterIKHand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterIKHand"), 0, Get_Z_Construct_UEnum_UnrealBody_ECharacterIKHand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterIKHand::Left", (int64)ECharacterIKHand::Left },
				{ "ECharacterIKHand::Right", (int64)ECharacterIKHand::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "ECharacterIKHand::Left" },
				{ "ModuleRelativePath", "Public/Library/CharacterStateLibrary.h" },
				{ "Right.Name", "ECharacterIKHand::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealBody,
				nullptr,
				"ECharacterIKHand",
				"ECharacterIKHand",
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
	static UEnum* ECharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealBody_ECharacterState, Z_Construct_UPackage__Script_UnrealBody(), TEXT("ECharacterState"));
		}
		return Singleton;
	}
	template<> UNREALBODY_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterState(ECharacterState_StaticEnum, TEXT("/Script/UnrealBody"), TEXT("ECharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealBody_ECharacterState_Hash() { return 2650699304U; }
	UEnum* Z_Construct_UEnum_UnrealBody_ECharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealBody();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterState"), 0, Get_Z_Construct_UEnum_UnrealBody_ECharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterState::Idle", (int64)ECharacterState::Idle },
				{ "ECharacterState::Teleporting", (int64)ECharacterState::Teleporting },
				{ "ECharacterState::Climbing", (int64)ECharacterState::Climbing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Climbing.Name", "ECharacterState::Climbing" },
				{ "Idle.Name", "ECharacterState::Idle" },
				{ "ModuleRelativePath", "Public/Library/CharacterStateLibrary.h" },
				{ "Teleporting.Name", "ECharacterState::Teleporting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealBody,
				nullptr,
				"ECharacterState",
				"ECharacterState",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
