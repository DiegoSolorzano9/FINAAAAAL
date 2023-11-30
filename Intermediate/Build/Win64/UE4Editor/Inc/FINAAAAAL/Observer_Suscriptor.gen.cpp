// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINAAAAAL/Observer_Suscriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver_Suscriptor() {}
// Cross Module References
	FINAAAAAL_API UClass* Z_Construct_UClass_UObserver_Suscriptor_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_UObserver_Suscriptor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FINAAAAAL();
// End Cross Module References
	void UObserver_Suscriptor::StaticRegisterNativesUObserver_Suscriptor()
	{
	}
	UClass* Z_Construct_UClass_UObserver_Suscriptor_NoRegister()
	{
		return UObserver_Suscriptor::StaticClass();
	}
	struct Z_Construct_UClass_UObserver_Suscriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObserver_Suscriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FINAAAAAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObserver_Suscriptor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Observer_Suscriptor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObserver_Suscriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObserver_Suscriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObserver_Suscriptor_Statics::ClassParams = {
		&UObserver_Suscriptor::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UObserver_Suscriptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObserver_Suscriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObserver_Suscriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObserver_Suscriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObserver_Suscriptor, 1649992149);
	template<> FINAAAAAL_API UClass* StaticClass<UObserver_Suscriptor>()
	{
		return UObserver_Suscriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObserver_Suscriptor(Z_Construct_UClass_UObserver_Suscriptor, &UObserver_Suscriptor::StaticClass, TEXT("/Script/FINAAAAAL"), TEXT("UObserver_Suscriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObserver_Suscriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
