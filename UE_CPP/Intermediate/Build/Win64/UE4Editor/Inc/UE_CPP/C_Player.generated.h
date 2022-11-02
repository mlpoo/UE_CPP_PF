// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_CPP_C_Player_generated_h
#error "C_Player.generated.h already included, missing '#pragma once' in C_Player.h"
#endif
#define UE_CPP_C_Player_generated_h

#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintInventory); \
	DECLARE_FUNCTION(execEnd_Crouch); \
	DECLARE_FUNCTION(execBegin_Crouch); \
	DECLARE_FUNCTION(execEnd_Roll); \
	DECLARE_FUNCTION(execBegin_Roll); \
	DECLARE_FUNCTION(execEnd_Jump); \
	DECLARE_FUNCTION(execBegin_Jump); \
	DECLARE_FUNCTION(execGetAtk); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth);


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintInventory); \
	DECLARE_FUNCTION(execEnd_Crouch); \
	DECLARE_FUNCTION(execBegin_Crouch); \
	DECLARE_FUNCTION(execEnd_Roll); \
	DECLARE_FUNCTION(execBegin_Roll); \
	DECLARE_FUNCTION(execEnd_Jump); \
	DECLARE_FUNCTION(execBegin_Jump); \
	DECLARE_FUNCTION(execGetAtk); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth);


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Player(); \
	friend struct Z_Construct_UClass_AC_Player_Statics; \
public: \
	DECLARE_CLASS(AC_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC_Player)


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAC_Player(); \
	friend struct Z_Construct_UClass_AC_Player_Statics; \
public: \
	DECLARE_CLASS(AC_Player, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC_Player)


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Player(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Player(AC_Player&&); \
	NO_API AC_Player(const AC_Player&); \
public:


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Player(AC_Player&&); \
	NO_API AC_Player(const AC_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Player)


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomSpeed() { return STRUCT_OFFSET(AC_Player, ZoomSpeed); } \
	FORCEINLINE static uint32 __PPO__ZoomRange() { return STRUCT_OFFSET(AC_Player, ZoomRange); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AC_Player, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AC_Player, Camera); }


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_8_PROLOG
#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_INCLASS \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_Player_C_Player_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_Player_C_Player_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_Player_C_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
