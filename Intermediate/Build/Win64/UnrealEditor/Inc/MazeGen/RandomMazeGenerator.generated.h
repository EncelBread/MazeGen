// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGEN_RandomMazeGenerator_generated_h
#error "RandomMazeGenerator.generated.h already included, missing '#pragma once' in RandomMazeGenerator.h"
#endif
#define MAZEGEN_RandomMazeGenerator_generated_h

#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_SPARSE_DATA
#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_RPC_WRAPPERS
#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARandomMazeGenerator(); \
	friend struct Z_Construct_UClass_ARandomMazeGenerator_Statics; \
public: \
	DECLARE_CLASS(ARandomMazeGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(ARandomMazeGenerator)


#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_INCLASS \
private: \
	static void StaticRegisterNativesARandomMazeGenerator(); \
	friend struct Z_Construct_UClass_ARandomMazeGenerator_Statics; \
public: \
	DECLARE_CLASS(ARandomMazeGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(ARandomMazeGenerator)


#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARandomMazeGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARandomMazeGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomMazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomMazeGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARandomMazeGenerator(ARandomMazeGenerator&&); \
	NO_API ARandomMazeGenerator(const ARandomMazeGenerator&); \
public:


#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARandomMazeGenerator(ARandomMazeGenerator&&); \
	NO_API ARandomMazeGenerator(const ARandomMazeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomMazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomMazeGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARandomMazeGenerator)


#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CellToSwapClass() { return STRUCT_OFFSET(ARandomMazeGenerator, CellToSwapClass); } \
	FORCEINLINE static uint32 __PPO__ColumnNumber() { return STRUCT_OFFSET(ARandomMazeGenerator, ColumnNumber); } \
	FORCEINLINE static uint32 __PPO__RowNumber() { return STRUCT_OFFSET(ARandomMazeGenerator, RowNumber); } \
	FORCEINLINE static uint32 __PPO__DistanceXBetweenCells() { return STRUCT_OFFSET(ARandomMazeGenerator, DistanceXBetweenCells); } \
	FORCEINLINE static uint32 __PPO__DistanceYBetweenCells() { return STRUCT_OFFSET(ARandomMazeGenerator, DistanceYBetweenCells); } \
	FORCEINLINE static uint32 __PPO__WaitTimeBetweenCreateCells() { return STRUCT_OFFSET(ARandomMazeGenerator, WaitTimeBetweenCreateCells); }


#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_7_PROLOG
#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_SPARSE_DATA \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_RPC_WRAPPERS \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_INCLASS \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_SPARSE_DATA \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_INCLASS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_RandomMazeGenerator_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGEN_API UClass* StaticClass<class ARandomMazeGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeGen_Source_MazeGen_RandomMazeGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
