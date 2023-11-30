// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINAAAAAL/Strategy_Forma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategy_Forma() {}
// Cross Module References
	FINAAAAAL_API UClass* Z_Construct_UClass_AStrategy_Forma_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_AStrategy_Forma();
	FINAAAAAL_API UClass* Z_Construct_UClass_ASol();
	UPackage* Z_Construct_UPackage__Script_FINAAAAAL();
	FINAAAAAL_API UClass* Z_Construct_UClass_ASol_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	FINAAAAAL_API UClass* Z_Construct_UClass_UStrategy_Interface_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_UObserver_Suscriptor_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_UObserver_Transformacion_NoRegister();
// End Cross Module References
	void AStrategy_Forma::StaticRegisterNativesAStrategy_Forma()
	{
	}
	UClass* Z_Construct_UClass_AStrategy_Forma_NoRegister()
	{
		return AStrategy_Forma::StaticClass();
	}
	struct Z_Construct_UClass_AStrategy_Forma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolForma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SolForma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategy_Forma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASol,
		(UObject* (*)())Z_Construct_UPackage__Script_FINAAAAAL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Forma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Strategy_Forma.h" },
		{ "ModuleRelativePath", "Strategy_Forma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_SolForma_MetaData[] = {
		{ "ModuleRelativePath", "Strategy_Forma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_SolForma = { "SolForma", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrategy_Forma, SolForma), Z_Construct_UClass_ASol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_SolForma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_SolForma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "Category", "Strategy" },
		{ "ModuleRelativePath", "Strategy_Forma.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStrategy_Forma, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_TimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrategy_Forma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_SolForma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategy_Forma_Statics::NewProp_TimerHandle,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategy_Forma_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStrategy_Interface_NoRegister, (int32)VTABLE_OFFSET(AStrategy_Forma, IStrategy_Interface), false },
			{ Z_Construct_UClass_UObserver_Suscriptor_NoRegister, (int32)VTABLE_OFFSET(AStrategy_Forma, IObserver_Suscriptor), false },
			{ Z_Construct_UClass_UObserver_Transformacion_NoRegister, (int32)VTABLE_OFFSET(AStrategy_Forma, IObserver_Transformacion), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategy_Forma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategy_Forma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategy_Forma_Statics::ClassParams = {
		&AStrategy_Forma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStrategy_Forma_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Forma_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategy_Forma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategy_Forma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategy_Forma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategy_Forma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategy_Forma, 2950737920);
	template<> FINAAAAAL_API UClass* StaticClass<AStrategy_Forma>()
	{
		return AStrategy_Forma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategy_Forma(Z_Construct_UClass_AStrategy_Forma, &AStrategy_Forma::StaticClass, TEXT("/Script/FINAAAAAL"), TEXT("AStrategy_Forma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategy_Forma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
