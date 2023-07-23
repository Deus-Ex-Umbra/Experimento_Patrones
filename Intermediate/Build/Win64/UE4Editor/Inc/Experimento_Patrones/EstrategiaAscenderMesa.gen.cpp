// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento_Patrones/EstrategiaAscenderMesa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaAscenderMesa() {}
// Cross Module References
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AEstrategiaAscenderMesa_NoRegister();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AEstrategiaAscenderMesa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experimento_Patrones();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_UEstrategiaMesa_NoRegister();
// End Cross Module References
	void AEstrategiaAscenderMesa::StaticRegisterNativesAEstrategiaAscenderMesa()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaAscenderMesa_NoRegister()
	{
		return AEstrategiaAscenderMesa::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaAscenderMesa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento_Patrones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaAscenderMesa.h" },
		{ "ModuleRelativePath", "EstrategiaAscenderMesa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaMesa_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaAscenderMesa, IEstrategiaMesa), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaAscenderMesa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::ClassParams = {
		&AEstrategiaAscenderMesa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaAscenderMesa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaAscenderMesa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaAscenderMesa, 450260329);
	template<> EXPERIMENTO_PATRONES_API UClass* StaticClass<AEstrategiaAscenderMesa>()
	{
		return AEstrategiaAscenderMesa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaAscenderMesa(Z_Construct_UClass_AEstrategiaAscenderMesa, &AEstrategiaAscenderMesa::StaticClass, TEXT("/Script/Experimento_Patrones"), TEXT("AEstrategiaAscenderMesa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaAscenderMesa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
