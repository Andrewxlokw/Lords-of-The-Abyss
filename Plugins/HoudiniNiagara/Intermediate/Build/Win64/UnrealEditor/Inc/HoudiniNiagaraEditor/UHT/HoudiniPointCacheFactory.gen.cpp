// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagaraEditor/Public/HoudiniPointCacheFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCacheFactory() {}
// Cross Module References
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheFactory();
	HOUDININIAGARAEDITOR_API UClass* Z_Construct_UClass_UHoudiniPointCacheFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagaraEditor();
// End Cross Module References
	void UHoudiniPointCacheFactory::StaticRegisterNativesUHoudiniPointCacheFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCacheFactory);
	UClass* Z_Construct_UClass_UHoudiniPointCacheFactory_NoRegister()
	{
		return UHoudiniPointCacheFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCacheFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A factory for HoudiniPointCache assets. */" },
#endif
		{ "IncludePath", "HoudiniPointCacheFactory.h" },
		{ "ModuleRelativePath", "Public/HoudiniPointCacheFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A factory for HoudiniPointCache assets." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCacheFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::ClassParams = {
		&UHoudiniPointCacheFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHoudiniPointCacheFactory()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPointCacheFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCacheFactory.OuterSingleton, Z_Construct_UClass_UHoudiniPointCacheFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPointCacheFactory.OuterSingleton;
	}
	template<> HOUDININIAGARAEDITOR_API UClass* StaticClass<UHoudiniPointCacheFactory>()
	{
		return UHoudiniPointCacheFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCacheFactory);
	UHoudiniPointCacheFactory::~UHoudiniPointCacheFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCacheFactory, UHoudiniPointCacheFactory::StaticClass, TEXT("UHoudiniPointCacheFactory"), &Z_Registration_Info_UClass_UHoudiniPointCacheFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCacheFactory), 1646223137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_2025738515(TEXT("/Script/HoudiniNiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagaraEditor_Public_HoudiniPointCacheFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
