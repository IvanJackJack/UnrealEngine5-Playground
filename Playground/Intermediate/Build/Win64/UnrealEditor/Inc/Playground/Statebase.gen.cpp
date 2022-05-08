// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/FiniteStateMachine/Statebase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatebase() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UStatebase_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStatebase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UStatebase::StaticRegisterNativesUStatebase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatebase);
	UClass* Z_Construct_UClass_UStatebase_NoRegister()
	{
		return UStatebase::StaticClass();
	}
	struct Z_Construct_UClass_UStatebase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatebase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatebase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FiniteStateMachine/Statebase.h" },
		{ "ModuleRelativePath", "FiniteStateMachine/Statebase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatebase_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Statebase" },
		{ "ModuleRelativePath", "FiniteStateMachine/Statebase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatebase_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatebase, name), METADATA_PARAMS(Z_Construct_UClass_UStatebase_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatebase_Statics::NewProp_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatebase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatebase_Statics::NewProp_name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatebase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatebase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatebase_Statics::ClassParams = {
		&UStatebase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatebase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatebase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatebase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatebase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatebase()
	{
		if (!Z_Registration_Info_UClass_UStatebase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatebase.OuterSingleton, Z_Construct_UClass_UStatebase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatebase.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UStatebase>()
	{
		return UStatebase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatebase);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_Statebase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_Statebase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatebase, UStatebase::StaticClass, TEXT("UStatebase"), &Z_Registration_Info_UClass_UStatebase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatebase), 447320331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_Statebase_h_4259939874(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_Statebase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_Statebase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
