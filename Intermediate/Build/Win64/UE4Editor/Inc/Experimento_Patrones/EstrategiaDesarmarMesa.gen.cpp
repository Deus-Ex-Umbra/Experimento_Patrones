// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento_Patrones/EstrategiaDesarmarMesa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaDesarmarMesa() {}
// Cross Module References
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AEstrategiaDesarmarMesa_NoRegister();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AEstrategiaDesarmarMesa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimento_Patrones();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_UEstrategiaMesa_NoRegister();
// End Cross Module References
	void AEstrategiaDesarmarMesa::StaticRegisterNativesAEstrategiaDesarmarMesa()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaDesarmarMesa_NoRegister()
	{
		return AEstrategiaDesarmarMesa::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento_Patrones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaDesarmarMesa.h" },
		{ "ModuleRelativePath", "EstrategiaDesarmarMesa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaMesa_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaDesarmarMesa, IEstrategiaMesa), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaDesarmarMesa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::ClassParams = {
		&AEstrategiaDesarmarMesa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaDesarmarMesa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaDesarmarMesa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaDesarmarMesa, 1172852315);
	template<> EXPERIMENTO_PATRONES_API UClass* StaticClass<AEstrategiaDesarmarMesa>()
	{
		return AEstrategiaDesarmarMesa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaDesarmarMesa(Z_Construct_UClass_AEstrategiaDesarmarMesa, &AEstrategiaDesarmarMesa::StaticClass, TEXT("/Script/Experimento_Patrones"), TEXT("AEstrategiaDesarmarMesa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaDesarmarMesa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
