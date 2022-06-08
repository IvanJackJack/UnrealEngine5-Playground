// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/CustomComponents/WallrunComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallrunComponent() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UWallrunComponent::StaticRegisterNativesUWallrunComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWallrunComponent);
	UClass* Z_Construct_UClass_UWallrunComponent_NoRegister()
	{
		return UWallrunComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWallrunComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallrunComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomComponents/WallrunComponent.h" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallrunComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallrunComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWallrunComponent_Statics::ClassParams = {
		&UWallrunComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWallrunComponent()
	{
		if (!Z_Registration_Info_UClass_UWallrunComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWallrunComponent.OuterSingleton, Z_Construct_UClass_UWallrunComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWallrunComponent.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UWallrunComponent>()
	{
		return UWallrunComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWallrunComponent);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWallrunComponent, UWallrunComponent::StaticClass, TEXT("UWallrunComponent"), &Z_Registration_Info_UClass_UWallrunComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWallrunComponent), 1769904327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_496139401(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
