// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_CPP_PlayerAnim_generated_h
#error "PlayerAnim.generated.h already included, missing '#pragma once' in PlayerAnim.h"
#endif
#define UE_CPP_PlayerAnim_generated_h

#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_RPC_WRAPPERS
#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnim(); \
	friend struct Z_Construct_UClass_UPlayerAnim_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnim)


#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnim(); \
	friend struct Z_Construct_UClass_UPlayerAnim_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnim)


#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnim(UPlayerAnim&&); \
	NO_API UPlayerAnim(const UPlayerAnim&); \
public:


#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnim(UPlayerAnim&&); \
	NO_API UPlayerAnim(const UPlayerAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnim)


#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UPlayerAnim, Speed); } \
	FORCEINLINE static uint32 __PPO__bRolled() { return STRUCT_OFFSET(UPlayerAnim, bRolled); } \
	FORCEINLINE static uint32 __PPO__bCrouched() { return STRUCT_OFFSET(UPlayerAnim, bCrouched); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UPlayerAnim, Direction); } \
	FORCEINLINE static uint32 __PPO__Pitch() { return STRUCT_OFFSET(UPlayerAnim, Pitch); } \
	FORCEINLINE static uint32 __PPO__bIsInAir() { return STRUCT_OFFSET(UPlayerAnim, bIsInAir); }


#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_INCLASS \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_Player_PlayerAnim_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class UPlayerAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_Player_PlayerAnim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
