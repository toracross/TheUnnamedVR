// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPVRComponentPosRep;
#ifdef VREXPANSIONPLUGIN_ReplicatedVRCameraComponent_generated_h
#error "ReplicatedVRCameraComponent.generated.h already included, missing '#pragma once' in ReplicatedVRCameraComponent.h"
#endif
#define VREXPANSIONPLUGIN_ReplicatedVRCameraComponent_generated_h

#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_SPARSE_DATA
#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_RPC_WRAPPERS \
	virtual bool Server_SendCameraTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendCameraTransform_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execServer_SendCameraTransform); \
	DECLARE_FUNCTION(execOnRep_ReplicatedCameraTransform);


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendCameraTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendCameraTransform_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execServer_SendCameraTransform); \
	DECLARE_FUNCTION(execOnRep_ReplicatedCameraTransform);


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_EVENT_PARMS \
	struct ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	};


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_CALLBACK_WRAPPERS
#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicatedVRCameraComponent(); \
	friend struct Z_Construct_UClass_UReplicatedVRCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UReplicatedVRCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UReplicatedVRCameraComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedCameraTransform=NETFIELD_REP_START, \
		bSmoothReplicatedMotion, \
		NetUpdateRate, \
		NETFIELD_REP_END=NetUpdateRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReplicatedVRCameraComponent(); \
	friend struct Z_Construct_UClass_UReplicatedVRCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UReplicatedVRCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UReplicatedVRCameraComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedCameraTransform=NETFIELD_REP_START, \
		bSmoothReplicatedMotion, \
		NetUpdateRate, \
		NETFIELD_REP_END=NetUpdateRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicatedVRCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedVRCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicatedVRCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedVRCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicatedVRCameraComponent(UReplicatedVRCameraComponent&&); \
	NO_API UReplicatedVRCameraComponent(const UReplicatedVRCameraComponent&); \
public:


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicatedVRCameraComponent(UReplicatedVRCameraComponent&&); \
	NO_API UReplicatedVRCameraComponent(const UReplicatedVRCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicatedVRCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedVRCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedVRCameraComponent)


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_15_PROLOG \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_EVENT_PARMS


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_SPARSE_DATA \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_RPC_WRAPPERS \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_CALLBACK_WRAPPERS \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_INCLASS \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_SPARSE_DATA \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_CALLBACK_WRAPPERS \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_INCLASS_NO_PURE_DECLS \
	UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UReplicatedVRCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnnamedVRProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
