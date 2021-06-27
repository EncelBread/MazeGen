// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGen/RandomMazeGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomMazeGenerator() {}
// Cross Module References
	MAZEGEN_API UClass* Z_Construct_UClass_ARandomMazeGenerator_NoRegister();
	MAZEGEN_API UClass* Z_Construct_UClass_ARandomMazeGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MazeGen();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeCell_NoRegister();
// End Cross Module References
	void ARandomMazeGenerator::StaticRegisterNativesARandomMazeGenerator()
	{
	}
	UClass* Z_Construct_UClass_ARandomMazeGenerator_NoRegister()
	{
		return ARandomMazeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ARandomMazeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellToSwapClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CellToSwapClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ColumnNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RowNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceXBetweenCells_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceXBetweenCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceYBetweenCells_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceYBetweenCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitTimeBetweenCreateCells_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTimeBetweenCreateCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomMazeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RandomMazeGenerator.h" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_CellToSwapClass_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_CellToSwapClass = { "CellToSwapClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMazeGenerator, CellToSwapClass), Z_Construct_UClass_AMazeCell_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_CellToSwapClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_CellToSwapClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_ColumnNumber_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_ColumnNumber = { "ColumnNumber", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMazeGenerator, ColumnNumber), METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_ColumnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_ColumnNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_RowNumber_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_RowNumber = { "RowNumber", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMazeGenerator, RowNumber), METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_RowNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_RowNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceXBetweenCells_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceXBetweenCells = { "DistanceXBetweenCells", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMazeGenerator, DistanceXBetweenCells), METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceXBetweenCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceXBetweenCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceYBetweenCells_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceYBetweenCells = { "DistanceYBetweenCells", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMazeGenerator, DistanceYBetweenCells), METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceYBetweenCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceYBetweenCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_WaitTimeBetweenCreateCells_MetaData[] = {
		{ "Category", "Maze Settings" },
		{ "ModuleRelativePath", "RandomMazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_WaitTimeBetweenCreateCells = { "WaitTimeBetweenCreateCells", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomMazeGenerator, WaitTimeBetweenCreateCells), METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_WaitTimeBetweenCreateCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_WaitTimeBetweenCreateCells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomMazeGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_CellToSwapClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_ColumnNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_RowNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceXBetweenCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_DistanceYBetweenCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomMazeGenerator_Statics::NewProp_WaitTimeBetweenCreateCells,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomMazeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomMazeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomMazeGenerator_Statics::ClassParams = {
		&ARandomMazeGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARandomMazeGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomMazeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomMazeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomMazeGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomMazeGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomMazeGenerator, 825196946);
	template<> MAZEGEN_API UClass* StaticClass<ARandomMazeGenerator>()
	{
		return ARandomMazeGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomMazeGenerator(Z_Construct_UClass_ARandomMazeGenerator, &ARandomMazeGenerator::StaticClass, TEXT("/Script/MazeGen"), TEXT("ARandomMazeGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomMazeGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
