// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Controllers/CustomCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCharacterMovementComponent() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomCharacterMovementComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UCustomCharacterMovementComponent::StaticRegisterNativesUCustomCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomCharacterMovementComponent);
	UClass* Z_Construct_UClass_UCustomCharacterMovementComponent_NoRegister()
	{
		return UCustomCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Controllers/CustomCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Controllers/CustomCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::ClassParams = {
		&UCustomCharacterMovementComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UCustomCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomCharacterMovementComponent.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UCustomCharacterMovementComponent>()
	{
		return UCustomCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCharacterMovementComponent);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CustomCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CustomCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomCharacterMovementComponent, UCustomCharacterMovementComponent::StaticClass, TEXT("UCustomCharacterMovementComponent"), &Z_Registration_Info_UClass_UCustomCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomCharacterMovementComponent), 306002322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CustomCharacterMovementComponent_h_4143413904(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CustomCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CustomCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
