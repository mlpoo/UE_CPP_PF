// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP/Notify/EndRollNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndRollNotify() {}
// Cross Module References
	UE_CPP_API UClass* Z_Construct_UClass_UEndRollNotify_NoRegister();
	UE_CPP_API UClass* Z_Construct_UClass_UEndRollNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_UE_CPP();
// End Cross Module References
	void UEndRollNotify::StaticRegisterNativesUEndRollNotify()
	{
	}
	UClass* Z_Construct_UClass_UEndRollNotify_NoRegister()
	{
		return UEndRollNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEndRollNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndRollNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndRollNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notify/EndRollNotify.h" },
		{ "ModuleRelativePath", "Notify/EndRollNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndRollNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndRollNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndRollNotify_Statics::ClassParams = {
		&UEndRollNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndRollNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndRollNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndRollNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndRollNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndRollNotify, 3008557491);
	template<> UE_CPP_API UClass* StaticClass<UEndRollNotify>()
	{
		return UEndRollNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndRollNotify(Z_Construct_UClass_UEndRollNotify, &UEndRollNotify::StaticClass, TEXT("/Script/UE_CPP"), TEXT("UEndRollNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndRollNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
