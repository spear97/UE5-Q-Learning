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
	QLPROJ_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_episode_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_episode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_goal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_goal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_episode_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "//The Current Episode that the AI is currently on\n" },
		{ "ModuleRelativePath", "Public/Agent.h" },
		{ "ToolTip", "The Current Episode that the AI is currently on" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_episode = { "episode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, episode), METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_episode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_episode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_alpha_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "//The Learning Rate - How fast the AI Will be able to learn\n" },
		{ "ModuleRelativePath", "Public/Agent.h" },
		{ "ToolTip", "The Learning Rate - How fast the AI Will be able to learn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, alpha), METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_goal_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "//The Actor which the Agent needs to Arrive to\n" },
		{ "ModuleRelativePath", "Public/Agent.h" },
		{ "ToolTip", "The Actor which the Agent needs to Arrive to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_goal = { "goal", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, goal), Z_Construct_UClass_AGoal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_goal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_origin_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "//The Vector Position that the AI Agent Began at\n" },
		{ "ModuleRelativePath", "Public/Agent.h" },
		{ "ToolTip", "The Vector Position that the AI Agent Began at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_origin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_episode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_origin,
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
		{ Z_Construct_UClass_AAgent, AAgent::StaticClass, TEXT("AAgent"), &Z_Registration_Info_UClass_AAgent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgent), 1672992554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_1904812973(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_Agent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
