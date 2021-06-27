// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGEN_MazeGenCharacter_generated_h
#error "MazeGenCharacter.generated.h already included, missing '#pragma once' in MazeGenCharacter.h"
#endif
#define MAZEGEN_MazeGenCharacter_generated_h

#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_SPARSE_DATA
#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_RPC_WRAPPERS
#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeGenCharacter(); \
	friend struct Z_Construct_UClass_AMazeGenCharacter_Statics; \
public: \
	DECLARE_CLASS(AMazeGenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeGenCharacter)


#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMazeGenCharacter(); \
	friend struct Z_Construct_UClass_AMazeGenCharacter_Statics; \
public: \
	DECLARE_CLASS(AMazeGenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeGenCharacter)


#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeGenCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeGenCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGenCharacter(AMazeGenCharacter&&); \
	NO_API AMazeGenCharacter(const AMazeGenCharacter&); \
public:


#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGenCharacter(AMazeGenCharacter&&); \
	NO_API AMazeGenCharacter(const AMazeGenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeGenCharacter)


#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMazeGenCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMazeGenCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMazeGenCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMazeGenCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMazeGenCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMazeGenCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMazeGenCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMazeGenCharacter, L_MotionController); }


#define MazeGen_Source_MazeGen_MazeGenCharacter_h_17_PROLOG
#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_SPARSE_DATA \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_RPC_WRAPPERS \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_INCLASS \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeGen_Source_MazeGen_MazeGenCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_SPARSE_DATA \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_INCLASS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_MazeGenCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGEN_API UClass* StaticClass<class AMazeGenCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeGen_Source_MazeGen_MazeGenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
