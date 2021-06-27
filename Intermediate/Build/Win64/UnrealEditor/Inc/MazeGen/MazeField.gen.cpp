// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGen/MazeField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeField() {}
// Cross Module References
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeCell_NoRegister();
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeCell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MazeGen();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AMazeCell::StaticRegisterNativesAMazeCell()
	{
	}
	UClass* Z_Construct_UClass_AMazeCell_NoRegister()
	{
		return AMazeCell::StaticClass();
	}
	struct Z_Construct_UClass_AMazeCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Floor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Floor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wall_0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wall_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wall_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wall_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wall_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wall_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wall_3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wall_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MazeField.h" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_Floor_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, Floor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_Floor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_Floor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_0_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_0 = { "Wall_0", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, Wall_0), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_1_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_1 = { "Wall_1", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, Wall_1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_2_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_2 = { "Wall_2", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, Wall_2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_3_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_3 = { "Wall_3", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, Wall_3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCell_Statics::NewProp_DebugText_MetaData[] = {
		{ "Category", "MazeField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCell_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCell, DebugText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::NewProp_DebugText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::NewProp_DebugText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_Floor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_Wall_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCell_Statics::NewProp_DebugText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeCell_Statics::ClassParams = {
		&AMazeCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMazeCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMazeCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeCell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeCell, 4129586738);
	template<> MAZEGEN_API UClass* StaticClass<AMazeCell>()
	{
		return AMazeCell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeCell(Z_Construct_UClass_AMazeCell, &AMazeCell::StaticClass, TEXT("/Script/MazeGen"), TEXT("AMazeCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
