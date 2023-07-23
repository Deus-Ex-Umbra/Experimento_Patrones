// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimento_Patrones/Experimento_PatronesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimento_PatronesGameModeBase() {}
// Cross Module References
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AExperimento_PatronesGameModeBase_NoRegister();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AExperimento_PatronesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Experimento_Patrones();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AMesa_NoRegister();
	EXPERIMENTO_PATRONES_API UClass* Z_Construct_UClass_AFabricaDeMesa_NoRegister();
// End Cross Module References
	void AExperimento_PatronesGameModeBase::StaticRegisterNativesAExperimento_PatronesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AExperimento_PatronesGameModeBase_NoRegister()
	{
		return AExperimento_PatronesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesa_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesa;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FabricaMesa_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FabricaMesa;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Experimento_Patrones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Experimento_PatronesGameModeBase.h" },
		{ "ModuleRelativePath", "Experimento_PatronesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_Mesa_MetaData[] = {
		{ "ModuleRelativePath", "Experimento_PatronesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_Mesa = { "Mesa", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExperimento_PatronesGameModeBase, Mesa), Z_Construct_UClass_AMesa_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_Mesa_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_Mesa_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_FabricaMesa_MetaData[] = {
		{ "ModuleRelativePath", "Experimento_PatronesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_FabricaMesa = { "FabricaMesa", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExperimento_PatronesGameModeBase, FabricaMesa), Z_Construct_UClass_AFabricaDeMesa_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_FabricaMesa_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_FabricaMesa_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_Mesa,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::NewProp_FabricaMesa,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperimento_PatronesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::ClassParams = {
		&AExperimento_PatronesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExperimento_PatronesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExperimento_PatronesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExperimento_PatronesGameModeBase, 2866619280);
	template<> EXPERIMENTO_PATRONES_API UClass* StaticClass<AExperimento_PatronesGameModeBase>()
	{
		return AExperimento_PatronesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExperimento_PatronesGameModeBase(Z_Construct_UClass_AExperimento_PatronesGameModeBase, &AExperimento_PatronesGameModeBase::StaticClass, TEXT("/Script/Experimento_Patrones"), TEXT("AExperimento_PatronesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperimento_PatronesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
