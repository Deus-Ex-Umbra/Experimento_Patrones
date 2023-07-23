// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento_Patrones/EstrategiaMesa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMesa() {}
// Cross Module References
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_UEstrategiaMesa_NoRegister();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_UEstrategiaMesa();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Experimento_Patrones();
// End Cross Module References
	void UEstrategiaMesa::StaticRegisterNativesUEstrategiaMesa()
	{
	}
	UClass* Z_Construct_UClass_UEstrategiaMesa_NoRegister()
	{
		return UEstrategiaMesa::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategiaMesa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategiaMesa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento_Patrones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategiaMesa_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstrategiaMesa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategiaMesa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategiaMesa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategiaMesa_Statics::ClassParams = {
		&UEstrategiaMesa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstrategiaMesa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategiaMesa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategiaMesa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategiaMesa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategiaMesa, 3226772126);
	template<> EXPERIMENTO_PATRONES_API UClass* StaticClass<UEstrategiaMesa>()
	{
		return UEstrategiaMesa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategiaMesa(Z_Construct_UClass_UEstrategiaMesa, &UEstrategiaMesa::StaticClass, TEXT("/Script/Experimento_Patrones"), TEXT("UEstrategiaMesa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategiaMesa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
