// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Private/HoudiniPointCacheExporterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheExporterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References
	void UHoudiniPointCacheExporterBase::StaticRegisterNativesUHoudiniPointCacheExporterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCacheExporterBase);
	UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase_NoRegister()
	{
		return UHoudiniPointCacheExporterBase::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPointCacheExporterBase.h" },
		{ "ModuleRelativePath", "Private/HoudiniPointCacheExporterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheExporterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::ClassParams = {
		&UHoudiniPointCacheExporterBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniPointCacheExporterBase()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheExporterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase.OuterSingleton;
	}
	template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheExporterBase>()
	{
		return UHoudiniPointCacheExporterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheExporterBase);
	UHoudiniPointCacheExporterBase::~UHoudiniPointCacheExporterBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheExporterBase, UHoudiniPointCacheExporterBase::StaticClass, TEXT("UHoudiniPointCacheExporterBase"), &Z_Registration_Info_UClass_UHoudiniPointCacheExporterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheExporterBase), 575128287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h_466913094(TEXT("/Script/HoudiniNiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Private_HoudiniPointCacheExporterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
