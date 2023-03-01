// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLProj/Public/AgentController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentController() {}
// Cross Module References
	QLPROJ_API UClass* Z_Construct_UClass_AAgentController_NoRegister();
	QLPROJ_API UClass* Z_Construct_UClass_AAgentController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_QLProj();
// End Cross Module References
	void AAgentController::StaticRegisterNativesAAgentController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAgentController);
	UClass* Z_Construct_UClass_AAgentController_NoRegister()
	{
		return AAgentController::StaticClass();
	}
	struct Z_Construct_UClass_AAgentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_QLProj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AgentController.h" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgentController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAgentController_Statics::ClassParams = {
		&AAgentController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgentController()
	{
		if (!Z_Registration_Info_UClass_AAgentController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAgentController.OuterSingleton, Z_Construct_UClass_AAgentController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAgentController.OuterSingleton;
	}
	template<> QLPROJ_API UClass* StaticClass<AAgentController>()
	{
		return AAgentController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgentController);
	struct Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAgentController, AAgentController::StaticClass, TEXT("AAgentController"), &Z_Registration_Info_UClass_AAgentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgentController), 250708051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_1532226536(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
