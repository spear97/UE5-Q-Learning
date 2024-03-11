// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearningSimulation/Goal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	QLEARNINGSIMULATION_API UClass* Z_Construct_UClass_AGoal();
	QLEARNINGSIMULATION_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QLearningSimulation();
// End Cross Module References
	void AGoal::StaticRegisterNativesAGoal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoal);
	UClass* Z_Construct_UClass_AGoal_NoRegister()
	{
		return AGoal::StaticClass();
	}
	struct Z_Construct_UClass_AGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QLearningSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Goal.h" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoal_Statics::ClassParams = {
		&AGoal::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGoal()
	{
		if (!Z_Registration_Info_UClass_AGoal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoal.OuterSingleton, Z_Construct_UClass_AGoal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoal.OuterSingleton;
	}
	template<> QLEARNINGSIMULATION_API UClass* StaticClass<AGoal>()
	{
		return AGoal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoal);
	AGoal::~AGoal() {}
	struct Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_Goal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_Goal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoal, AGoal::StaticClass, TEXT("AGoal"), &Z_Registration_Info_UClass_AGoal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoal), 3386892941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_Goal_h_893437542(TEXT("/Script/QLearningSimulation"),
		Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_Goal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_Goal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
