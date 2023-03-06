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
	DEFINE_FUNCTION(AAgentController::execGetQAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetQAtIndex(Z_Param_i);
		P_NATIVE_END;
	}
	void AAgentController::StaticRegisterNativesAAgentController()
	{
		UClass* Class = AAgentController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQAtIndex", &AAgentController::execGetQAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics
	{
		struct AgentController_eventGetQAtIndex_Parms
		{
			int32 i;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentController_eventGetQAtIndex_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentController_eventGetQAtIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::NewProp_i,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**************Blueprint Functions****************///Get one of the Lists of the Q-Matrix\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "***********Blueprint Functions***************//Get one of the Lists of the Q-Matrix" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAgentController, nullptr, "GetQAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::AgentController_eventGetQAtIndex_Parms), Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAgentController_GetQAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAgentController_GetQAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAgentController);
	UClass* Z_Construct_UClass_AAgentController_NoRegister()
	{
		return AAgentController::StaticClass();
	}
	struct Z_Construct_UClass_AAgentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_s_size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_s_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_size_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_a_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_s_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_s;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_r_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_r;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prevDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_prevDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_QLProj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAgentController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAgentController_GetQAtIndex, "GetQAtIndex" }, // 3305865353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AgentController.h" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_s_size_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "/**************The Initial Variables for the Q-Learning**************///The Number of States for the Matrix\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "***********The Initial Variables for the Q-Learning*************//The Number of States for the Matrix" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_s_size = { "s_size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, s_size), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_s_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_s_size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_a_size_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//The Number of Actions for the Matrix\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "The Number of Actions for the Matrix" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_a_size = { "a_size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, a_size), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_a_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_a_size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_s_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//The Current State that the Agent is currently in\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "The Current State that the Agent is currently in" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, s), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_s_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_s_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_a_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//The Current Action that the Agent is Performing for the Given State\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "The Current Action that the Agent is Performing for the Given State" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, a), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_a_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_a_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_r_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//The Reward for the Action that was given \n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "The Reward for the Action that was given" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_r = { "r", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, r), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_r_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_alpha_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//The Learning Discount for the Policy\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "The Learning Discount for the Policy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, alpha), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_gamma_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "//The Discount Factor for the Policy\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "The Discount Factor for the Policy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_gamma = { "gamma", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, gamma), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_prevDist_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "/***************Action Variables***************///How Far was Agent from Target on Previous Action\n" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "************Action Variables**************//How Far was Agent from Target on Previous Action" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_prevDist = { "prevDist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, prevDist), METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_prevDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_prevDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentController_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AgentController" },
		{ "Comment", "/**************Variables that will get set in Blueprint**************/" },
		{ "ModuleRelativePath", "Public/AgentController.h" },
		{ "ToolTip", "***********Variables that will get set in Blueprint*************" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgentController_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentController, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgentController_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentController_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgentController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_s_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_a_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_r,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_prevDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentController_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgentController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAgentController_Statics::ClassParams = {
		&AAgentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAgentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AAgentController, AAgentController::StaticClass, TEXT("AAgentController"), &Z_Registration_Info_UClass_AAgentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgentController), 3838723328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_221218731(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_AgentController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
