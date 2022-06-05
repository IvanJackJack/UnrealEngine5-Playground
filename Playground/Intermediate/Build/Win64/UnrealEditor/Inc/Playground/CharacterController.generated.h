// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#ifdef PLAYGROUND_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define PLAYGROUND_CharacterController_generated_h

#define FID_Playground_Source_Playground_Controllers_CharacterController_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInput_Statics; \
	PLAYGROUND_API static class UScriptStruct* StaticStruct();


template<> PLAYGROUND_API UScriptStruct* StaticStruct<struct FInput>();

#define FID_Playground_Source_Playground_Controllers_CharacterController_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatus_Statics; \
	PLAYGROUND_API static class UScriptStruct* StaticStruct();


template<> PLAYGROUND_API UScriptStruct* StaticStruct<struct FStatus>();

#define FID_Playground_Source_Playground_Controllers_CharacterController_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWallrun_Statics; \
	PLAYGROUND_API static class UScriptStruct* StaticStruct();


template<> PLAYGROUND_API UScriptStruct* StaticStruct<struct FWallrun>();

#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_SPARSE_DATA
#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWallSide); \
	DECLARE_FUNCTION(execGetStaminaRatio); \
	DECLARE_FUNCTION(execLanded); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWallSide); \
	DECLARE_FUNCTION(execGetStaminaRatio); \
	DECLARE_FUNCTION(execLanded); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_INCLASS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public:


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController)


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_122_PROLOG
#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_SPARSE_DATA \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_RPC_WRAPPERS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_INCLASS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_SPARSE_DATA \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_INCLASS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_Controllers_CharacterController_h


#define FOREACH_ENUM_EWALLRUNSIDE(op) \
	op(EWallrunSide::Left) \
	op(EWallrunSide::Right) \
	op(EWallrunSide::Front) \
	op(EWallrunSide::None) 

enum class EWallrunSide : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunSide>();

#define FOREACH_ENUM_EWALLRUNENDREASON(op) \
	op(EWallrunEndreason::Fall) \
	op(EWallrunEndreason::Jump) \
	op(EWallrunEndreason::WrongKeys) \
	op(EWallrunEndreason::SideChange) \
	op(EWallrunEndreason::NoHit) \
	op(EWallrunEndreason::WrongDirection) \
	op(EWallrunEndreason::WrongMode) 

enum class EWallrunEndreason : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunEndreason>();

#define FOREACH_ENUM_EWALLRUNMODE(op) \
	op(EWallrunMode::Horizontal) \
	op(EWallrunMode::Vertical) \
	op(EWallrunMode::Diagonal) \
	op(EWallrunMode::Visual) \
	op(EWallrunMode::None) 

enum class EWallrunMode : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
