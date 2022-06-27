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
	DEFINE_FUNCTION(UCustomHUD::execSetWallrunVisualZThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWallrunVisualZThreshold(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execUpdateGravityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGravityScale(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetCancelDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCancelDelay(Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetStaminaConsumption)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaminaConsumption(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetGravityModeReduced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityModeReduced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execSetGravityModeZero)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityModeZero();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHUD::execGetWallrunCancelTimerRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWallrunCancelTimerRatio();
		P_NATIVE_END;
	}
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
			{ "GetWallrunCancelTimerRatio", &UCustomHUD::execGetWallrunCancelTimerRatio },
			{ "SetCancelDelay", &UCustomHUD::execSetCancelDelay },
			{ "SetGravityModeReduced", &UCustomHUD::execSetGravityModeReduced },
			{ "SetGravityModeZero", &UCustomHUD::execSetGravityModeZero },
			{ "SetStaminaConsumption", &UCustomHUD::execSetStaminaConsumption },
			{ "SetWallrunVisualZThreshold", &UCustomHUD::execSetWallrunVisualZThreshold },
			{ "UpdateGravityScale", &UCustomHUD::execUpdateGravityScale },
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
	struct Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics
	{
		struct CustomHUD_eventGetWallrunCancelTimerRatio_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventGetWallrunCancelTimerRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "GetWallrunCancelTimerRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::CustomHUD_eventGetWallrunCancelTimerRatio_Parms), Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics
	{
		struct CustomHUD_eventSetCancelDelay_Parms
		{
			float delay;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetCancelDelay_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetCancelDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::CustomHUD_eventSetCancelDelay_Parms), Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetCancelDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetCancelDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetGravityModeReduced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetGravityModeZero_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetGravityModeZero_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetGravityModeZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetGravityModeZero", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetGravityModeZero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetGravityModeZero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetGravityModeZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetGravityModeZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics
	{
		struct CustomHUD_eventSetStaminaConsumption_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetStaminaConsumption_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetStaminaConsumption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::CustomHUD_eventSetStaminaConsumption_Parms), Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics
	{
		struct CustomHUD_eventSetWallrunVisualZThreshold_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventSetWallrunVisualZThreshold_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "SetWallrunVisualZThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::CustomHUD_eventSetWallrunVisualZThreshold_Parms), Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics
	{
		struct CustomHUD_eventUpdateGravityScale_Parms
		{
			float scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomHUD_eventUpdateGravityScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CustomHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHUD, nullptr, "UpdateGravityScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::CustomHUD_eventUpdateGravityScale_Parms), Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHUD_UpdateGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHUD_UpdateGravityScale_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UCustomHUD_GetWallrunCancelTimerRatio, "GetWallrunCancelTimerRatio" }, // 3936882071
		{ &Z_Construct_UFunction_UCustomHUD_SetCancelDelay, "SetCancelDelay" }, // 941145850
		{ &Z_Construct_UFunction_UCustomHUD_SetGravityModeReduced, "SetGravityModeReduced" }, // 980298560
		{ &Z_Construct_UFunction_UCustomHUD_SetGravityModeZero, "SetGravityModeZero" }, // 1088314330
		{ &Z_Construct_UFunction_UCustomHUD_SetStaminaConsumption, "SetStaminaConsumption" }, // 4199035405
		{ &Z_Construct_UFunction_UCustomHUD_SetWallrunVisualZThreshold, "SetWallrunVisualZThreshold" }, // 1999361651
		{ &Z_Construct_UFunction_UCustomHUD_UpdateGravityScale, "UpdateGravityScale" }, // 1668951994
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
		{ Z_Construct_UClass_UCustomHUD, UCustomHUD::StaticClass, TEXT("UCustomHUD"), &Z_Registration_Info_UClass_UCustomHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHUD), 3746173311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_3317287506(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_UI_CustomHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
