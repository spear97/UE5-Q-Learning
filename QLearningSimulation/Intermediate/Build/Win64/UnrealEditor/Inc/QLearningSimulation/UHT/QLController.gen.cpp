// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLearningSimulation/QLController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQLController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QLEARNINGSIMULATION_API UClass* Z_Construct_UClass_AQLController();
	QLEARNINGSIMULATION_API UClass* Z_Construct_UClass_AQLController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QLearningSimulation();
// End Cross Module References
	DEFINE_FUNCTION(AQLController::execCalculateFeedback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateFeedback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQLController::execGetReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQLController::execPerformActon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformActon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQLController::execGetStateandAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStateandAction();
		P_NATIVE_END;
	}
	void AQLController::StaticRegisterNativesAQLController()
	{
		UClass* Class = AQLController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateFeedback", &AQLController::execCalculateFeedback },
			{ "GetReward", &AQLController::execGetReward },
			{ "GetStateandAction", &AQLController::execGetStateandAction },
			{ "PerformActon", &AQLController::execPerformActon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQLController_CalculateFeedback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQLController_CalculateFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "QLController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQLController_CalculateFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQLController, nullptr, "CalculateFeedback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQLController_CalculateFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQLController_CalculateFeedback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AQLController_CalculateFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQLController_CalculateFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQLController_GetReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQLController_GetReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "QLController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQLController_GetReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQLController, nullptr, "GetReward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQLController_GetReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQLController_GetReward_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AQLController_GetReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQLController_GetReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQLController_GetStateandAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQLController_GetStateandAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Q-Learning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////PUBLIC FUNCTIONS//////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "QLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PUBLIC FUNCTIONS" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQLController_GetStateandAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQLController, nullptr, "GetStateandAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQLController_GetStateandAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQLController_GetStateandAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AQLController_GetStateandAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQLController_GetStateandAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQLController_PerformActon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQLController_PerformActon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Q-Learning" },
		{ "ModuleRelativePath", "QLController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQLController_PerformActon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQLController, nullptr, "PerformActon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQLController_PerformActon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQLController_PerformActon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AQLController_PerformActon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQLController_PerformActon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQLController);
	UClass* Z_Construct_UClass_AQLController_NoRegister()
	{
		return AQLController::StaticClass();
	}
	struct Z_Construct_UClass_AQLController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQLController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_QLearningSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQLController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AQLController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQLController_CalculateFeedback, "CalculateFeedback" }, // 153373524
		{ &Z_Construct_UFunction_AQLController_GetReward, "GetReward" }, // 2229536484
		{ &Z_Construct_UFunction_AQLController_GetStateandAction, "GetStateandAction" }, // 3604792674
		{ &Z_Construct_UFunction_AQLController_PerformActon, "PerformActon" }, // 1156375543
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQLController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQLController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "QLController.h" },
		{ "ModuleRelativePath", "QLController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQLController_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "Q-Learning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////PUBLIC VARIALES//////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "QLController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PUBLIC VARIALES" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQLController_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQLController, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQLController_Statics::NewProp_Goal_MetaData), Z_Construct_UClass_AQLController_Statics::NewProp_Goal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQLController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQLController_Statics::NewProp_Goal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQLController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQLController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQLController_Statics::ClassParams = {
		&AQLController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQLController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQLController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQLController_Statics::Class_MetaDataParams), Z_Construct_UClass_AQLController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQLController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AQLController()
	{
		if (!Z_Registration_Info_UClass_AQLController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQLController.OuterSingleton, Z_Construct_UClass_AQLController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQLController.OuterSingleton;
	}
	template<> QLEARNINGSIMULATION_API UClass* StaticClass<AQLController>()
	{
		return AQLController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQLController);
	AQLController::~AQLController() {}
	struct Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_QLearningSimulation_Source_QLearningSimulation_QLController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_QLearningSimulation_Source_QLearningSimulation_QLController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQLController, AQLController::StaticClass, TEXT("AQLController"), &Z_Registration_Info_UClass_AQLController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQLController), 3676934275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_QLearningSimulation_Source_QLearningSimulation_QLController_h_160476363(TEXT("/Script/QLearningSimulation"),
		Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_QLearningSimulation_Source_QLearningSimulation_QLController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seanp_Documents_Github_QLearningSimulation_Source_QLearningSimulation_QLController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
