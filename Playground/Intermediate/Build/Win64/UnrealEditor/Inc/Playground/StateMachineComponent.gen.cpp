// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/FiniteStateMachine/StateMachineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachineComponent() {}
// Cross Module References
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FFSMContext();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSMContext;
class UScriptStruct* FFSMContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSMContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSMContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFSMContext, Z_Construct_UPackage__Script_Playground(), TEXT("FSMContext"));
	}
	return Z_Registration_Info_UScriptStruct_FSMContext.OuterSingleton;
}
template<> PLAYGROUND_API UScriptStruct* StaticStruct<FFSMContext>()
{
	return FFSMContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFSMContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFSMContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FiniteStateMachine/StateMachineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFSMContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFSMContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFSMContext_Statics::NewProp_characterController_MetaData[] = {
		{ "Category", "FSMContext" },
		{ "ModuleRelativePath", "FiniteStateMachine/StateMachineComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFSMContext_Statics::NewProp_characterController = { "characterController", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFSMContext, characterController), Z_Construct_UClass_ACharacterController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFSMContext_Statics::NewProp_characterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFSMContext_Statics::NewProp_characterController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFSMContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFSMContext_Statics::NewProp_characterController,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFSMContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		&NewStructOps,
		"FSMContext",
		sizeof(FFSMContext),
		alignof(FFSMContext),
		Z_Construct_UScriptStruct_FFSMContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFSMContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFSMContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFSMContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFSMContext()
	{
		if (!Z_Registration_Info_UScriptStruct_FSMContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSMContext.InnerSingleton, Z_Construct_UScriptStruct_FFSMContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FSMContext.InnerSingleton;
	}
	void UStateMachineComponent::StaticRegisterNativesUStateMachineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateMachineComponent);
	UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister()
	{
		return UStateMachineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateMachineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentState;
		static const UECodeGen_Private::FClassPropertyParams NewProp_statesMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_statesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_statesMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateMachineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FiniteStateMachine/StateMachineComponent.h" },
		{ "ModuleRelativePath", "FiniteStateMachine/StateMachineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_context_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "FiniteStateMachine/StateMachineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, context), Z_Construct_UScriptStruct_FFSMContext, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_context_MetaData)) }; // 4181217515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_currentState_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "FiniteStateMachine/StateMachineComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_currentState = { "currentState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, currentState), Z_Construct_UClass_UStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_currentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_currentState_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_ValueProp = { "statesMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_Key_KeyProp = { "statesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "FiniteStateMachine/StateMachineComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap = { "statesMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, statesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateMachineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_currentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_statesMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateMachineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateMachineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateMachineComponent_Statics::ClassParams = {
		&UStateMachineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateMachineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateMachineComponent()
	{
		if (!Z_Registration_Info_UClass_UStateMachineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateMachineComponent.OuterSingleton, Z_Construct_UClass_UStateMachineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateMachineComponent.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UStateMachineComponent>()
	{
		return UStateMachineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateMachineComponent);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics::ScriptStructInfo[] = {
		{ FFSMContext::StaticStruct, Z_Construct_UScriptStruct_FFSMContext_Statics::NewStructOps, TEXT("FSMContext"), &Z_Registration_Info_UScriptStruct_FSMContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFSMContext), 4181217515U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateMachineComponent, UStateMachineComponent::StaticClass, TEXT("UStateMachineComponent"), &Z_Registration_Info_UClass_UStateMachineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateMachineComponent), 1568834069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_1637792338(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_FiniteStateMachine_StateMachineComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
