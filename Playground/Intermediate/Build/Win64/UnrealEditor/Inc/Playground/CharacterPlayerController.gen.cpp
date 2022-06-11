// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Controllers/CapsuleCharacter/CharacterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPlayerController() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Playground();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomHUD_NoRegister();
// End Cross Module References
	void ACharacterPlayerController::StaticRegisterNativesACharacterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterPlayerController);
	UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister()
	{
		return ACharacterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDOverlayAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/CapsuleCharacter/CharacterPlayerController.h" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HUDOverlayAsset = { "HUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterPlayerController, HUDOverlayAsset), Z_Construct_UClass_UCustomHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HudOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CapsuleCharacter/CharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HudOverlay = { "HudOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterPlayerController, HudOverlay), Z_Construct_UClass_UCustomHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HudOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HudOverlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HUDOverlayAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_HudOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPlayerController_Statics::ClassParams = {
		&ACharacterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACharacterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterPlayerController.OuterSingleton, Z_Construct_UClass_ACharacterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterPlayerController.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<ACharacterPlayerController>()
	{
		return ACharacterPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterPlayerController);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterPlayerController, ACharacterPlayerController::StaticClass, TEXT("ACharacterPlayerController"), &Z_Registration_Info_UClass_ACharacterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterPlayerController), 2741595831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterPlayerController_h_3333745330(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CapsuleCharacter_CharacterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
