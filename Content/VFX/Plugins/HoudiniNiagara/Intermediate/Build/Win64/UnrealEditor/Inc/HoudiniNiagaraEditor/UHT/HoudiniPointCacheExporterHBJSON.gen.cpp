// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Private/HoudiniPointCacheExporterHBJSON.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterHBJSON() {}
// Cross Module References
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References
	void UHoudiniPointCacheExporterHBJSON::StaticRegisterNativesUHoudiniPointCacheExporterHBJSON()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCacheExporterHBJSON);
	UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_NoRegister()
	{
		return UHoudiniPointCacheExporterHBJSON::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPointCacheExporterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterHBJSON.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterHBJSON.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterHBJSON>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::ClassParams = {
		&UHoudiniPointCacheExporterHBJSON::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON.OuterSingleton;
	}
	template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheExporterHBJSON>()
	{
		return UHoudiniPointCacheExporterHBJSON::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterHBJSON);
	UHoudiniPointCacheExporterHBJSON::~UHoudiniPointCacheExporterHBJSON() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterHBJSON, UHoudiniPointCacheExporterHBJSON::StaticClass, TEXT("UHoudiniPointCacheExporterHBJSON"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterHBJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterHBJSON), 1734071572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h_4003732559(TEXT("/Script/HoudiniNiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterHBJSON_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
