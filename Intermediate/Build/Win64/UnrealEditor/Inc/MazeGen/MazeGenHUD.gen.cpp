// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGen/MazeGenHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGenHUD() {}
// Cross Module References
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeGenHUD_NoRegister();
	MAZEGEN_API UClass* Z_Construct_UClass_AMazeGenHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MazeGen();
// End Cross Module References
	void AMazeGenHUD::StaticRegisterNativesAMazeGenHUD()
	{
	}
	UClass* Z_Construct_UClass_AMazeGenHUD_NoRegister()
	{
		return AMazeGenHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGenHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGenHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MazeGenHUD.h" },
		{ "ModuleRelativePath", "MazeGenHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGenHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGenHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeGenHUD_Statics::ClassParams = {
		&AMazeGenHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMazeGenHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGenHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeGenHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeGenHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeGenHUD, 1663670538);
	template<> MAZEGEN_API UClass* StaticClass<AMazeGenHUD>()
	{
		return AMazeGenHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeGenHUD(Z_Construct_UClass_AMazeGenHUD, &AMazeGenHUD::StaticClass, TEXT("/Script/MazeGen"), TEXT("AMazeGenHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGenHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
