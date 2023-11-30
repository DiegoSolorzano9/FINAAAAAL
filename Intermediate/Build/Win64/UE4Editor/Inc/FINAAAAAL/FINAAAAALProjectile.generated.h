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
struct FVector;
struct FHitResult;
#ifdef FINAAAAAL_FINAAAAALProjectile_generated_h
#error "FINAAAAALProjectile.generated.h already included, missing '#pragma once' in FINAAAAALProjectile.h"
#endif
#define FINAAAAAL_FINAAAAALProjectile_generated_h

#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_SPARSE_DATA
#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFINAAAAALProjectile(); \
	friend struct Z_Construct_UClass_AFINAAAAALProjectile_Statics; \
public: \
	DECLARE_CLASS(AFINAAAAALProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINAAAAAL"), NO_API) \
	DECLARE_SERIALIZER(AFINAAAAALProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFINAAAAALProjectile(); \
	friend struct Z_Construct_UClass_AFINAAAAALProjectile_Statics; \
public: \
	DECLARE_CLASS(AFINAAAAALProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FINAAAAAL"), NO_API) \
	DECLARE_SERIALIZER(AFINAAAAALProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFINAAAAALProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFINAAAAALProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFINAAAAALProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFINAAAAALProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFINAAAAALProjectile(AFINAAAAALProjectile&&); \
	NO_API AFINAAAAALProjectile(const AFINAAAAALProjectile&); \
public:


#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFINAAAAALProjectile(AFINAAAAALProjectile&&); \
	NO_API AFINAAAAALProjectile(const AFINAAAAALProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFINAAAAALProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFINAAAAALProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFINAAAAALProjectile)


#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFINAAAAALProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFINAAAAALProjectile, ProjectileMovement); }


#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_12_PROLOG
#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_SPARSE_DATA \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_RPC_WRAPPERS \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_INCLASS \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_SPARSE_DATA \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAAAAAL_API UClass* StaticClass<class AFINAAAAALProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FINAAAAAL_Source_FINAAAAAL_FINAAAAALProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
