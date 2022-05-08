// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYGROUND_IController_generated_h
#error "IController.generated.h already included, missing '#pragma once' in IController.h"
#endif
#define PLAYGROUND_IController_generated_h

#define FID_Playground_Source_Playground_Interfaces_IController_h_13_SPARSE_DATA
#define FID_Playground_Source_Playground_Interfaces_IController_h_13_RPC_WRAPPERS
#define FID_Playground_Source_Playground_Interfaces_IController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Playground_Source_Playground_Interfaces_IController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLAYGROUND_API UIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLAYGROUND_API, UIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLAYGROUND_API UIController(UIController&&); \
	PLAYGROUND_API UIController(const UIController&); \
public:


#define FID_Playground_Source_Playground_Interfaces_IController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLAYGROUND_API UIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLAYGROUND_API UIController(UIController&&); \
	PLAYGROUND_API UIController(const UIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLAYGROUND_API, UIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIController)


#define FID_Playground_Source_Playground_Interfaces_IController_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIController(); \
	friend struct Z_Construct_UClass_UIController_Statics; \
public: \
	DECLARE_CLASS(UIController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Playground"), PLAYGROUND_API) \
	DECLARE_SERIALIZER(UIController)


#define FID_Playground_Source_Playground_Interfaces_IController_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_Interfaces_IController_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_Interfaces_IController_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIController() {} \
public: \
	typedef UIController UClassType; \
	typedef IIController ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Playground_Source_Playground_Interfaces_IController_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIController() {} \
public: \
	typedef UIController UClassType; \
	typedef IIController ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Playground_Source_Playground_Interfaces_IController_h_10_PROLOG
#define FID_Playground_Source_Playground_Interfaces_IController_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_SPARSE_DATA \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_RPC_WRAPPERS \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Playground_Source_Playground_Interfaces_IController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_SPARSE_DATA \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Playground_Source_Playground_Interfaces_IController_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYGROUND_API UClass* StaticClass<class UIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Playground_Source_Playground_Interfaces_IController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
