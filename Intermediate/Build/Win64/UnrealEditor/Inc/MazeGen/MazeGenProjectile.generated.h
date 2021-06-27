// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MAZEGEN_MazeGenProjectile_generated_h
#error "MazeGenProjectile.generated.h already included, missing '#pragma once' in MazeGenProjectile.h"
#endif
#define MAZEGEN_MazeGenProjectile_generated_h

#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_SPARSE_DATA
#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeGenProjectile(); \
	friend struct Z_Construct_UClass_AMazeGenProjectile_Statics; \
public: \
	DECLARE_CLASS(AMazeGenProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeGenProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMazeGenProjectile(); \
	friend struct Z_Construct_UClass_AMazeGenProjectile_Statics; \
public: \
	DECLARE_CLASS(AMazeGenProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeGenProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeGenProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeGenProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGenProjectile(AMazeGenProjectile&&); \
	NO_API AMazeGenProjectile(const AMazeGenProjectile&); \
public:


#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGenProjectile(AMazeGenProjectile&&); \
	NO_API AMazeGenProjectile(const AMazeGenProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeGenProjectile)


#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMazeGenProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMazeGenProjectile, ProjectileMovement); }


#define MazeGen_Source_MazeGen_MazeGenProjectile_h_12_PROLOG
#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_SPARSE_DATA \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_RPC_WRAPPERS \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_INCLASS \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeGen_Source_MazeGen_MazeGenProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_SPARSE_DATA \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MazeGen_Source_MazeGen_MazeGenProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGEN_API UClass* StaticClass<class AMazeGenProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeGen_Source_MazeGen_MazeGenProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
