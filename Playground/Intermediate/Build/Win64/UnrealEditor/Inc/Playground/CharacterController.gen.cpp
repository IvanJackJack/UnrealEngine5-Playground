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
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FInput();
	UPackage* Z_Construct_UPackage__Script_Playground();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PLAYGROUND_API UScriptStruct* Z_Construct_UScriptStruct_FStatus();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterController();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
	PLAYGROUND_API UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveVelocity;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveVelocity_MetaData[] = {
		{ "Category", "Status" },
		{ "Comment", "//calcolata quando applico il movimento\n//devo provare a cambiare gli assi, usando la groundNormal\n" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
		{ "ToolTip", "calcolata quando applico il movimento\ndevo provare a cambiare gli assi, usando la groundNormal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveVelocity = { "moveVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatus, moveVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_bIsGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatus_Statics::NewProp_moveVelocity,
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
		EStructFlags(0x00000001),
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
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterController);
	UClass* Z_Construct_UClass_ACharacterController_NoRegister()
	{
		return ACharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Playground,
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
		{ "Comment", "// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)\n// class UCapsuleComponent* OverlapCapsule;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)\nclass UCapsuleComponent* OverlapCapsule;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, Movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "//class UCustomCharacterMovementComponent* Movement;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controllers/CharacterController.h" },
		{ "ToolTip", "class UCustomCharacterMovementComponent* Movement;" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus = { "characterStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterController, characterStatus), Z_Construct_UScriptStruct_FStatus, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus_MetaData)) }; // 958934099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_StateMachine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CharacterPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_inputValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_characterStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
		&ACharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ScriptStructInfo[] = {
		{ FInput::StaticStruct, Z_Construct_UScriptStruct_FInput_Statics::NewStructOps, TEXT("Input"), &Z_Registration_Info_UScriptStruct_Input, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInput), 1454212551U) },
		{ FStatus::StaticStruct, Z_Construct_UScriptStruct_FStatus_Statics::NewStructOps, TEXT("Status"), &Z_Registration_Info_UScriptStruct_Status, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatus), 958934099U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 2427193131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_2892513652(TEXT("/Script/Playground"),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Playground_Source_Playground_Controllers_CharacterController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
