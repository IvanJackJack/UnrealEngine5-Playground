// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Interfaces/IController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIController() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UIController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UIController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UIController::StaticRegisterNativesUIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIController);
	UClass* Z_Construct_UClass_UIController_NoRegister()
	{
		return UIController::StaticClass();
	}
	struct Z_Construct_UClass_UIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIController_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/IController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIController_Statics::ClassParams = {
		&UIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIController()
	{
		if (!Z_Registration_Info_UClass_UIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIController.OuterSingleton, Z_Construct_UClass_UIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIController.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UIController>()
	{
		return UIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIController);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIController, UIController::StaticClass, TEXT("UIController"), &Z_Registration_Info_UClass_UIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIController), 857166483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IController_h_2010925862(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
