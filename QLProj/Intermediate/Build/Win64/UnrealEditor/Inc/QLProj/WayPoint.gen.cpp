// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QLProj/Public/WayPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWayPoint() {}
// Cross Module References
	QLPROJ_API UClass* Z_Construct_UClass_AWayPoint_NoRegister();
	QLPROJ_API UClass* Z_Construct_UClass_AWayPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_QLProj();
// End Cross Module References
	void AWayPoint::StaticRegisterNativesAWayPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWayPoint);
	UClass* Z_Construct_UClass_AWayPoint_NoRegister()
	{
		return AWayPoint::StaticClass();
	}
	struct Z_Construct_UClass_AWayPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWayPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_QLProj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWayPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WayPoint.h" },
		{ "ModuleRelativePath", "Public/WayPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWayPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWayPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWayPoint_Statics::ClassParams = {
		&AWayPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWayPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWayPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWayPoint()
	{
		if (!Z_Registration_Info_UClass_AWayPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWayPoint.OuterSingleton, Z_Construct_UClass_AWayPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWayPoint.OuterSingleton;
	}
	template<> QLPROJ_API UClass* StaticClass<AWayPoint>()
	{
		return AWayPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWayPoint);
	struct Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_WayPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_WayPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWayPoint, AWayPoint::StaticClass, TEXT("AWayPoint"), &Z_Registration_Info_UClass_AWayPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWayPoint), 2332635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_WayPoint_h_2275470736(TEXT("/Script/QLProj"),
		Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_WayPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QLProj_Source_QLProj_Public_WayPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
