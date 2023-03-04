// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLProj/Public/Agent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgent() {}
// Cross Module References
	QLPROJ_API UClass* Z_Construct_UClass_AAgent_NoRegister();
	QLPROJ_API UClass* Z_Construct_UClass_AAgent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_QLProj();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AAgent::StaticRegisterNativesAAgent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAgent);
	UClass* Z_Construct_UClass_AAgent_NoRegister()
	{
		return AAgent::StaticClass();
	}
	struct Z_Construct_UClass_AAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_QLProj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Agent.h" },
		{ "ModuleRelativePath", "Public/Agent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "/**************Variables that will get set in Blueprint**************/" },
		{ "ModuleRelativePath", "Public/Agent.h" },
		{ "ToolTip", "***********Variables that will get set in Blueprint*************" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAgent_Statics::ClassParams = {
		&AAgent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAgent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgent()
	{
		if (!Z_Registration_Info_UClass_AAgent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAgent.OuterSingleton, Z_Construct_UClass_AAgent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAgent.OuterSingleton;
	}
	template<> QLPROJ_API UClass* StaticClass<AAgent>()
	{
		return AAgent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgent);
	struct Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAgent, AAgent::StaticClass, TEXT("AAgent"), &Z_Registration_Info_UClass_AAgent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgent), 2454038366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_1333917115(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
