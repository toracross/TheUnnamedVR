// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapsuleComponent;
enum class ECharacterIKHand : uint8;
class AActor;
#ifdef UNREALBODY_IKBodyComponent_generated_h
#error "IKBodyComponent.generated.h already included, missing '#pragma once' in IKBodyComponent.h"
#endif
#define UNREALBODY_IKBodyComponent_generated_h

#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_SPARSE_DATA
#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_RPC_WRAPPERS \
	virtual void UpdateBodyOffset_Implementation(float Value); \
	virtual void UpdatePlayerHeight_Implementation(float Value); \
	virtual void UpdateRotationThreshold_Implementation(float Value); \
	virtual void UpdateMovementThreshold_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execSetAllHitBoxes); \
	DECLARE_FUNCTION(execEndTeleport); \
	DECLARE_FUNCTION(execBeginTeleport); \
	DECLARE_FUNCTION(execStopFingerIK); \
	DECLARE_FUNCTION(execStartFingerIK); \
	DECLARE_FUNCTION(execTickFingerIK); \
	DECLARE_FUNCTION(execTickBodyMovement); \
	DECLARE_FUNCTION(execUpdateBodyOffset); \
	DECLARE_FUNCTION(execUpdatePlayerHeight); \
	DECLARE_FUNCTION(execUpdateRotationThreshold); \
	DECLARE_FUNCTION(execUpdateMovementThreshold);


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateBodyOffset_Implementation(float Value); \
	virtual void UpdatePlayerHeight_Implementation(float Value); \
	virtual void UpdateRotationThreshold_Implementation(float Value); \
	virtual void UpdateMovementThreshold_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execSetAllHitBoxes); \
	DECLARE_FUNCTION(execEndTeleport); \
	DECLARE_FUNCTION(execBeginTeleport); \
	DECLARE_FUNCTION(execStopFingerIK); \
	DECLARE_FUNCTION(execStartFingerIK); \
	DECLARE_FUNCTION(execTickFingerIK); \
	DECLARE_FUNCTION(execTickBodyMovement); \
	DECLARE_FUNCTION(execUpdateBodyOffset); \
	DECLARE_FUNCTION(execUpdatePlayerHeight); \
	DECLARE_FUNCTION(execUpdateRotationThreshold); \
	DECLARE_FUNCTION(execUpdateMovementThreshold);


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_EVENT_PARMS \
	struct IKBodyComponent_eventUpdateBodyOffset_Parms \
	{ \
		float Value; \
	}; \
	struct IKBodyComponent_eventUpdateMovementThreshold_Parms \
	{ \
		float Value; \
	}; \
	struct IKBodyComponent_eventUpdatePlayerHeight_Parms \
	{ \
		float Value; \
	}; \
	struct IKBodyComponent_eventUpdateRotationThreshold_Parms \
	{ \
		float Value; \
	};


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_CALLBACK_WRAPPERS
#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKBodyComponent(); \
	friend struct Z_Construct_UClass_UIKBodyComponent_Statics; \
public: \
	DECLARE_CLASS(UIKBodyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealBody"), NO_API) \
	DECLARE_SERIALIZER(UIKBodyComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MovementThreshold=NETFIELD_REP_START, \
		RotationThreshold, \
		PlayerHeight, \
		BodyOffset, \
		NETFIELD_REP_END=BodyOffset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUIKBodyComponent(); \
	friend struct Z_Construct_UClass_UIKBodyComponent_Statics; \
public: \
	DECLARE_CLASS(UIKBodyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealBody"), NO_API) \
	DECLARE_SERIALIZER(UIKBodyComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MovementThreshold=NETFIELD_REP_START, \
		RotationThreshold, \
		PlayerHeight, \
		BodyOffset, \
		NETFIELD_REP_END=BodyOffset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKBodyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKBodyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKBodyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKBodyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKBodyComponent(UIKBodyComponent&&); \
	NO_API UIKBodyComponent(const UIKBodyComponent&); \
public:


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKBodyComponent(UIKBodyComponent&&); \
	NO_API UIKBodyComponent(const UIKBodyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKBodyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKBodyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKBodyComponent)


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_PRIVATE_PROPERTY_OFFSET
#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_34_PROLOG \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_EVENT_PARMS


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_SPARSE_DATA \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_RPC_WRAPPERS \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_CALLBACK_WRAPPERS \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_INCLASS \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_SPARSE_DATA \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_CALLBACK_WRAPPERS \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_INCLASS_NO_PURE_DECLS \
	UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALBODY_API UClass* StaticClass<class UIKBodyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnnamedVRProject_Plugins_UnrealBodyPlugin_Source_UnrealBody_Public_CharacterComponents_IKBodyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
