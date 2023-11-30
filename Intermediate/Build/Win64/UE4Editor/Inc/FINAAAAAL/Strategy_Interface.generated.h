// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINAAAAAL_Strategy_Interface_generated_h
#error "Strategy_Interface.generated.h already included, missing '#pragma once' in Strategy_Interface.h"
#endif
#define FINAAAAAL_Strategy_Interface_generated_h

#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_SPARSE_DATA
#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_RPC_WRAPPERS
#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINAAAAAL_API UStrategy_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategy_Interface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINAAAAAL_API, UStrategy_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategy_Interface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINAAAAAL_API UStrategy_Interface(UStrategy_Interface&&); \
	FINAAAAAL_API UStrategy_Interface(const UStrategy_Interface&); \
public:


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINAAAAAL_API UStrategy_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINAAAAAL_API UStrategy_Interface(UStrategy_Interface&&); \
	FINAAAAAL_API UStrategy_Interface(const UStrategy_Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINAAAAAL_API, UStrategy_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategy_Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategy_Interface)


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStrategy_Interface(); \
	friend struct Z_Construct_UClass_UStrategy_Interface_Statics; \
public: \
	DECLARE_CLASS(UStrategy_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FINAAAAAL"), FINAAAAAL_API) \
	DECLARE_SERIALIZER(UStrategy_Interface)


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_GENERATED_UINTERFACE_BODY() \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_GENERATED_UINTERFACE_BODY() \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStrategy_Interface() {} \
public: \
	typedef UStrategy_Interface UClassType; \
	typedef IStrategy_Interface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStrategy_Interface() {} \
public: \
	typedef UStrategy_Interface UClassType; \
	typedef IStrategy_Interface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_10_PROLOG
#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_SPARSE_DATA \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_RPC_WRAPPERS \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_SPARSE_DATA \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAAAAAL_API UClass* StaticClass<class UStrategy_Interface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FINAAAAAL_Source_FINAAAAAL_Strategy_Interface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
