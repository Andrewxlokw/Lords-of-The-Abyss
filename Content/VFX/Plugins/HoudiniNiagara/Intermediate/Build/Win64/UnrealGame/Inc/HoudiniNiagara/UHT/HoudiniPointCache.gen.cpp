// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/HoudiniPointCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister();
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes();
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType();
	HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAttributes;
	static UEnum* EHoudiniAttributes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniAttributes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniAttributes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("EHoudiniAttributes"));
		}
		return Z_Registration_Info_UEnum_EHoudiniAttributes.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniAttributes>()
	{
		return EHoudiniAttributes_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enumerators[] = {
		{ "HOUDINI_ATTR_BEGIN", (int64)HOUDINI_ATTR_BEGIN },
		{ "POSITION", (int64)POSITION },
		{ "NORMAL", (int64)NORMAL },
		{ "TIME", (int64)TIME },
		{ "POINTID", (int64)POINTID },
		{ "LIFE", (int64)LIFE },
		{ "COLOR", (int64)COLOR },
		{ "ALPHA", (int64)ALPHA },
		{ "VELOCITY", (int64)VELOCITY },
		{ "TYPE", (int64)TYPE },
		{ "IMPULSE", (int64)IMPULSE },
		{ "AGE", (int64)AGE },
		{ "HOUDINI_ATTR_SIZE", (int64)HOUDINI_ATTR_SIZE },
		{ "HOUDINI_ATTR_END", (int64)HOUDINI_ATTR_END },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enum_MetaDataParams[] = {
		{ "AGE.Name", "AGE" },
		{ "ALPHA.Name", "ALPHA" },
		{ "COLOR.Name", "COLOR" },
		{ "HOUDINI_ATTR_BEGIN.Name", "HOUDINI_ATTR_BEGIN" },
		{ "HOUDINI_ATTR_END.Name", "HOUDINI_ATTR_END" },
		{ "HOUDINI_ATTR_SIZE.Name", "HOUDINI_ATTR_SIZE" },
		{ "IMPULSE.Name", "IMPULSE" },
		{ "LIFE.Name", "LIFE" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
		{ "NORMAL.Name", "NORMAL" },
		{ "POINTID.Name", "POINTID" },
		{ "POSITION.Name", "POSITION" },
		{ "TIME.Name", "TIME" },
		{ "TYPE.Name", "TYPE" },
		{ "VELOCITY.Name", "VELOCITY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		"EHoudiniAttributes",
		"EHoudiniAttributes",
		Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAttributes.InnerSingleton, Z_Construct_UEnum_HoudiniNiagara_EHoudiniAttributes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniAttributes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointIndexes;
class UScriptStruct* FPointIndexes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointIndexes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointIndexes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointIndexes, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("PointIndexes"));
	}
	return Z_Registration_Info_UScriptStruct_PointIndexes.OuterSingleton;
}
template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<FPointIndexes>()
{
	return FPointIndexes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointIndexes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleIndexes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointIndexes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointIndexes>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_Inner = { "SampleIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple structure for storing all the sample indexes used for a given point\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple structure for storing all the sample indexes used for a given point" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes = { "SampleIndexes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointIndexes, SampleIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData), Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointIndexes_Statics::NewProp_SampleIndexes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointIndexes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		&NewStructOps,
		"PointIndexes",
		Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers),
		sizeof(FPointIndexes),
		alignof(FPointIndexes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointIndexes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointIndexes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes()
	{
		if (!Z_Registration_Info_UScriptStruct_PointIndexes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointIndexes.InnerSingleton, Z_Construct_UScriptStruct_FPointIndexes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointIndexes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPointCacheFileType;
	static UEnum* EHoudiniPointCacheFileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("EHoudiniPointCacheFileType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniPointCacheFileType>()
	{
		return EHoudiniPointCacheFileType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enumerators[] = {
		{ "EHoudiniPointCacheFileType::Invalid", (int64)EHoudiniPointCacheFileType::Invalid },
		{ "EHoudiniPointCacheFileType::CSV", (int64)EHoudiniPointCacheFileType::CSV },
		{ "EHoudiniPointCacheFileType::JSON", (int64)EHoudiniPointCacheFileType::JSON },
		{ "EHoudiniPointCacheFileType::BJSON", (int64)EHoudiniPointCacheFileType::BJSON },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enum_MetaDataParams[] = {
		{ "BJSON.Name", "EHoudiniPointCacheFileType::BJSON" },
		{ "CSV.Name", "EHoudiniPointCacheFileType::CSV" },
		{ "Invalid.Name", "EHoudiniPointCacheFileType::Invalid" },
		{ "JSON.Name", "EHoudiniPointCacheFileType::JSON" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		"EHoudiniPointCacheFileType",
		"EHoudiniPointCacheFileType",
		Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.InnerSingleton, Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execSetUseCustomCSVTitleRow)
	{
		P_GET_UBOOL(Z_Param_bInUseCustomCSVTitleRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCustomCSVTitleRow(Z_Param_bInUseCustomCSVTitleRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetUseCustomCSVTitleRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseCustomCSVTitleRow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPointIndexes>*)Z_Param__Result=P_THIS->GetPointValueIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSpecialAttributeIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetSpecialAttributeIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPointTypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLifeValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetLifeValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSpawnTimes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetSpawnTimes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatSampleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatSampleData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointType)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointType(Z_Param_Out_PointID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointLifeAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DesiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointLifeAtTime(Z_Param_Out_PointID,Z_Param_Out_DesiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointLife)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointLife(Z_Param_Out_PointID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointPositionAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointPositionAtTime(Z_Param_Out_PointID,Z_Param_Out_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointInt32ValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointInt32ValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointFloatValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointFloatValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointQuatValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat);
		P_GET_UBOOL(Z_Param_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointQuatValueAtTimeForString(Z_Param_PointID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Quat,Z_Param_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointQuatValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat);
		P_GET_UBOOL(Z_Param_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointQuatValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Quat,Z_Param_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVector4ValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVector4ValueAtTimeForString(Z_Param_PointID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVector4ValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVector4ValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVectorValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_UBOOL(Z_Param_DoSwap);
		P_GET_UBOOL(Z_Param_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVectorValueAtTimeForString(Z_Param_PointID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Vector,Z_Param_DoSwap,Z_Param_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVectorValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_UBOOL(Z_Param_DoSwap);
		P_GET_UBOOL(Z_Param_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVectorValueAtTime(Z_Param_PointID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Vector,Z_Param_DoSwap,Z_Param_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueAtTimeForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointValueAtTimeForString(Z_Param_Out_PointID,Z_Param_Attribute,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointValueAtTime(Z_Param_Out_PointID,Z_Param_Out_AttributeIndex,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSampleIndexesForPointAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PrevSampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NextSampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PrevWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSampleIndexesForPointAtTime(Z_Param_Out_PointID,Z_Param_Out_desiredTime,Z_Param_Out_PrevSampleIndex,Z_Param_Out_NextSampleIndex,Z_Param_Out_PrevWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointIDsToSpawnAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LastSpawnedPointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LastSpawnTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LastSpawnTimeRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointIDsToSpawnAtTime(Z_Param_Out_desiredTime,Z_Param_Out_MinID,Z_Param_Out_MaxID,Z_Param_Out_Count,Z_Param_Out_LastSpawnedPointID,Z_Param_Out_LastSpawnTime,Z_Param_Out_LastSpawnTimeRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLastPointIDToSpawnAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_time);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastPointIDToSpawnAtTime(Z_Param_Out_time,Z_Param_Out_lastID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLastSampleIndexAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastSampleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastSampleIndexAtTime(Z_Param_Out_desiredTime,Z_Param_Out_lastSampleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetImpulseValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImpulseValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVelocityValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVelocityValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetColorValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNormalValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNormalValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPositionValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPositionValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetTimeValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTimeValue(Z_Param_Out_sampleIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetQuatValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuatValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value,Z_Param_Out_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetQuatValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuatValue(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value,Z_Param_Out_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVector4ValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVector4ValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVector4Value)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVector4Value(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVectorValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoSwap);
		P_GET_UBOOL_REF(Z_Param_Out_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value,Z_Param_Out_DoSwap,Z_Param_Out_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVectorValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value);
		P_GET_UBOOL_REF(Z_Param_Out_DoSwap);
		P_GET_UBOOL_REF(Z_Param_Out_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value,Z_Param_Out_DoSwap,Z_Param_Out_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatValueForString(Z_Param_Out_sampleIndex,Z_Param_Attribute,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatValue(Z_Param_Out_sampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetAttributeIndexInArrayFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAttribute);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InAttributeArray);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutAttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHoudiniPointCache::GetAttributeIndexInArrayFromString(Z_Param_InAttribute,Z_Param_Out_InAttributeArray,Z_Param_Out_OutAttributeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetAttributeIndexFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttributeIndexFromString(Z_Param_Attribute,Z_Param_Out_AttributeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfSamples)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSamples();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfPoints();
		P_NATIVE_END;
	}
	void UHoudiniPointCache::StaticRegisterNativesUHoudiniPointCache()
	{
		UClass* Class = UHoudiniPointCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeIndexFromString", &UHoudiniPointCache::execGetAttributeIndexFromString },
			{ "GetAttributeIndexInArrayFromString", &UHoudiniPointCache::execGetAttributeIndexInArrayFromString },
			{ "GetColorValue", &UHoudiniPointCache::execGetColorValue },
			{ "GetFloatSampleData", &UHoudiniPointCache::execGetFloatSampleData },
			{ "GetFloatValue", &UHoudiniPointCache::execGetFloatValue },
			{ "GetFloatValueForString", &UHoudiniPointCache::execGetFloatValueForString },
			{ "GetImpulseValue", &UHoudiniPointCache::execGetImpulseValue },
			{ "GetLastPointIDToSpawnAtTime", &UHoudiniPointCache::execGetLastPointIDToSpawnAtTime },
			{ "GetLastSampleIndexAtTime", &UHoudiniPointCache::execGetLastSampleIndexAtTime },
			{ "GetLifeValues", &UHoudiniPointCache::execGetLifeValues },
			{ "GetNormalValue", &UHoudiniPointCache::execGetNormalValue },
			{ "GetNumberOfAttributes", &UHoudiniPointCache::execGetNumberOfAttributes },
			{ "GetNumberOfPoints", &UHoudiniPointCache::execGetNumberOfPoints },
			{ "GetNumberOfSamples", &UHoudiniPointCache::execGetNumberOfSamples },
			{ "GetPointFloatValueAtTime", &UHoudiniPointCache::execGetPointFloatValueAtTime },
			{ "GetPointIDsToSpawnAtTime", &UHoudiniPointCache::execGetPointIDsToSpawnAtTime },
			{ "GetPointInt32ValueAtTime", &UHoudiniPointCache::execGetPointInt32ValueAtTime },
			{ "GetPointLife", &UHoudiniPointCache::execGetPointLife },
			{ "GetPointLifeAtTime", &UHoudiniPointCache::execGetPointLifeAtTime },
			{ "GetPointPositionAtTime", &UHoudiniPointCache::execGetPointPositionAtTime },
			{ "GetPointQuatValueAtTime", &UHoudiniPointCache::execGetPointQuatValueAtTime },
			{ "GetPointQuatValueAtTimeForString", &UHoudiniPointCache::execGetPointQuatValueAtTimeForString },
			{ "GetPointType", &UHoudiniPointCache::execGetPointType },
			{ "GetPointTypes", &UHoudiniPointCache::execGetPointTypes },
			{ "GetPointValueAtTime", &UHoudiniPointCache::execGetPointValueAtTime },
			{ "GetPointValueAtTimeForString", &UHoudiniPointCache::execGetPointValueAtTimeForString },
			{ "GetPointValueIndexes", &UHoudiniPointCache::execGetPointValueIndexes },
			{ "GetPointVector4ValueAtTime", &UHoudiniPointCache::execGetPointVector4ValueAtTime },
			{ "GetPointVector4ValueAtTimeForString", &UHoudiniPointCache::execGetPointVector4ValueAtTimeForString },
			{ "GetPointVectorValueAtTime", &UHoudiniPointCache::execGetPointVectorValueAtTime },
			{ "GetPointVectorValueAtTimeForString", &UHoudiniPointCache::execGetPointVectorValueAtTimeForString },
			{ "GetPositionValue", &UHoudiniPointCache::execGetPositionValue },
			{ "GetQuatValue", &UHoudiniPointCache::execGetQuatValue },
			{ "GetQuatValueForString", &UHoudiniPointCache::execGetQuatValueForString },
			{ "GetSampleIndexesForPointAtTime", &UHoudiniPointCache::execGetSampleIndexesForPointAtTime },
			{ "GetSpawnTimes", &UHoudiniPointCache::execGetSpawnTimes },
			{ "GetSpecialAttributeIndexes", &UHoudiniPointCache::execGetSpecialAttributeIndexes },
			{ "GetTimeValue", &UHoudiniPointCache::execGetTimeValue },
			{ "GetUseCustomCSVTitleRow", &UHoudiniPointCache::execGetUseCustomCSVTitleRow },
			{ "GetVector4Value", &UHoudiniPointCache::execGetVector4Value },
			{ "GetVector4ValueForString", &UHoudiniPointCache::execGetVector4ValueForString },
			{ "GetVectorValue", &UHoudiniPointCache::execGetVectorValue },
			{ "GetVectorValueForString", &UHoudiniPointCache::execGetVectorValueForString },
			{ "GetVelocityValue", &UHoudiniPointCache::execGetVelocityValue },
			{ "SetUseCustomCSVTitleRow", &UHoudiniPointCache::execSetUseCustomCSVTitleRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics
	{
		struct HoudiniPointCache_eventGetAttributeIndexFromString_Parms
		{
			FString Attribute;
			int32 AttributeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexFromString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexFromString_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetAttributeIndexFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetAttributeIndexFromString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the attribute index for a given string. \n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the attribute index for a given string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetAttributeIndexFromString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::HoudiniPointCache_eventGetAttributeIndexFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::HoudiniPointCache_eventGetAttributeIndexFromString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics
	{
		struct HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms
		{
			FString InAttribute;
			TArray<FString> InAttributeArray;
			int32 OutAttributeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAttribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAttributeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAttributeArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAttributeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, InAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_Inner = { "InAttributeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray = { "InAttributeArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, InAttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_OutAttributeIndex = { "OutAttributeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, OutAttributeIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_OutAttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the attribute index for a given string. This is a static version of the function that\n// takes the attribute name array as an argument as well.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the attribute index for a given string. This is a static version of the function that\ntakes the attribute name array as an argument as well." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetAttributeIndexInArrayFromString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics
	{
		struct HoudiniPointCache_eventGetColorValue_Parms
		{
			int32 sampleIndex;
			FLinearColor value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetColorValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetColorValue_Parms, value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetColorValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetColorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Color for a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Color for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetColorValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::HoudiniPointCache_eventGetColorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::HoudiniPointCache_eventGetColorValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics
	{
		struct HoudiniPointCache_eventGetFloatSampleData_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatSampleData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatSampleData", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::HoudiniPointCache_eventGetFloatSampleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::HoudiniPointCache_eventGetFloatSampleData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics
	{
		struct HoudiniPointCache_eventGetFloatValue_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			float value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, attrIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetFloatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetFloatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the float value at a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the float value at a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::HoudiniPointCache_eventGetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::HoudiniPointCache_eventGetFloatValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics
	{
		struct HoudiniPointCache_eventGetFloatValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			float value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetFloatValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetFloatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the float value at a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the float value at a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatValueForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::HoudiniPointCache_eventGetFloatValueForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::HoudiniPointCache_eventGetFloatValueForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics
	{
		struct HoudiniPointCache_eventGetImpulseValue_Parms
		{
			int32 sampleIndex;
			float value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetImpulseValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetImpulseValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetImpulseValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetImpulseValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns an Impulse float value for a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an Impulse float value for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetImpulseValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::HoudiniPointCache_eventGetImpulseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::HoudiniPointCache_eventGetImpulseValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics
	{
		struct HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms
		{
			float time;
			int32 lastID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms, time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_lastID = { "lastID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms, lastID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_lastID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the last pointID of the points to be spawned at time t\n// Invalid Index are used to indicate edge cases:\n// -1 will be returned if there is no points to spawn ( t is smaller than the first point time )\n// NumberOfSamples will be returned if all points in the CSV have been spawned ( t is higher than the last point time )\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the last pointID of the points to be spawned at time t\nInvalid Index are used to indicate edge cases:\n-1 will be returned if there is no points to spawn ( t is smaller than the first point time )\nNumberOfSamples will be returned if all points in the CSV have been spawned ( t is higher than the last point time )" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLastPointIDToSpawnAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics
	{
		struct HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms
		{
			float desiredTime;
			int32 lastSampleIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastSampleIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms, desiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_lastSampleIndex = { "lastSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms, lastSampleIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_lastSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the last sample index for a given time value (the sample with a time smaller or equal to desiredTime)\n// If the point cache doesn't have time informations, returns false and set LastsampleIndex to the last sample in the file\n// If desiredTime is smaller than the time value in the first sample, LastsampleIndex will be set to -1\n// If desiredTime is higher than the last time value in the last sample of the point cache, LastIndex will be set to the last sample's index\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the last sample index for a given time value (the sample with a time smaller or equal to desiredTime)\nIf the point cache doesn't have time informations, returns false and set LastsampleIndex to the last sample in the file\nIf desiredTime is smaller than the time value in the first sample, LastsampleIndex will be set to -1\nIf desiredTime is higher than the last time value in the last sample of the point cache, LastIndex will be set to the last sample's index" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLastSampleIndexAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics
	{
		struct HoudiniPointCache_eventGetLifeValues_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetLifeValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLifeValues", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::HoudiniPointCache_eventGetLifeValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::HoudiniPointCache_eventGetLifeValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics
	{
		struct HoudiniPointCache_eventGetNormalValue_Parms
		{
			int32 sampleIndex;
			FVector value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNormalValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNormalValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetNormalValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetNormalValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Normal Vector3 for a given point in the point cache (converted to unreal's coordinate system)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Normal Vector3 for a given point in the point cache (converted to unreal's coordinate system)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNormalValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::HoudiniPointCache_eventGetNormalValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::HoudiniPointCache_eventGetNormalValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfAttributes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfAttributes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of attributes found in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of attributes found in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfAttributes", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::HoudiniPointCache_eventGetNumberOfAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::HoudiniPointCache_eventGetNumberOfAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of points found in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of points found in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfPoints", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::HoudiniPointCache_eventGetNumberOfPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::HoudiniPointCache_eventGetNumberOfPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfSamples_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfSamples_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of samples found in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of samples found in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfSamples", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::HoudiniPointCache_eventGetNumberOfSamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::HoudiniPointCache_eventGetNumberOfSamples_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointFloatValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, PointID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointFloatValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointFloatValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::HoudiniPointCache_eventGetPointFloatValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::HoudiniPointCache_eventGetPointFloatValueAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms
		{
			float desiredTime;
			int32 MinID;
			int32 MaxID;
			int32 Count;
			int32 LastSpawnedPointID;
			float LastSpawnTime;
			float LastSpawnTimeRequest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastSpawnedPointID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTimeRequest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, desiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MinID = { "MinID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, MinID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MaxID = { "MaxID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, MaxID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, Count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnedPointID = { "LastSpawnedPointID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnedPointID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTime = { "LastSpawnTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTimeRequest = { "LastSpawnTimeRequest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnTimeRequest), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MinID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MaxID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnedPointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTimeRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointIDsToSpawnAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, PointID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the integer value of the point at the keyframe before the desired time. No value interpolation will take place.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the integer value of the point at the keyframe before the desired time. No value interpolation will take place." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointInt32ValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics
	{
		struct HoudiniPointCache_eventGetPointLife_Parms
		{
			int32 PointID;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLife_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLife_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointLife_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointLife_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a given point's life value at spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a given point's life value at spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointLife", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::HoudiniPointCache_eventGetPointLife_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::HoudiniPointCache_eventGetPointLife_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointLifeAtTime_Parms
		{
			int32 PointID;
			float DesiredTime;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime = { "DesiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, DesiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointLifeAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointLifeAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_DesiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a point's life for a given time value\n// Note this function currently behaves exactly the same as GetPointLife\n// since the Lifetime value is currently treated as a constant. This could\n// change in the future.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a point's life for a given time value\nNote this function currently behaves exactly the same as GetPointLife\nsince the Lifetime value is currently treated as a constant. This could\nchange in the future." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointLifeAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::HoudiniPointCache_eventGetPointLifeAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::HoudiniPointCache_eventGetPointLifeAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointPositionAtTime_Parms
		{
			int32 PointID;
			float desiredTime;
			FVector Vector;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, desiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointPositionAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointPositionAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Position Value for a given point at a given time value (linearly interpolated)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Position Value for a given point at a given time value (linearly interpolated)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointPositionAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::HoudiniPointCache_eventGetPointPositionAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::HoudiniPointCache_eventGetPointPositionAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointQuatValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			FQuat Quat;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, PointID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTime_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Quat Value for a given point at a given time value (linearly interpolated)\n" },
#endif
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Quat Value for a given point at a given time value (linearly interpolated)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointQuatValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::HoudiniPointCache_eventGetPointQuatValueAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			FQuat Quat;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, PointID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Quat Value for a given point at a given time value (linearly interpolated), via the attribute name\n" },
#endif
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Quat Value for a given point at a given time value (linearly interpolated), via the attribute name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointQuatValueAtTimeForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics
	{
		struct HoudiniPointCache_eventGetPointType_Parms
		{
			int32 PointID;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointType_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointType_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointType_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a point's type at spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a point's type at spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointType", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::HoudiniPointCache_eventGetPointType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::HoudiniPointCache_eventGetPointType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics
	{
		struct HoudiniPointCache_eventGetPointTypes_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointTypes", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::HoudiniPointCache_eventGetPointTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::HoudiniPointCache_eventGetPointTypes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, desiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the value for a point at a given time value (linearly interpolated)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the value for a point at a given time value (linearly interpolated)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::HoudiniPointCache_eventGetPointValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::HoudiniPointCache_eventGetPointValueAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the value for a point at a given time value (linearly interpolated), via the attribute name\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the value for a point at a given time value (linearly interpolated), via the attribute name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueAtTimeForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointValueAtTimeForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointValueAtTimeForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics
	{
		struct HoudiniPointCache_eventGetPointValueIndexes_Parms
		{
			TArray<FPointIndexes> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointIndexes, METADATA_PARAMS(0, nullptr) }; // 1189421037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueIndexes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_MetaData) }; // 1189421037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueIndexes", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::HoudiniPointCache_eventGetPointValueIndexes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::HoudiniPointCache_eventGetPointValueIndexes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			FVector4 Vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, PointID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Vector4 Value for a given point at a given time value (linearly interpolated)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Vector4 Value for a given point at a given time value (linearly interpolated)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVector4ValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			FVector4 Vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, PointID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Vector4 Value for a given point at a given time value (linearly interpolated), via the attribute name\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Vector4 Value for a given point at a given time value (linearly interpolated), via the attribute name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVector4ValueAtTimeForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointVectorValueAtTime_Parms
		{
			int32 PointID;
			int32 AttributeIndex;
			float desiredTime;
			FVector Vector;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, PointID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Vector Value for a given point at a given time value (linearly interpolated)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Vector Value for a given point at a given time value (linearly interpolated)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVectorValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::HoudiniPointCache_eventGetPointVectorValueAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms
		{
			int32 PointID;
			FString Attribute;
			float desiredTime;
			FVector Vector;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, PointID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the Vector Value for a given point at a given time value (linearly interpolated), via the attribute name\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Vector Value for a given point at a given time value (linearly interpolated), via the attribute name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVectorValueAtTimeForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics
	{
		struct HoudiniPointCache_eventGetPositionValue_Parms
		{
			int32 sampleIndex;
			FVector value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPositionValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetPositionValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPositionValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetPositionValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Position Vector3 for a given point in the point cache (converted to unreal's coordinate system)\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Position Vector3 for a given point in the point cache (converted to unreal's coordinate system)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPositionValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::HoudiniPointCache_eventGetPositionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::HoudiniPointCache_eventGetPositionValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics
	{
		struct HoudiniPointCache_eventGetQuatValue_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			FQuat value;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoHoudiniToUnrealConversion_MetaData[];
#endif
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, attrIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValue_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Quat for a given point in the point cache\n" },
#endif
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Quat for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetQuatValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::HoudiniPointCache_eventGetQuatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::HoudiniPointCache_eventGetQuatValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics
	{
		struct HoudiniPointCache_eventGetQuatValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			FQuat value;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoHoudiniToUnrealConversion_MetaData[];
#endif
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValueForString_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Quat for a given point in the point cache by column name\n" },
#endif
		{ "CPP_Default_DoHoudiniToUnrealConversion", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Quat for a given point in the point cache by column name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetQuatValueForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::HoudiniPointCache_eventGetQuatValueForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::HoudiniPointCache_eventGetQuatValueForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics
	{
		struct HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms
		{
			int32 PointID;
			float desiredTime;
			int32 PrevSampleIndex;
			int32 NextSampleIndex;
			float PrevWeight;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrevSampleIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextSampleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevWeight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID = { "PointID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PointID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, desiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevSampleIndex = { "PrevSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PrevSampleIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_NextSampleIndex = { "NextSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, NextSampleIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevWeight = { "PrevWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PrevWeight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_NextSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the previous and next sample indexes for reading the values of a specified point at a given time\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the previous and next sample indexes for reading the values of a specified point at a given time" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSampleIndexesForPointAtTime", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics
	{
		struct HoudiniPointCache_eventGetSpawnTimes_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSpawnTimes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSpawnTimes", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::HoudiniPointCache_eventGetSpawnTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::HoudiniPointCache_eventGetSpawnTimes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics
	{
		struct HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Data" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSpecialAttributeIndexes", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics
	{
		struct HoudiniPointCache_eventGetTimeValue_Parms
		{
			int32 sampleIndex;
			float value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetTimeValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetTimeValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetTimeValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetTimeValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a time value for a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a time value for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetTimeValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::HoudiniPointCache_eventGetTimeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::HoudiniPointCache_eventGetTimeValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics
	{
		struct HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Settings" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetUseCustomCSVTitleRow", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics
	{
		struct HoudiniPointCache_eventGetVector4Value_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			FVector4 value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, attrIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVector4Value_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVector4Value_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Vector4 for a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Vector4 for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVector4Value", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::HoudiniPointCache_eventGetVector4Value_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::HoudiniPointCache_eventGetVector4Value_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics
	{
		struct HoudiniPointCache_eventGetVector4ValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			FVector4 value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVector4ValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVector4ValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Vector4 for a given point in the point cache by column name\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Vector4 for a given point in the point cache by column name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVector4ValueForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::HoudiniPointCache_eventGetVector4ValueForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::HoudiniPointCache_eventGetVector4ValueForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics
	{
		struct HoudiniPointCache_eventGetVectorValue_Parms
		{
			int32 sampleIndex;
			int32 attrIndex;
			FVector value;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoSwap_MetaData[];
#endif
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoScale_MetaData[];
#endif
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, attrIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09// Returns the string value at a given point in the point cache\n\x09""bool GetCSVStringValue( const int32& sampleIndex, const int32& attrIndex, FString& value );\n\x09// Returns the string value at a given point in the point cache\n\x09""bool GetCSVStringValue( const int32& sampleIndex, const FString& Attribute, FString& value );\n\x09*/// Returns a Vector3 for a given point in the point cache\n" },
#endif
		{ "CPP_Default_DoScale", "true" },
		{ "CPP_Default_DoSwap", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Returns the string value at a given point in the point cache\nbool GetCSVStringValue( const int32& sampleIndex, const int32& attrIndex, FString& value );\n// Returns the string value at a given point in the point cache\nbool GetCSVStringValue( const int32& sampleIndex, const FString& Attribute, FString& value );\n// Returns a Vector3 for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVectorValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::HoudiniPointCache_eventGetVectorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::HoudiniPointCache_eventGetVectorValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics
	{
		struct HoudiniPointCache_eventGetVectorValueForString_Parms
		{
			int32 sampleIndex;
			FString Attribute;
			FVector value;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoSwap_MetaData[];
#endif
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoScale_MetaData[];
#endif
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Vector3 for a given point in the point cache by column name\n" },
#endif
		{ "CPP_Default_DoScale", "true" },
		{ "CPP_Default_DoSwap", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Vector3 for a given point in the point cache by column name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVectorValueForString", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::HoudiniPointCache_eventGetVectorValueForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::HoudiniPointCache_eventGetVectorValueForString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics
	{
		struct HoudiniPointCache_eventGetVelocityValue_Parms
		{
			int32 sampleIndex;
			FVector value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex = { "sampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVelocityValue_Parms, sampleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex_MetaData), Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoudiniPointCache_eventGetVelocityValue_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVelocityValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventGetVelocityValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_sampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Attributes Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a Velocity Vector3 for a given point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a Velocity Vector3 for a given point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVelocityValue", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::HoudiniPointCache_eventGetVelocityValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::HoudiniPointCache_eventGetVelocityValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics
	{
		struct HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms
		{
			bool bInUseCustomCSVTitleRow;
		};
		static void NewProp_bInUseCustomCSVTitleRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseCustomCSVTitleRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms*)Obj)->bInUseCustomCSVTitleRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow = { "bInUseCustomCSVTitleRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms), &Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Point Cache Settings" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "SetUseCustomCSVTitleRow", nullptr, nullptr, Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCache);
	UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister()
	{
		return UHoudiniPointCache::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSampleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSampleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSampleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCSVTitleRow_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceCSVTitleRow;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeArray;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawDataCompressed_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataCompressed_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawDataCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataFormatID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RawDataFormatID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataUncompressedSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RawDataUncompressedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataCompressionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RawDataCompressionMethod;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatSampleData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatSampleData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatSampleData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnTimes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LifeValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointTypes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpecialAttributeIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAttributeIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecialAttributeIndexes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointValueIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointValueIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointValueIndexes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomCSVTitleRow_MetaData[];
#endif
		static void NewProp_UseCustomCSVTitleRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomCSVTitleRow;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPointCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString, "GetAttributeIndexFromString" }, // 125571192
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString, "GetAttributeIndexInArrayFromString" }, // 847582951
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetColorValue, "GetColorValue" }, // 1690405087
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData, "GetFloatSampleData" }, // 1731640571
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue, "GetFloatValue" }, // 936944936
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString, "GetFloatValueForString" }, // 622655226
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue, "GetImpulseValue" }, // 4082352584
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime, "GetLastPointIDToSpawnAtTime" }, // 939761150
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime, "GetLastSampleIndexAtTime" }, // 2004677334
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues, "GetLifeValues" }, // 2798604148
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue, "GetNormalValue" }, // 1840587870
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes, "GetNumberOfAttributes" }, // 757040590
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints, "GetNumberOfPoints" }, // 2726713348
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples, "GetNumberOfSamples" }, // 3355392643
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime, "GetPointFloatValueAtTime" }, // 4197674827
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime, "GetPointIDsToSpawnAtTime" }, // 1067552531
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime, "GetPointInt32ValueAtTime" }, // 390494026
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointLife, "GetPointLife" }, // 2903427177
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime, "GetPointLifeAtTime" }, // 3411295302
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime, "GetPointPositionAtTime" }, // 234044558
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime, "GetPointQuatValueAtTime" }, // 1875717263
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString, "GetPointQuatValueAtTimeForString" }, // 955136778
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointType, "GetPointType" }, // 1578218117
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes, "GetPointTypes" }, // 1399107211
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime, "GetPointValueAtTime" }, // 1444372344
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString, "GetPointValueAtTimeForString" }, // 2154175035
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes, "GetPointValueIndexes" }, // 932796664
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime, "GetPointVector4ValueAtTime" }, // 2969037670
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString, "GetPointVector4ValueAtTimeForString" }, // 4111658693
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime, "GetPointVectorValueAtTime" }, // 545027025
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString, "GetPointVectorValueAtTimeForString" }, // 4176597634
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue, "GetPositionValue" }, // 4200299601
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue, "GetQuatValue" }, // 1656127650
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString, "GetQuatValueForString" }, // 2897406566
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime, "GetSampleIndexesForPointAtTime" }, // 566592544
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes, "GetSpawnTimes" }, // 3453151555
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes, "GetSpecialAttributeIndexes" }, // 3755941317
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue, "GetTimeValue" }, // 2693425521
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow, "GetUseCustomCSVTitleRow" }, // 1358379181
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value, "GetVector4Value" }, // 1537320976
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString, "GetVector4ValueForString" }, // 846724884
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue, "GetVectorValue" }, // 2025193632
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString, "GetVectorValueForString" }, // 1502774698
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue, "GetVelocityValue" }, // 3629692500
		{ &Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow, "SetUseCustomCSVTitleRow" }, // 679925905
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniPointCache.h" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------------------------------------------------------------\n//  MEMBER VARIABLES\n//-----------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MEMBER VARIABLES" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of values stored in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of values stored in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of attributes stored in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of attributes stored in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes = { "NumberOfAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfAttributes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of unique points found in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of unique points found in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of frames imported into the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of frames imported into the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, NumberOfFrames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The first frame of the exported frame range\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The first frame of the exported frame range" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame = { "FirstFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, FirstFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The last frame of the exported frame range\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last frame of the exported frame range" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame = { "LastFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, LastFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The minimum sample time value, in seconds, in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum sample time value, in seconds, in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime = { "MinSampleTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, MinSampleTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum sample time value, in seconds, in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum sample time value, in seconds, in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime = { "MaxSampleTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, MaxSampleTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The source title row for CSV files, describing the content of each column and used to locate specific values in the point cache.\n// Editing this will trigger a re-import of the point cache.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The source title row for CSV files, describing the content of each column and used to locate specific values in the point cache.\nEditing this will trigger a re-import of the point cache." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow = { "SourceCSVTitleRow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, SourceCSVTitleRow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_Inner = { "AttributeArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The final attribute names used by the asset after parsing.\n// Packed vector values are expanded, so additional attributes (.0, .1, ... or .x, .y, .z) might have been inserted.\n// Use the indexes in this array to access your data.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The final attribute names used by the asset after parsing.\nPacked vector values are expanded, so additional attributes (.0, .1, ... or .x, .y, .z) might have been inserted.\nUse the indexes in this array to access your data." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray = { "AttributeArray", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, AttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Importing data and options used for this asset */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Importing data and options used for this asset" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed_Inner = { "RawDataCompressed", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw data of the source file so that we can export it again.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw data of the source file so that we can export it again." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed = { "RawDataCompressed", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, RawDataCompressed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataFormatID_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compression scheme used to compress raw \n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compression scheme used to compress raw" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataFormatID = { "RawDataFormatID", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, RawDataFormatID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataFormatID_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataFormatID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataUncompressedSize_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of data when uncompressed\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of data when uncompressed" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataUncompressedSize = { "RawDataUncompressedSize", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, RawDataUncompressedSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataUncompressedSize_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataUncompressedSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressionMethod_MetaData[] = {
		{ "Category", "Houdini Point Cache Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compression scheme used to compress raw \n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compression scheme used to compress raw" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressionMethod = { "RawDataCompressionMethod", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, RawDataCompressionMethod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressionMethod_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressionMethod_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_Inner = { "FloatSampleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09// Array containing the Raw String data\n\x09UPROPERTY()\n\x09TArray<FString> StringCSVData;\n\x09*/// Array containing all the sample data converted to floats\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Array containing the Raw String data\nUPROPERTY()\nTArray<FString> StringCSVData;\n// Array containing all the sample data converted to floats" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData = { "FloatSampleData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, FloatSampleData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_Inner = { "SpawnTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array containing the spawn times for each point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing the spawn times for each point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes = { "SpawnTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, SpawnTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_Inner = { "LifeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array containing all the life values for each point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing all the life values for each point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues = { "LifeValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, LifeValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_Inner = { "PointTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array containing all the type values for each point in the point cache\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing all the type values for each point in the point cache" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes = { "PointTypes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, PointTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_Inner = { "SpecialAttributeIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array containing the column indexes of the special attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing the column indexes of the special attributes" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes = { "SpecialAttributeIndexes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, SpecialAttributeIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_Inner = { "PointValueIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointIndexes, METADATA_PARAMS(0, nullptr) }; // 1189421037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09// Row indexes for new time values\n\x09UPROPERTY()\n\x09TMap<float, int32> TimeValuesIndexes;\n\x09*/// Sample indexes for each point\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Row indexes for new time values\nUPROPERTY()\nTMap<float, int32> TimeValuesIndexes;\n// Sample indexes for each point" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes = { "PointValueIndexes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, PointValueIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData) }; // 1189421037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** For CSV source files, whether to use a custom title row. */" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For CSV source files, whether to use a custom title row." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_SetBit(void* Obj)
	{
		((UHoudiniPointCache*)Obj)->UseCustomCSVTitleRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow = { "UseCustomCSVTitleRow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoudiniPointCache), &Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of source file, such as CSV or JSON.\n" },
#endif
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of source file, such as CSV or JSON." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoudiniPointCache, FileType), Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData), Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData) }; // 3108718222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataFormatID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataUncompressedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_RawDataCompressionMethod,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCache_Statics::ClassParams = {
		&UHoudiniPointCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoudiniPointCache()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPointCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCache.OuterSingleton, Z_Construct_UClass_UHoudiniPointCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPointCache.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UClass* StaticClass<UHoudiniPointCache>()
	{
		return UHoudiniPointCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCache);
	UHoudiniPointCache::~UHoudiniPointCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::EnumInfo[] = {
		{ EHoudiniAttributes_StaticEnum, TEXT("EHoudiniAttributes"), &Z_Registration_Info_UEnum_EHoudiniAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2095985342U) },
		{ EHoudiniPointCacheFileType_StaticEnum, TEXT("EHoudiniPointCacheFileType"), &Z_Registration_Info_UEnum_EHoudiniPointCacheFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3108718222U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ScriptStructInfo[] = {
		{ FPointIndexes::StaticStruct, Z_Construct_UScriptStruct_FPointIndexes_Statics::NewStructOps, TEXT("PointIndexes"), &Z_Registration_Info_UScriptStruct_PointIndexes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointIndexes), 1189421037U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCache, UHoudiniPointCache::StaticClass, TEXT("UHoudiniPointCache"), &Z_Registration_Info_UClass_UHoudiniPointCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCache), 1264483708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_3207171193(TEXT("/Script/HoudiniNiagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
