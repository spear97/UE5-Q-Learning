// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearningSimulation/QLearningSimulationGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQLearningSimulationGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	QLEARNINGSIMULATION_API UClass* Z_Construct_UClass_AQLearningSimulationGameMode();
	QLEARNINGSIMULATION_API UClass* Z_Construct_UClass_AQLearningSimulationGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QLearningSimulation();
// End Cross Module References
	void AQLearningSimulationGameMode::StaticRegisterNativesAQLearningSimulationGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQLearningSimulationGameMode);
	UClass* Z_Construct_UClass_AQLearningSimulationGameMode_NoRegister()
	{
		return AQLearningSimulationGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AQLearningSimulationGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQLearningSimulationGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QLearningSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQLearningSimulationGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQLearningSimulationGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QLearningSimulationGameMode.h" },
		{ "ModuleRelativePath", "QLearningSimulationGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQLearningSimulationGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQLearningSimulationGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQLearningSimulationGameMode_Statics::ClassParams = {
		&AQLearningSimulationGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQLearningSimulationGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AQLearningSimulationGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AQLearningSimulationGameMode()
	{
		if (!Z_Registration_Info_UClass_AQLearningSimulationGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQLearningSimulationGameMode.OuterSingleton, Z_Construct_UClass_AQLearningSimulationGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQLearningSimulationGameMode.OuterSingleton;
	}
	template<> QLEARNINGSIMULATION_API UClass* StaticClass<AQLearningSimulationGameMode>()
	{
		return AQLearningSimulationGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQLearningSimulationGameMode);
	AQLearningSimulationGameMode::~AQLearningSimulationGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_QLearningSimulationGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_QLearningSimulationGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQLearningSimulationGameMode, AQLearningSimulationGameMode::StaticClass, TEXT("AQLearningSimulationGameMode"), &Z_Registration_Info_UClass_AQLearningSimulationGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQLearningSimulationGameMode), 2923676938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_QLearningSimulationGameMode_h_1786065069(TEXT("/Script/QLearningSimulation"),
		Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_QLearningSimulationGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_UE5_Q_Learning_QLearningSimulation_Source_QLearningSimulation_QLearningSimulationGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
