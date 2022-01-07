// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALBODY_CharacterStateLibrary_generated_h
#error "CharacterStateLibrary.generated.h already included, missing '#pragma once' in CharacterStateLibrary.h"
#endif
#define UNREALBODY_CharacterStateLibrary_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_Library_CharacterStateLibrary_h


#define FOREACH_ENUM_ECHARACTERIKHAND(op) \
	op(ECharacterIKHand::Left) \
	op(ECharacterIKHand::Right) 

enum class ECharacterIKHand : uint8;
template<> UNREALBODY_API UEnum* StaticEnum<ECharacterIKHand>();

#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::Idle) \
	op(ECharacterState::Teleporting) \
	op(ECharacterState::Climbing) 

enum class ECharacterState : uint8;
template<> UNREALBODY_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
