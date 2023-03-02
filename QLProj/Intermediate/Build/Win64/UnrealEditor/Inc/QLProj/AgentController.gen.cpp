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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WayPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WayPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WayPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints_Inner = { "WayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//All WayPoints that exist in the Environment\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "All WayPoints that exist in the Environment" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints = { "WayPoints", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, WayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgentController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_WayPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgentController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAgentController_Statics::ClassParams = {
		&AAgentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAgentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::PropPointers),
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
		{ Z_Construct_UClass_AAgentController, AAgentController::StaticClass, TEXT("AAgentController"), &Z_Registration_Info_UClass_AAgentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgentController), 3348873275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_4104372833(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
