// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Private/HoudiniPointCacheExporterHCSV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterHCSV() {}
// Cross Module References
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References
	void UHoudiniPointCacheExporterHCSV::StaticRegisterNativesUHoudiniPointCacheExporterHCSV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCacheExporterHCSV);
	UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_NoRegister()
	{
		return UHoudiniPointCacheExporterHCSV::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPointCacheExporterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterHCSV.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterHCSV.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterHCSV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::ClassParams = {
		&UHoudiniPointCacheExporterHCSV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHCSV()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterHCSV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV.OuterSingleton;
	}
	template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheExporterHCSV>()
	{
		return UHoudiniPointCacheExporterHCSV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterHCSV);
	UHoudiniPointCacheExporterHCSV::~UHoudiniPointCacheExporterHCSV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterHCSV, UHoudiniPointCacheExporterHCSV::StaticClass, TEXT("UHoudiniPointCacheExporterHCSV"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterHCSV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterHCSV), 1577413663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_2530370847(TEXT("/Script/HoudiniNiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHCSV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
