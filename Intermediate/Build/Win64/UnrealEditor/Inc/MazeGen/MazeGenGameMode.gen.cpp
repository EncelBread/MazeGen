// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGen/MazeGenGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGenGameMode() {}
// Cross Module References
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeGenGameMode_NoRegister();
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeGenGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MazeGen();
// End Cross Module References
	void AMazeGenGameMode::StaticRegisterNativesAMazeGenGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMazeGenGameMode_NoRegister()
	{
		return AMazeGenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "MazeGenGameMode.h" },
		{ "ModuleRelativePath", "MazeGenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGenGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeGenGameMode_Statics::ClassParams = {
		&AMazeGenGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMazeGenGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGenGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeGenGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeGenGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeGenGameMode, 2482351354);
	template<> MAZEGEN_API UClass* StaticClass<AMazeGenGameMode>()
	{
		return AMazeGenGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeGenGameMode(Z_Construct_UClass_AMazeGenGameMode, &AMazeGenGameMode::StaticClass, TEXT("/Script/MazeGen"), TEXT("AMazeGenGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGenGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
