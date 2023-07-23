// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento_Patrones/MesaRedonda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMesaRedonda() {}
// Cross Module References
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AMesaRedonda_NoRegister();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AMesaRedonda();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AMesa();
	UPackage* Z_Construct_UPackage__Script_Experimento_Patrones();
// End Cross Module References
	void AMesaRedonda::StaticRegisterNativesAMesaRedonda()
	{
	}
	UClass* Z_Construct_UClass_AMesaRedonda_NoRegister()
	{
		return AMesaRedonda::StaticClass();
	}
	struct Z_Construct_UClass_AMesaRedonda_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMesaRedonda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMesa,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento_Patrones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMesaRedonda_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MesaRedonda.h" },
		{ "ModuleRelativePath", "MesaRedonda.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMesaRedonda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMesaRedonda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMesaRedonda_Statics::ClassParams = {
		&AMesaRedonda::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMesaRedonda_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMesaRedonda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMesaRedonda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMesaRedonda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMesaRedonda, 8686377);
	template<> EXPERIMENTO_PATRONES_API UClass* StaticClass<AMesaRedonda>()
	{
		return AMesaRedonda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMesaRedonda(Z_Construct_UClass_AMesaRedonda, &AMesaRedonda::StaticClass, TEXT("/Script/Experimento_Patrones"), TEXT("AMesaRedonda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMesaRedonda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
