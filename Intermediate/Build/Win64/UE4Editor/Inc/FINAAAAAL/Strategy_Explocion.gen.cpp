// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINAAAAAL/Strategy_Explocion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategy_Explocion() {}
// Cross Module References
	FINAAAAAL_API UClass* Z_Construct_UClass_AStrategy_Explocion_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_AStrategy_Explocion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FINAAAAAL();
// End Cross Module References
	void AStrategy_Explocion::StaticRegisterNativesAStrategy_Explocion()
	{
	}
	UClass* Z_Construct_UClass_AStrategy_Explocion_NoRegister()
	{
		return AStrategy_Explocion::StaticClass();
	}
	struct Z_Construct_UClass_AStrategy_Explocion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategy_Explocion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FINAAAAAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Explocion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Strategy_Explocion.h" },
		{ "ModuleRelativePath", "Strategy_Explocion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategy_Explocion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategy_Explocion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategy_Explocion_Statics::ClassParams = {
		&AStrategy_Explocion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategy_Explocion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Explocion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategy_Explocion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategy_Explocion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategy_Explocion, 1362431481);
	template<> FINAAAAAL_API UClass* StaticClass<AStrategy_Explocion>()
	{
		return AStrategy_Explocion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategy_Explocion(Z_Construct_UClass_AStrategy_Explocion, &AStrategy_Explocion::StaticClass, TEXT("/Script/FINAAAAAL"), TEXT("AStrategy_Explocion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategy_Explocion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
