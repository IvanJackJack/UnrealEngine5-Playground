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
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunSide();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunEndreason();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunMode();
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UWallrunComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunSide;
	static UEnum* EWallrunSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunSide, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunSide"));
		}
		return Z_Registration_Info_UEnum_EWallrunSide.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunSide>()
	{
		return EWallrunSide_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enumerators[] = {
		{ "EWallrunSide::Left", (int64)EWallrunSide::Left },
		{ "EWallrunSide::Right", (int64)EWallrunSide::Right },
		{ "EWallrunSide::Front", (int64)EWallrunSide::Front },
		{ "EWallrunSide::None", (int64)EWallrunSide::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Front.DisplayName", "Front" },
		{ "Front.Name", "EWallrunSide::Front" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EWallrunSide::Left" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWallrunSide::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EWallrunSide::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunSide",
		"EWallrunSide",
		Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunSide()
	{
		if (!Z_Registration_Info_UEnum_EWallrunSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunSide.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunSide.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunEndreason;
	static UEnum* EWallrunEndreason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunEndreason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunEndreason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunEndreason, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunEndreason"));
		}
		return Z_Registration_Info_UEnum_EWallrunEndreason.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunEndreason>()
	{
		return EWallrunEndreason_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunEndreason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enumerators[] = {
		{ "EWallrunEndreason::Fall", (int64)EWallrunEndreason::Fall },
		{ "EWallrunEndreason::Jump", (int64)EWallrunEndreason::Jump },
		{ "EWallrunEndreason::WrongKeys", (int64)EWallrunEndreason::WrongKeys },
		{ "EWallrunEndreason::SideChange", (int64)EWallrunEndreason::SideChange },
		{ "EWallrunEndreason::NoHit", (int64)EWallrunEndreason::NoHit },
		{ "EWallrunEndreason::WrongDirection", (int64)EWallrunEndreason::WrongDirection },
		{ "EWallrunEndreason::WrongMode", (int64)EWallrunEndreason::WrongMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fall.DisplayName", "Fall" },
		{ "Fall.Name", "EWallrunEndreason::Fall" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EWallrunEndreason::Jump" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "NoHit.DisplayName", "NoHit" },
		{ "NoHit.Name", "EWallrunEndreason::NoHit" },
		{ "SideChange.DisplayName", "SideChange" },
		{ "SideChange.Name", "EWallrunEndreason::SideChange" },
		{ "WrongDirection.DisplayName", "WrongDirection" },
		{ "WrongDirection.Name", "EWallrunEndreason::WrongDirection" },
		{ "WrongKeys.DisplayName", "WrongKeys" },
		{ "WrongKeys.Name", "EWallrunEndreason::WrongKeys" },
		{ "WrongMode.DisplayName", "WrongMode" },
		{ "WrongMode.Name", "EWallrunEndreason::WrongMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunEndreason",
		"EWallrunEndreason",
		Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunEndreason()
	{
		if (!Z_Registration_Info_UEnum_EWallrunEndreason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunEndreason.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunEndreason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunEndreason.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallrunMode;
	static UEnum* EWallrunMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallrunMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallrunMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Playground_EWallrunMode, Z_Construct_UPackage__Script_Playground(), TEXT("EWallrunMode"));
		}
		return Z_Registration_Info_UEnum_EWallrunMode.OuterSingleton;
	}
	template<> PLAYGROUND_API UEnum* StaticEnum<EWallrunMode>()
	{
		return EWallrunMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Playground_EWallrunMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enumerators[] = {
		{ "EWallrunMode::Horizontal", (int64)EWallrunMode::Horizontal },
		{ "EWallrunMode::Vertical", (int64)EWallrunMode::Vertical },
		{ "EWallrunMode::Diagonal", (int64)EWallrunMode::Diagonal },
		{ "EWallrunMode::Visual", (int64)EWallrunMode::Visual },
		{ "EWallrunMode::None", (int64)EWallrunMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Diagonal.DisplayName", "Diagonal" },
		{ "Diagonal.Name", "EWallrunMode::Diagonal" },
		{ "Horizontal.DisplayName", "Horizontal" },
		{ "Horizontal.Name", "EWallrunMode::Horizontal" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EWallrunMode::None" },
		{ "Vertical.DisplayName", "Vertical" },
		{ "Vertical.Name", "EWallrunMode::Vertical" },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EWallrunMode::Visual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Playground_EWallrunMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		"EWallrunMode",
		"EWallrunMode",
		Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Playground_EWallrunMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Playground_EWallrunMode()
	{
		if (!Z_Registration_Info_UEnum_EWallrunMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallrunMode.InnerSingleton, Z_Construct_UEnum_Playground_EWallrunMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallrunMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UWallrunComponent::execGetWallSide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWallSide();
		P_NATIVE_END;
	}
	void UWallrunComponent::StaticRegisterNativesUWallrunComponent()
	{
		UClass* Class = UWallrunComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWallSide", &UWallrunComponent::execGetWallSide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics
	{
		struct WallrunComponent_eventGetWallSide_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WallrunComponent_eventGetWallSide_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallrunComponent, nullptr, "GetWallSide", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::WallrunComponent_eventGetWallSide_Parms), Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallrunComponent_GetWallSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallrunComponent_GetWallSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWallrunComponent);
	UClass* Z_Construct_UClass_UWallrunComponent_NoRegister()
	{
		return UWallrunComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWallrunComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallUpward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallUpward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSideward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallSideward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunMoveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallrunMoveDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDirectionAlongWallAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirectionAlongWallAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookingMoveDirectionAlongWallAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookingMoveDirectionAlongWallAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunTimerExpired_MetaData[];
#endif
		static void NewProp_wallrunTimerExpired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wallrunTimerExpired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentValidHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentValidHit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_wallrunSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_wallrunSide;
		static const UECodeGen_Private::FBytePropertyParams NewProp_startingLateralWallSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startingLateralWallSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startingLateralWallSide;
		static const UECodeGen_Private::FBytePropertyParams NewProp_lastEndReason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastEndReason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_lastEndReason;
		static const UECodeGen_Private::FBytePropertyParams NewProp_wallrunMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_wallrunMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallrunDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checkWallRayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_checkWallRayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_visualWallrunMinVerticalValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_visualWallrunMinVerticalValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_visualWallrunLookingDownThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_visualWallrunLookingDownThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontSideThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frontSideThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lateralSideChangeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lateralSideChangeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocityWallrunThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocityWallrunThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallAngleDotThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallAngleDotThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocityAccelerationRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocityAccelerationRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_initialAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysStickToWall_MetaData[];
#endif
		static void NewProp_bAlwaysStickToWall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysStickToWall;
		static const UECodeGen_Private::FBytePropertyParams NewProp_desiredHorizontalMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredHorizontalMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_desiredHorizontalMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_desiredVerticalMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredVerticalMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_desiredVerticalMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_desiredDiagonalMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredDiagonalMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_desiredDiagonalMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallrunComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWallrunComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWallrunComponent_GetWallSide, "GetWallSide" }, // 705078425
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomComponents/WallrunComponent.h" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal = { "wallNormal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward = { "wallUpward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallUpward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward = { "wallSideward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallSideward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMoveDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMoveDirection = { "wallrunMoveDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunMoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMoveDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis = { "moveDirectionAlongWallAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, moveDirectionAlongWallAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis = { "lookingMoveDirectionAlongWallAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lookingMoveDirectionAlongWallAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->wallrunTimerExpired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired = { "wallrunTimerExpired", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle = { "wallAngle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallAngle), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit = { "currentValidHit", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, currentValidHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide = { "wallrunSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunSide), Z_Construct_UEnum_Playground_EWallrunSide, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_MetaData)) }; // 3832065952
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide = { "startingLateralWallSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, startingLateralWallSide), Z_Construct_UEnum_Playground_EWallrunSide, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_MetaData)) }; // 3832065952
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason = { "lastEndReason", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lastEndReason), Z_Construct_UEnum_Playground_EWallrunEndreason, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_MetaData)) }; // 157829051
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode = { "wallrunMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_MetaData)) }; // 1173612486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDelay_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDelay = { "wallrunDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallrunDelay), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_checkWallRayLength_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_checkWallRayLength = { "checkWallRayLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, checkWallRayLength), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_checkWallRayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_checkWallRayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue = { "visualWallrunMinVerticalValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, visualWallrunMinVerticalValue), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunLookingDownThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunLookingDownThreshold = { "visualWallrunLookingDownThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, visualWallrunLookingDownThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunLookingDownThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunLookingDownThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_frontSideThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_frontSideThreshold = { "frontSideThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, frontSideThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_frontSideThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_frontSideThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeThreshold = { "lateralSideChangeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, lateralSideChangeThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold = { "velocityWallrunThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, velocityWallrunThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngleDotThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngleDotThreshold = { "wallAngleDotThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, wallAngleDotThreshold), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngleDotThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngleDotThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityAccelerationRatio_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityAccelerationRatio = { "velocityAccelerationRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, velocityAccelerationRatio), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityAccelerationRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityAccelerationRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl = { "initialAirControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, initialAirControl), METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_SetBit(void* Obj)
	{
		((UWallrunComponent*)Obj)->bAlwaysStickToWall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall = { "bAlwaysStickToWall", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWallrunComponent), &Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode = { "desiredHorizontalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, desiredHorizontalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_MetaData)) }; // 1173612486
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode = { "desiredVerticalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, desiredVerticalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_MetaData)) }; // 1173612486
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "CustomComponents/WallrunComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode = { "desiredDiagonalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallrunComponent, desiredDiagonalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_MetaData)) }; // 1173612486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWallrunComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallUpward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallSideward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMoveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_moveDirectionAlongWallAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lookingMoveDirectionAlongWallAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunTimerExpired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_currentValidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_startingLateralWallSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lastEndReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallrunDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_checkWallRayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunMinVerticalValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_visualWallrunLookingDownThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_frontSideThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_lateralSideChangeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityWallrunThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_wallAngleDotThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_velocityAccelerationRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_initialAirControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_bAlwaysStickToWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredHorizontalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredVerticalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallrunComponent_Statics::NewProp_desiredDiagonalMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallrunComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallrunComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWallrunComponent_Statics::ClassParams = {
		&UWallrunComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWallrunComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWallrunComponent_Statics::PropPointers),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::EnumInfo[] = {
		{ EWallrunSide_StaticEnum, TEXT("EWallrunSide"), &Z_Registration_Info_UEnum_EWallrunSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832065952U) },
		{ EWallrunEndreason_StaticEnum, TEXT("EWallrunEndreason"), &Z_Registration_Info_UEnum_EWallrunEndreason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 157829051U) },
		{ EWallrunMode_StaticEnum, TEXT("EWallrunMode"), &Z_Registration_Info_UEnum_EWallrunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1173612486U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWallrunComponent, UWallrunComponent::StaticClass, TEXT("UWallrunComponent"), &Z_Registration_Info_UClass_UWallrunComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWallrunComponent), 62198537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_2678156929(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_CustomComponents_WallrunComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
