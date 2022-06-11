// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PLAYGROUND_ReidsCharacter_generated_h
#error "ReidsCharacter.generated.h already included, missing '#pragma once' in ReidsCharacter.h"
#endif
#define PLAYGROUND_ReidsCharacter_generated_h

#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_SPARSE_DATA
#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_RPC_WRAPPERS \
	virtual void EndCameraTilt_Implementation(); \
	virtual void BeginCameraTilt_Implementation(); \
 \
	DECLARE_FUNCTION(execEndCameraTilt); \
	DECLARE_FUNCTION(execBeginCameraTilt); \
	DECLARE_FUNCTION(execOnHit);


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndCameraTilt_Implementation(); \
	virtual void BeginCameraTilt_Implementation(); \
 \
	DECLARE_FUNCTION(execEndCameraTilt); \
	DECLARE_FUNCTION(execBeginCameraTilt); \
	DECLARE_FUNCTION(execOnHit);


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_EVENT_PARMS
#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_CALLBACK_WRAPPERS
#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReidsCharacter(); \
	friend struct Z_Construct_UClass_AReidsCharacter_Statics; \
public: \
	DECLARE_CLASS(AReidsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(AReidsCharacter)


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAReidsCharacter(); \
	friend struct Z_Construct_UClass_AReidsCharacter_Statics; \
public: \
	DECLARE_CLASS(AReidsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Playground"), NO_API) \
	DECLARE_SERIALIZER(AReidsCharacter)


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReidsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReidsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReidsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReidsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReidsCharacter(AReidsCharacter&&); \
	NO_API AReidsCharacter(const AReidsCharacter&); \
public:


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReidsCharacter(AReidsCharacter&&); \
	NO_API AReidsCharacter(const AReidsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReidsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReidsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReidsCharacter)


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_19_PROLOG \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_EVENT_PARMS


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_SPARSE_DATA \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_RPC_WRAPPERS \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_CALLBACK_WRAPPERS \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_INCLASS \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_SPARSE_DATA \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_CALLBACK_WRAPPERS \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class AReidsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h


#define FOREACH_ENUM_EREIDSWALLRUNSIDE(op) \
	op(EReidsWallrunSide::Left) \
	op(EReidsWallrunSide::Right) 

enum class EReidsWallrunSide : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EReidsWallrunSide>();

#define FOREACH_ENUM_EREIDSWALLRUNENDREASON(op) \
	op(EReidsWallrunEndreason::Fall) \
	op(EReidsWallrunEndreason::Jump) 

enum class EReidsWallrunEndreason : uint8;
template<> PLAYGROUND_API UEnum* StaticEnum<EReidsWallrunEndreason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
