// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Controllers/Reids/Wallrun/ReidsCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReidsCharacter() {}
// Cross Module References
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EReidsWallrunSide();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EReidsWallrunEndreason();
	PLAYGROUND_API UClass* Z_Construct_UClass_AReidsCharacter_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_AReidsCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReidsWallrunSide;
	static UEnum* EReidsWallrunSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReidsWallrunSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReidsWallrunSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EReidsWallrunSide, Z_Construct_UPackage__Script_Playground(), TEXT("EReidsWallrunSide"));
		}
		return Z_Registration_Info_UEnum_EReidsWallrunSide.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EReidsWallrunSide>()
	{
		return EReidsWallrunSide_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::Enumerators[] = {
		{ "EReidsWallrunSide::Left", (int64)EReidsWallrunSide::Left },
		{ "EReidsWallrunSide::Right", (int64)EReidsWallrunSide::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EReidsWallrunSide::Left" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EReidsWallrunSide::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EReidsWallrunSide",
		"EReidsWallrunSide",
		Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EReidsWallrunSide()
	{
		if (!Z_Registration_Info_UEnum_EReidsWallrunSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReidsWallrunSide.InnerSingleton, Z_Construct_UEnum_Playground_EReidsWallrunSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReidsWallrunSide.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReidsWallrunEndreason;
	static UEnum* EReidsWallrunEndreason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReidsWallrunEndreason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReidsWallrunEndreason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EReidsWallrunEndreason, Z_Construct_UPackage__Script_Playground(), TEXT("EReidsWallrunEndreason"));
		}
		return Z_Registration_Info_UEnum_EReidsWallrunEndreason.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EReidsWallrunEndreason>()
	{
		return EReidsWallrunEndreason_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::Enumerators[] = {
		{ "EReidsWallrunEndreason::Fall", (int64)EReidsWallrunEndreason::Fall },
		{ "EReidsWallrunEndreason::Jump", (int64)EReidsWallrunEndreason::Jump },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fall.DisplayName", "Fall" },
		{ "Fall.Name", "EReidsWallrunEndreason::Fall" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EReidsWallrunEndreason::Jump" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EReidsWallrunEndreason",
		"EReidsWallrunEndreason",
		Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EReidsWallrunEndreason()
	{
		if (!Z_Registration_Info_UEnum_EReidsWallrunEndreason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReidsWallrunEndreason.InnerSingleton, Z_Construct_UEnum_Playground_EReidsWallrunEndreason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReidsWallrunEndreason.InnerSingleton;
	}
	DEFINE_FUNCTION(AReidsCharacter::execEndCameraTilt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCameraTilt_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReidsCharacter::execBeginCameraTilt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginCameraTilt_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReidsCharacter::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_AReidsCharacter_BeginCameraTilt = FName(TEXT("BeginCameraTilt"));
	void AReidsCharacter::BeginCameraTilt()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReidsCharacter_BeginCameraTilt),NULL);
	}
	static FName NAME_AReidsCharacter_EndCameraTilt = FName(TEXT("EndCameraTilt"));
	void AReidsCharacter::EndCameraTilt()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReidsCharacter_EndCameraTilt),NULL);
	}
	void AReidsCharacter::StaticRegisterNativesAReidsCharacter()
	{
		UClass* Class = AReidsCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginCameraTilt", &AReidsCharacter::execBeginCameraTilt },
			{ "EndCameraTilt", &AReidsCharacter::execEndCameraTilt },
			{ "OnHit", &AReidsCharacter::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReidsCharacter, nullptr, "BeginCameraTilt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReidsCharacter_EndCameraTilt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReidsCharacter_EndCameraTilt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReidsCharacter_EndCameraTilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReidsCharacter, nullptr, "EndCameraTilt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReidsCharacter_EndCameraTilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_EndCameraTilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReidsCharacter_EndCameraTilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReidsCharacter_EndCameraTilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReidsCharacter_OnHit_Statics
	{
		struct ReidsCharacter_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReidsCharacter_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReidsCharacter_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReidsCharacter_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReidsCharacter_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReidsCharacter_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReidsCharacter, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::ReidsCharacter_eventOnHit_Parms), Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReidsCharacter_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReidsCharacter_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReidsCharacter);
	UClass* Z_Construct_UClass_AReidsCharacter_NoRegister()
	{
		return AReidsCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AReidsCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallrunDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWallrunning_MetaData[];
#endif
		static void NewProp_bIsWallrunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallrunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jumpsLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpsMax_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jumpsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rightAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_wallrunSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_wallrunSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReidsCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReidsCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReidsCharacter_BeginCameraTilt, "BeginCameraTilt" }, // 3895238927
		{ &Z_Construct_UFunction_AReidsCharacter_EndCameraTilt, "EndCameraTilt" }, // 2056610972
		{ &Z_Construct_UFunction_AReidsCharacter_OnHit, "OnHit" }, // 553536604
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, Movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunDirection = { "wallrunDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, wallrunDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning_SetBit(void* Obj)
	{
		((AReidsCharacter*)Obj)->bIsWallrunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning = { "bIsWallrunning", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AReidsCharacter), &Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsLeft_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsLeft = { "jumpsLeft", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, jumpsLeft), METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsMax_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsMax = { "jumpsMax", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, jumpsMax), METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_rightAxis_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_rightAxis = { "rightAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, rightAxis), METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_rightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_rightAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_forwardAxis_MetaData[] = {
		{ "Category", "Status" },
		{ "Comment", "//sideward input value\n" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
		{ "ToolTip", "sideward input value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_forwardAxis = { "forwardAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, forwardAxis), METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_forwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_forwardAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_currentCharacterMovement_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_currentCharacterMovement = { "currentCharacterMovement", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, currentCharacterMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_currentCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_currentCharacterMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_characterDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_characterDirection = { "characterDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, characterDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_characterDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_characterDirection_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/Reids/Wallrun/ReidsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide = { "wallrunSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReidsCharacter, wallrunSide), Z_Construct_UEnum_Playground_EReidsWallrunSide, METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide_MetaData)) }; // 2226402997
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReidsCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_bIsWallrunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_jumpsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_rightAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_forwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_currentCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_characterDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReidsCharacter_Statics::NewProp_wallrunSide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReidsCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReidsCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReidsCharacter_Statics::ClassParams = {
		&AReidsCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReidsCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReidsCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReidsCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReidsCharacter()
	{
		if (!Z_Registration_Info_UClass_AReidsCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReidsCharacter.OuterSingleton, Z_Construct_UClass_AReidsCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReidsCharacter.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<AReidsCharacter>()
	{
		return AReidsCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReidsCharacter);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics::EnumInfo[] = {
		{ EReidsWallrunSide_StaticEnum, TEXT("EReidsWallrunSide"), &Z_Registration_Info_UEnum_EReidsWallrunSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2226402997U) },
		{ EReidsWallrunEndreason_StaticEnum, TEXT("EReidsWallrunEndreason"), &Z_Registration_Info_UEnum_EReidsWallrunEndreason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4210319454U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReidsCharacter, AReidsCharacter::StaticClass, TEXT("AReidsCharacter"), &Z_Registration_Info_UClass_AReidsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReidsCharacter), 3061145939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_2538882182(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_Reids_Wallrun_ReidsCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
