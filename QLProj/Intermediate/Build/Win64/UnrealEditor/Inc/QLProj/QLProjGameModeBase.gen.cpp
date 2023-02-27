// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLProj/QLProjGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQLProjGameModeBase() {}
// Cross Module References
	QLPROJ_API UClass* Z_Construct_UClass_AQLProjGameModeBase_NoRegister();
	QLPROJ_API UClass* Z_Construct_UClass_AQLProjGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_QLProj();
// End Cross Module References
	void AQLProjGameModeBase::StaticRegisterNativesAQLProjGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQLProjGameModeBase);
	UClass* Z_Construct_UClass_AQLProjGameModeBase_NoRegister()
	{
		return AQLProjGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AQLProjGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQLProjGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QLProj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQLProjGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QLProjGameModeBase.h" },
		{ "ModuleRelativePath", "QLProjGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQLProjGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQLProjGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQLProjGameModeBase_Statics::ClassParams = {
		&AQLProjGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AQLProjGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQLProjGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQLProjGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AQLProjGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQLProjGameModeBase.OuterSingleton, Z_Construct_UClass_AQLProjGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQLProjGameModeBase.OuterSingleton;
	}
	template<> QLPROJ_API UClass* StaticClass<AQLProjGameModeBase>()
	{
		return AQLProjGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQLProjGameModeBase);
	struct Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_QLProjGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_QLProjGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQLProjGameModeBase, AQLProjGameModeBase::StaticClass, TEXT("AQLProjGameModeBase"), &Z_Registration_Info_UClass_AQLProjGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQLProjGameModeBase), 399350654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_QLProjGameModeBase_h_1480788569(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_QLProjGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_QLProjGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
