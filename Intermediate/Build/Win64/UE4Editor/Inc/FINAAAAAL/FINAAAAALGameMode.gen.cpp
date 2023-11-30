// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FINAAAAAL/FINAAAAALGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFINAAAAALGameMode() {}
// Cross Module References
	FINAAAAAL_API UClass* Z_Construct_UClass_AFINAAAAALGameMode_NoRegister();
	FINAAAAAL_API UClass* Z_Construct_UClass_AFINAAAAALGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FINAAAAAL();
	FINAAAAAL_API UClass* Z_Construct_UClass_ASol_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFINAAAAALGameMode::execDestruirSol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestruirSol();
		P_NATIVE_END;
	}
	void AFINAAAAALGameMode::StaticRegisterNativesAFINAAAAALGameMode()
	{
		UClass* Class = AFINAAAAALGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestruirSol", &AFINAAAAALGameMode::execDestruirSol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FINAAAAALGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFINAAAAALGameMode, nullptr, "DestruirSol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFINAAAAALGameMode_NoRegister()
	{
		return AFINAAAAALGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFINAAAAALGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolDestruir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SolDestruir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFINAAAAALGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FINAAAAAL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFINAAAAALGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFINAAAAALGameMode_DestruirSol, "DestruirSol" }, // 413467569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFINAAAAALGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FINAAAAALGameMode.h" },
		{ "ModuleRelativePath", "FINAAAAALGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFINAAAAALGameMode_Statics::NewProp_SolDestruir_MetaData[] = {
		{ "Category", "FINAAAAALGameMode" },
		{ "ModuleRelativePath", "FINAAAAALGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFINAAAAALGameMode_Statics::NewProp_SolDestruir = { "SolDestruir", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFINAAAAALGameMode, SolDestruir), Z_Construct_UClass_ASol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFINAAAAALGameMode_Statics::NewProp_SolDestruir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFINAAAAALGameMode_Statics::NewProp_SolDestruir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFINAAAAALGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFINAAAAALGameMode_Statics::NewProp_SolDestruir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFINAAAAALGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFINAAAAALGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFINAAAAALGameMode_Statics::ClassParams = {
		&AFINAAAAALGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFINAAAAALGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFINAAAAALGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFINAAAAALGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFINAAAAALGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFINAAAAALGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFINAAAAALGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFINAAAAALGameMode, 3378681228);
	template<> FINAAAAAL_API UClass* StaticClass<AFINAAAAALGameMode>()
	{
		return AFINAAAAALGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFINAAAAALGameMode(Z_Construct_UClass_AFINAAAAALGameMode, &AFINAAAAALGameMode::StaticClass, TEXT("/Script/FINAAAAAL"), TEXT("AFINAAAAALGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFINAAAAALGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
