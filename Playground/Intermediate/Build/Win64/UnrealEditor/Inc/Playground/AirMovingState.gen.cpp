// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/FiniteStateMachine/States/AirMovingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirMovingState() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UAirMovingState_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UAirMovingState();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateBase();
	UPackage* Z_Construct_UPackage__Script_Playground();
// End Cross Module References
	void UAirMovingState::StaticRegisterNativesUAirMovingState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAirMovingState);
	UClass* Z_Construct_UClass_UAirMovingState_NoRegister()
	{
		return UAirMovingState::StaticClass();
	}
	struct Z_Construct_UClass_UAirMovingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAirMovingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAirMovingState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FiniteStateMachine/States/AirMovingState.h" },
		{ "ModuleRelativePath", "FiniteStateMachine/States/AirMovingState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAirMovingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirMovingState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAirMovingState_Statics::ClassParams = {
		&UAirMovingState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAirMovingState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAirMovingState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAirMovingState()
	{
		if (!Z_Registration_Info_UClass_UAirMovingState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAirMovingState.OuterSingleton, Z_Construct_UClass_UAirMovingState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAirMovingState.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UAirMovingState>()
	{
		return UAirMovingState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAirMovingState);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirMovingState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirMovingState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAirMovingState, UAirMovingState::StaticClass, TEXT("UAirMovingState"), &Z_Registration_Info_UClass_UAirMovingState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAirMovingState), 1895288652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirMovingState_h_3509801770(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirMovingState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_States_AirMovingState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
