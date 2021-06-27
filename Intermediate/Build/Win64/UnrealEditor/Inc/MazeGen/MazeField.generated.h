// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGEN_MazeField_generated_h
#error "MazeField.generated.h already included, missing '#pragma once' in MazeField.h"
#endif
#define MAZEGEN_MazeField_generated_h

#define MazeGen_Source_MazeGen_MazeField_h_10_SPARSE_DATA
#define MazeGen_Source_MazeGen_MazeField_h_10_RPC_WRAPPERS
#define MazeGen_Source_MazeGen_MazeField_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeGen_Source_MazeGen_MazeField_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeCell(); \
	friend struct Z_Construct_UClass_AMazeCell_Statics; \
public: \
	DECLARE_CLASS(AMazeCell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeCell)


#define MazeGen_Source_MazeGen_MazeField_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAMazeCell(); \
	friend struct Z_Construct_UClass_AMazeCell_Statics; \
public: \
	DECLARE_CLASS(AMazeCell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeCell)


#define MazeGen_Source_MazeGen_MazeField_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeCell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeCell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeCell(AMazeCell&&); \
	NO_API AMazeCell(const AMazeCell&); \
public:


#define MazeGen_Source_MazeGen_MazeField_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeCell(AMazeCell&&); \
	NO_API AMazeCell(const AMazeCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeCell)


#define MazeGen_Source_MazeGen_MazeField_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(AMazeCell, RootScene); } \
	FORCEINLINE static uint32 __PPO__Floor() { return STRUCT_OFFSET(AMazeCell, Floor); } \
	FORCEINLINE static uint32 __PPO__Wall_0() { return STRUCT_OFFSET(AMazeCell, Wall_0); } \
	FORCEINLINE static uint32 __PPO__Wall_1() { return STRUCT_OFFSET(AMazeCell, Wall_1); } \
	FORCEINLINE static uint32 __PPO__Wall_2() { return STRUCT_OFFSET(AMazeCell, Wall_2); } \
	FORCEINLINE static uint32 __PPO__Wall_3() { return STRUCT_OFFSET(AMazeCell, Wall_3); } \
	FORCEINLINE static uint32 __PPO__DebugText() { return STRUCT_OFFSET(AMazeCell, DebugText); }


#define MazeGen_Source_MazeGen_MazeField_h_7_PROLOG
#define MazeGen_Source_MazeGen_MazeField_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_MazeField_h_10_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_MazeField_h_10_SPARSE_DATA \
	MazeGen_Source_MazeGen_MazeField_h_10_RPC_WRAPPERS \
	MazeGen_Source_MazeGen_MazeField_h_10_INCLASS \
	MazeGen_Source_MazeGen_MazeField_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeGen_Source_MazeGen_MazeField_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_MazeField_h_10_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_MazeField_h_10_SPARSE_DATA \
	MazeGen_Source_MazeGen_MazeField_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_MazeField_h_10_INCLASS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_MazeField_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGEN_API UClass* StaticClass<class AMazeCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeGen_Source_MazeGen_MazeField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
