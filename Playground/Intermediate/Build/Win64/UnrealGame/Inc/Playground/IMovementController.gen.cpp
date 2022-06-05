// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Interfaces/IMovementController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovementController() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UIMovementController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UIMovementController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UIMovementController::StaticRegisterNativesUIMovementController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMovementController);
	UClass* Z_Construct_UClass_UIMovementController_NoRegister()
	{
		return UIMovementController::StaticClass();
	}
	struct Z_Construct_UClass_UIMovementController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMovementController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMovementController_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/IMovementController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMovementController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIMovementController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMovementController_Statics::ClassParams = {
		&UIMovementController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIMovementController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMovementController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMovementController()
	{
		if (!Z_Registration_Info_UClass_UIMovementController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMovementController.OuterSingleton, Z_Construct_UClass_UIMovementController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMovementController.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UIMovementController>()
	{
		return UIMovementController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMovementController);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IMovementController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IMovementController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMovementController, UIMovementController::StaticClass, TEXT("UIMovementController"), &Z_Registration_Info_UClass_UIMovementController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMovementController), 3309794551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IMovementController_h_4080030613(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IMovementController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Interfaces_IMovementController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
