// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UE_CPP_C_Item_generated_h
#error "C_Item.generated.h already included, missing '#pragma once' in C_Item.h"
#endif
#define UE_CPP_C_Item_generated_h

#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_SPARSE_DATA
#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Item(); \
	friend struct Z_Construct_UClass_AC_Item_Statics; \
public: \
	DECLARE_CLASS(AC_Item, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC_Item)


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAC_Item(); \
	friend struct Z_Construct_UClass_AC_Item_Statics; \
public: \
	DECLARE_CLASS(AC_Item, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP"), NO_API) \
	DECLARE_SERIALIZER(AC_Item)


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Item(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Item) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Item); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Item); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Item(AC_Item&&); \
	NO_API AC_Item(const AC_Item&); \
public:


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Item(AC_Item&&); \
	NO_API AC_Item(const AC_Item&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Item); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Item); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Item)


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_PRIVATE_PROPERTY_OFFSET
#define UE_CPP_Source_UE_CPP_Item_C_Item_h_7_PROLOG
#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_RPC_WRAPPERS \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_INCLASS \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Source_UE_CPP_Item_C_Item_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_SPARSE_DATA \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_INCLASS_NO_PURE_DECLS \
	UE_CPP_Source_UE_CPP_Item_C_Item_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_API UClass* StaticClass<class AC_Item>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Source_UE_CPP_Item_C_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
