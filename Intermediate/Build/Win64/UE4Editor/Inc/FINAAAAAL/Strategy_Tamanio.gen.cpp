// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINAAAAAL/Strategy_Tamanio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategy_Tamanio() {}
// Cross Module References
	FINAAAAAL_API UClass* Z_Construct_UClass_AStrategy_Tamanio_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_AStrategy_Tamanio();
	FINAAAAAL_API UClass* Z_Construct_UClass_ASol();
	UPackage* Z_Construct_UPackage__Script_FINAAAAAL();
	FINAAAAAL_API UClass* Z_Construct_UClass_UMovimiento_Aleatorio_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_ASol_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	FINAAAAAL_API UClass* Z_Construct_UClass_UStrategy_Interface_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_UObserver_Suscriptor_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_UObserver_Transformacion_NoRegister();
// End Cross Module References
	void AStrategy_Tamanio::StaticRegisterNativesAStrategy_Tamanio()
	{
	}
	UClass* Z_Construct_UClass_AStrategy_Tamanio_NoRegister()
	{
		return AStrategy_Tamanio::StaticClass();
	}
	struct Z_Construct_UClass_AStrategy_Tamanio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movimiento_Aleatorio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movimiento_Aleatorio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolTamanio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SolTamanio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategy_Tamanio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASol,
		(UObject* (*)())Z_Construct_UPackage__Script_FINAAAAAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Tamanio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Strategy_Tamanio.h" },
		{ "ModuleRelativePath", "Strategy_Tamanio.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_Movimiento_Aleatorio_MetaData[] = {
		{ "Category", "Strategy_Tamanio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Strategy_Tamanio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_Movimiento_Aleatorio = { "Movimiento_Aleatorio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrategy_Tamanio, Movimiento_Aleatorio), Z_Construct_UClass_UMovimiento_Aleatorio_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_Movimiento_Aleatorio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_Movimiento_Aleatorio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_SolTamanio_MetaData[] = {
		{ "ModuleRelativePath", "Strategy_Tamanio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_SolTamanio = { "SolTamanio", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrategy_Tamanio, SolTamanio), Z_Construct_UClass_ASol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_SolTamanio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_SolTamanio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "Category", "Strategy" },
		{ "ModuleRelativePath", "Strategy_Tamanio.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrategy_Tamanio, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_TimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrategy_Tamanio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_Movimiento_Aleatorio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_SolTamanio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategy_Tamanio_Statics::NewProp_TimerHandle,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategy_Tamanio_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategy_Interface_NoRegister, (int32)VTABLE_OFFSET(AStrategy_Tamanio, IStrategy_Interface), false },
			{ Z_Construct_UClass_UObserver_Suscriptor_NoRegister, (int32)VTABLE_OFFSET(AStrategy_Tamanio, IObserver_Suscriptor), false },
			{ Z_Construct_UClass_UObserver_Transformacion_NoRegister, (int32)VTABLE_OFFSET(AStrategy_Tamanio, IObserver_Transformacion), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategy_Tamanio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategy_Tamanio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategy_Tamanio_Statics::ClassParams = {
		&AStrategy_Tamanio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStrategy_Tamanio_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Tamanio_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategy_Tamanio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Tamanio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategy_Tamanio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategy_Tamanio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategy_Tamanio, 213667532);
	template<> FINAAAAAL_API UClass* StaticClass<AStrategy_Tamanio>()
	{
		return AStrategy_Tamanio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategy_Tamanio(Z_Construct_UClass_AStrategy_Tamanio, &AStrategy_Tamanio::StaticClass, TEXT("/Script/FINAAAAAL"), TEXT("AStrategy_Tamanio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategy_Tamanio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
