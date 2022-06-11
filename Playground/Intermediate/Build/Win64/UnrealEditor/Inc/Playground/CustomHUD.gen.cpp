// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/UI/CustomHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomHUD() {}
// Cross Module References
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomHUD_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UCustomHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomHUD::execGetStaminaRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaminaRatio();
		P_NATIVE_END;
	}
	void UCustomHUD::StaticRegisterNativesUCustomHUD()
	{
		UClass* Class = UCustomHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStaminaRatio", &UCustomHUD::execGetStaminaRatio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics
	{
		struct CustomHUD_eventGetStaminaRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventGetStaminaRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "GetStaminaRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::CustomHUD_eventGetStaminaRatio_Parms), Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_GetStaminaRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_GetStaminaRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomHUD);
	UClass* Z_Construct_UClass_UCustomHUD_NoRegister()
	{
		return UCustomHUD::StaticClass();
	}
	struct Z_Construct_UClass_UCustomHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomHUD_GetStaminaRatio, "GetStaminaRatio" }, // 695613423
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/CustomHUD.h" },
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController_MetaData[] = {
		{ "Category", "CustomHUD" },
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController = { "CharacterController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomHUD, CharacterController), Z_Construct_UClass_ACharacterController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine_MetaData[] = {
		{ "Category", "CustomHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomHUD, StateMachine), Z_Construct_UClass_UStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomHUD_Statics::NewProp_CharacterController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomHUD_Statics::NewProp_StateMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomHUD_Statics::ClassParams = {
		&UCustomHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomHUD()
	{
		if (!Z_Registration_Info_UClass_UCustomHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomHUD.OuterSingleton, Z_Construct_UClass_UCustomHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomHUD.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<UCustomHUD>()
	{
		return UCustomHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomHUD);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomHUD, UCustomHUD::StaticClass, TEXT("UCustomHUD"), &Z_Registration_Info_UClass_UCustomHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHUD), 2958850456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_4093660155(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
