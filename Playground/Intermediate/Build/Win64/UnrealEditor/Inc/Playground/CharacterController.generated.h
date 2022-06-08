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

#define FID_Playground_Source_Playground_Controllers_CharacterController_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInput_Statics; \
	PLAYGROUND_API static class UScriptStruct* StaticStruct();


template<> PLAYGROUND_API UScriptStruct* StaticStruct<struct FInput>();

#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_SPARSE_DATA
#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStaminaRatio); \
	DECLARE_FUNCTION(execLanded); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStaminaRatio); \
	DECLARE_FUNCTION(execLanded); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_INCLASS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_STANDARD_CONSTRUCTORS \
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


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController)


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_27_PROLOG
#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_SPARSE_DATA \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_RPC_WRAPPERS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_INCLASS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_Controllers_CharacterController_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_SPARSE_DATA \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_INCLASS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Controllers_CharacterController_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_Controllers_CharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
