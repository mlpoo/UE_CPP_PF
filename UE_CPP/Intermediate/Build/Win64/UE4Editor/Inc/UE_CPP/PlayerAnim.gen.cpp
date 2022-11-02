// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/Player/PlayerAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnim() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_UPlayerAnim_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UPlayerAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
// End Cross Module References
	void UPlayerAnim::StaticRegisterNativesUPlayerAnim()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAnim_NoRegister()
	{
		return UPlayerAnim::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRolled_MetaData[];
#endif
		static void NewProp_bRolled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRolled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrouched_MetaData[];
#endif
		static void NewProp_bCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnim.h" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, Speed), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// BlueprintReadOnly : Blueprint ???? ???? ?? ??????\n//\x09\x09\x09\x09\x09   ?????? ?\xd2\xb0????\xcf\xb5??? ?????\xd5\xb4\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
		{ "ToolTip", "BlueprintReadOnly : Blueprint ???? ???? ?? ??????\n                                         ?????? ?\xd2\xb0????\xcf\xb5??? ?????\xd5\xb4\xcf\xb4?." },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->bRolled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled = { "bRolled", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->bCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched = { "bCrouched", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, Direction), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnim, Pitch), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Player/PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bRolled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_bIsInAir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnim_Statics::ClassParams = {
		&UPlayerAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnim, 689062700);
	template<> UE_CPP_API UClass* StaticClass<UPlayerAnim>()
	{
		return UPlayerAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnim(Z_Construct_UClass_UPlayerAnim, &UPlayerAnim::StaticClass, TEXT("/Script/UE_CPP"), TEXT("UPlayerAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
