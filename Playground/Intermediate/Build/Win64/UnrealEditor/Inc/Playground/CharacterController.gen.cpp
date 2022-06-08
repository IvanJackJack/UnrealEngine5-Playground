// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playground/Controllers/CharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterController() {}
// Cross Module References
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunSide();
	UPackage* Z_Construct_UPackage__Script_Playground();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunEndreason();
	PLAYGROUND_API UEnum* Z_Construct_UEnum_Playground_EWallrunMode();
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FWallrun();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister();
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
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
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
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
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
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Input;
class UScriptStruct* FInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Input.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Input.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInput, Z_Construct_UPackage__Script_Playground(), TEXT("Input"));
	}
	return Z_Registration_Info_UScriptStruct_Input.OuterSingleton;
}
template<> PLAYGROUND_API UScriptStruct* StaticStruct<FInput>()
{
	return FInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpInput_MetaData[];
#endif
		static void NewProp_bJumpInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWallrunInput_MetaData[];
#endif
		static void NewProp_bWallrunInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallrunInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput = { "moveInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInput, moveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_SetBit(void* Obj)
	{
		((FInput*)Obj)->bJumpInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput = { "bJumpInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInput), &Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput_SetBit(void* Obj)
	{
		((FInput*)Obj)->bWallrunInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput = { "bWallrunInput", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInput), &Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_moveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_bJumpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInput_Statics::NewProp_bWallrunInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		&NewStructOps,
		"Input",
		sizeof(FInput),
		alignof(FInput),
		Z_Construct_UScriptStruct_FInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInput()
	{
		if (!Z_Registration_Info_UScriptStruct_Input.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Input.InnerSingleton, Z_Construct_UScriptStruct_FInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Input.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Status;
class UScriptStruct* FStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Status.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Status.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatus, Z_Construct_UPackage__Script_Playground(), TEXT("Status"));
	}
	return Z_Registration_Info_UScriptStruct_Status.OuterSingleton;
}
template<> PLAYGROUND_API UScriptStruct* StaticStruct<FStatus>()
{
	return FStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[];
#endif
		static void NewProp_bIsGrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWallrunning_MetaData[];
#endif
		static void NewProp_bIsWallrunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallrunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpRequested_MetaData[];
#endif
		static void NewProp_bJumpRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverlappingPlatform_MetaData[];
#endif
		static void NewProp_bIsOverlappingPlatform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverlappingPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlapBodyCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_overlapBodyCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSnapToWall_MetaData[];
#endif
		static void NewProp_bShouldSnapToWall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSnapToWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentValidHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentValidHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterSideward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterSideward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jumpsLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookingDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatus>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded_SetBit(void* Obj)
	{
		((FStatus*)Obj)->bIsGrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatus), &Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning_SetBit(void* Obj)
	{
		((FStatus*)Obj)->bIsWallrunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning = { "bIsWallrunning", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatus), &Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested_SetBit(void* Obj)
	{
		((FStatus*)Obj)->bJumpRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested = { "bJumpRequested", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatus), &Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform_SetBit(void* Obj)
	{
		((FStatus*)Obj)->bIsOverlappingPlatform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform = { "bIsOverlappingPlatform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatus), &Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_overlapBodyCount_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_overlapBodyCount = { "overlapBodyCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, overlapBodyCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_overlapBodyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_overlapBodyCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall_SetBit(void* Obj)
	{
		((FStatus*)Obj)->bShouldSnapToWall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall = { "bShouldSnapToWall", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatus), &Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_currentValidHit_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_currentValidHit = { "currentValidHit", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, currentValidHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_currentValidHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_currentValidHit_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterForward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterForward = { "characterForward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, characterForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterSideward_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterSideward = { "characterSideward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, characterSideward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterSideward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterSideward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_stamina_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_stamina = { "stamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, stamina), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_jumpsLeft_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_jumpsLeft = { "jumpsLeft", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, jumpsLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_jumpsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_jumpsLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_lookingDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_lookingDirection = { "lookingDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, lookingDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_lookingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_lookingDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsWallrunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bJumpRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsOverlappingPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_overlapBodyCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bShouldSnapToWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_currentValidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_characterSideward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_jumpsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_lookingDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		&NewStructOps,
		"Status",
		sizeof(FStatus),
		alignof(FStatus),
		Z_Construct_UScriptStruct_FStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_Status.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Status.InnerSingleton, Z_Construct_UScriptStruct_FStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Status.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Wallrun;
class UScriptStruct* FWallrun::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Wallrun.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Wallrun.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWallrun, Z_Construct_UPackage__Script_Playground(), TEXT("Wallrun"));
	}
	return Z_Registration_Info_UScriptStruct_Wallrun.OuterSingleton;
}
template<> PLAYGROUND_API UScriptStruct* StaticStruct<FWallrun>()
{
	return FWallrun::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWallrun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallAngle;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWallrun_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWallrun>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallNormal_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallNormal = { "wallNormal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallUpward_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallUpward = { "wallUpward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallUpward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallUpward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallUpward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallSideward_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallSideward = { "wallSideward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallSideward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallSideward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallSideward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMoveDirection_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMoveDirection = { "wallrunMoveDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallrunMoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMoveDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_moveDirectionAlongWallAxis_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_moveDirectionAlongWallAxis = { "moveDirectionAlongWallAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, moveDirectionAlongWallAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_moveDirectionAlongWallAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_moveDirectionAlongWallAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lookingMoveDirectionAlongWallAxis = { "lookingMoveDirectionAlongWallAxis", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, lookingMoveDirectionAlongWallAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lookingMoveDirectionAlongWallAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallAngle_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallAngle = { "wallAngle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide = { "wallrunSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallrunSide), Z_Construct_UEnum_Playground_EWallrunSide, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide_MetaData)) }; // 3052503450
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide = { "startingLateralWallSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, startingLateralWallSide), Z_Construct_UEnum_Playground_EWallrunSide, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide_MetaData)) }; // 3052503450
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason = { "lastEndReason", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, lastEndReason), Z_Construct_UEnum_Playground_EWallrunEndreason, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason_MetaData)) }; // 3047039366
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode_MetaData[] = {
		{ "Category", "Wallrun" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode = { "wallrunMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWallrun, wallrunMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode_MetaData)) }; // 3908614043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWallrun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallUpward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallSideward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMoveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_moveDirectionAlongWallAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lookingMoveDirectionAlongWallAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_startingLateralWallSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_lastEndReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWallrun_Statics::NewProp_wallrunMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWallrun_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
		nullptr,
		&NewStructOps,
		"Wallrun",
		sizeof(FWallrun),
		alignof(FWallrun),
		Z_Construct_UScriptStruct_FWallrun_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWallrun_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWallrun_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWallrun()
	{
		if (!Z_Registration_Info_UScriptStruct_Wallrun.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Wallrun.InnerSingleton, Z_Construct_UScriptStruct_FWallrun_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Wallrun.InnerSingleton;
	}
	DEFINE_FUNCTION(ACharacterController::execGetWallSide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWallSide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execGetStaminaRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStaminaRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execLanded)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Landed(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execOnHit)
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
	DEFINE_FUNCTION(ACharacterController::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
		UClass* Class = ACharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStaminaRatio", &ACharacterController::execGetStaminaRatio },
			{ "GetWallSide", &ACharacterController::execGetWallSide },
			{ "Landed", &ACharacterController::execLanded },
			{ "OnBeginOverlap", &ACharacterController::execOnBeginOverlap },
			{ "OnEndOverlap", &ACharacterController::execOnEndOverlap },
			{ "OnHit", &ACharacterController::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics
	{
		struct CharacterController_eventGetStaminaRatio_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventGetStaminaRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "GetStaminaRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::CharacterController_eventGetStaminaRatio_Parms), Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_GetStaminaRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_GetStaminaRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_GetWallSide_Statics
	{
		struct CharacterController_eventGetWallSide_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventGetWallSide_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "GetWallSide", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::CharacterController_eventGetWallSide_Parms), Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_GetWallSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_GetWallSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_Landed_Statics
	{
		struct CharacterController_eventLanded_Parms
		{
			FHitResult Hit;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_Landed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_Landed_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "Landed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_Landed_Statics::CharacterController_eventLanded_Parms), Z_Construct_UFunction_ACharacterController_Landed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Landed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_Landed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Landed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_Landed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_Landed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics
	{
		struct CharacterController_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CharacterController_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterController_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::CharacterController_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics
	{
		struct CharacterController_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::CharacterController_eventOnEndOverlap_Parms), Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_OnHit_Statics
	{
		struct CharacterController_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterController_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_OnHit_Statics::CharacterController_eventOnHit_Parms), Z_Construct_UFunction_ACharacterController_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterController);
	UClass* Z_Construct_UClass_ACharacterController_NoRegister()
	{
		return ACharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterController_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inputValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpsMax_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jumpsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_initialAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallrunDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallrunDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wrongMoveKeysDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wrongMoveKeysDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checkWallRayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_checkWallRayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minimumVisualWallrunDirectionVerticalValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minimumVisualWallrunDirectionVerticalValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vectorMoveTowardsRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vectorMoveTowardsRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontSideThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frontSideThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lateralSideChangeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lateralSideChangeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaLoseAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaLoseAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaRecoverAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaRecoverAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocityWallrunThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_velocityWallrunThreshold;
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
	UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_GetStaminaRatio, "GetStaminaRatio" }, // 3302119800
		{ &Z_Construct_UFunction_ACharacterController_GetWallSide, "GetWallSide" }, // 3734257882
		{ &Z_Construct_UFunction_ACharacterController_Landed, "Landed" }, // 3648858308
		{ &Z_Construct_UFunction_ACharacterController_OnBeginOverlap, "OnBeginOverlap" }, // 1163189281
		{ &Z_Construct_UFunction_ACharacterController_OnEndOverlap, "OnEndOverlap" }, // 1919840801
		{ &Z_Construct_UFunction_ACharacterController_OnHit, "OnHit" }, // 2375937013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Controllers/CharacterController.h" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, StateMachine), Z_Construct_UClass_UStateMachineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController = { "CharacterPlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, CharacterPlayerController), Z_Construct_UClass_ACharacterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues_MetaData[] = {
		{ "Category", "Structs" },
		{ "Comment", "//Struct\n" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
		{ "ToolTip", "Struct" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues = { "inputValues", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, inputValues), Z_Construct_UScriptStruct_FInput, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues_MetaData)) }; // 1454212551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus_MetaData[] = {
		{ "Category", "Structs" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus = { "characterStatus", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, characterStatus), Z_Construct_UScriptStruct_FStatus, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus_MetaData)) }; // 2327332837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_wallInfo_MetaData[] = {
		{ "Category", "Structs" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_wallInfo = { "wallInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, wallInfo), Z_Construct_UScriptStruct_FWallrun, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_wallInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_wallInfo_MetaData)) }; // 2619720588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//Variables\n" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed = { "cameraRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, cameraRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina = { "maxStamina", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, maxStamina), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax = { "jumpsMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, jumpsMax), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_initialAirControl_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_initialAirControl = { "initialAirControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, initialAirControl), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_initialAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_initialAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_wallrunDelay_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_wallrunDelay = { "wallrunDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, wallrunDelay), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_wallrunDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_wallrunDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_wrongMoveKeysDelay_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_wrongMoveKeysDelay = { "wrongMoveKeysDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, wrongMoveKeysDelay), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_wrongMoveKeysDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_wrongMoveKeysDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_checkWallRayLength_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_checkWallRayLength = { "checkWallRayLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, checkWallRayLength), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_checkWallRayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_checkWallRayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_minimumVisualWallrunDirectionVerticalValue_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_minimumVisualWallrunDirectionVerticalValue = { "minimumVisualWallrunDirectionVerticalValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, minimumVisualWallrunDirectionVerticalValue), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_minimumVisualWallrunDirectionVerticalValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_minimumVisualWallrunDirectionVerticalValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_vectorMoveTowardsRatio_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_vectorMoveTowardsRatio = { "vectorMoveTowardsRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, vectorMoveTowardsRatio), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_vectorMoveTowardsRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_vectorMoveTowardsRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_movementAcceleration_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_movementAcceleration = { "movementAcceleration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, movementAcceleration), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_movementAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_movementAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_movementDeceleration_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_movementDeceleration = { "movementDeceleration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, movementDeceleration), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_movementDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_movementDeceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_frontSideThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_frontSideThreshold = { "frontSideThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, frontSideThreshold), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_frontSideThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_frontSideThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_lateralSideChangeThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_lateralSideChangeThreshold = { "lateralSideChangeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, lateralSideChangeThreshold), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_lateralSideChangeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_lateralSideChangeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount = { "staminaLoseAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, staminaLoseAmount), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount = { "staminaRecoverAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, staminaRecoverAmount), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_velocityWallrunThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_velocityWallrunThreshold = { "velocityWallrunThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, velocityWallrunThreshold), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_velocityWallrunThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_velocityWallrunThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode = { "desiredHorizontalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, desiredHorizontalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode_MetaData)) }; // 3908614043
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode = { "desiredVerticalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, desiredVerticalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode_MetaData)) }; // 3908614043
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode = { "desiredDiagonalMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, desiredDiagonalMode), Z_Construct_UEnum_Playground_EWallrunMode, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode_MetaData)) }; // 3908614043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_wallInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_cameraRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_maxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_initialAirControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_wallrunDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_wrongMoveKeysDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_checkWallRayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_minimumVisualWallrunDirectionVerticalValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_vectorMoveTowardsRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_movementAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_movementDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_frontSideThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_lateralSideChangeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaLoseAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_staminaRecoverAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_velocityWallrunThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredHorizontalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredVerticalMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_desiredDiagonalMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
		&ACharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterController()
	{
		if (!Z_Registration_Info_UClass_ACharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterController.OuterSingleton, Z_Construct_UClass_ACharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterController.OuterSingleton;
	}
	template<> PLAYGROUND_API UClass* StaticClass<ACharacterController>()
	{
		return ACharacterController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
	struct Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::EnumInfo[] = {
		{ EWallrunSide_StaticEnum, TEXT("EWallrunSide"), &Z_Registration_Info_UEnum_EWallrunSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3052503450U) },
		{ EWallrunEndreason_StaticEnum, TEXT("EWallrunEndreason"), &Z_Registration_Info_UEnum_EWallrunEndreason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3047039366U) },
		{ EWallrunMode_StaticEnum, TEXT("EWallrunMode"), &Z_Registration_Info_UEnum_EWallrunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3908614043U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ScriptStructInfo[] = {
		{ FInput::StaticStruct, Z_Construct_UScriptStruct_FInput_Statics::NewStructOps, TEXT("Input"), &Z_Registration_Info_UScriptStruct_Input, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInput), 1454212551U) },
		{ FStatus::StaticStruct, Z_Construct_UScriptStruct_FStatus_Statics::NewStructOps, TEXT("Status"), &Z_Registration_Info_UScriptStruct_Status, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatus), 2327332837U) },
		{ FWallrun::StaticStruct, Z_Construct_UScriptStruct_FWallrun_Statics::NewStructOps, TEXT("Wallrun"), &Z_Registration_Info_UScriptStruct_Wallrun, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWallrun), 2619720588U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 835925769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_3330956571(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
