// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameJam_RecnPlay2017GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJam_RecnPlay2017GameMode() {}
// Cross Module References
	GAMEJAM_RECNPLAY2017_API UClass* Z_Construct_UClass_AGameJam_RecnPlay2017GameMode_NoRegister();
	GAMEJAM_RECNPLAY2017_API UClass* Z_Construct_UClass_AGameJam_RecnPlay2017GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameJam_RecnPlay2017();
// End Cross Module References
	void AGameJam_RecnPlay2017GameMode::StaticRegisterNativesAGameJam_RecnPlay2017GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameJam_RecnPlay2017GameMode_NoRegister()
	{
		return AGameJam_RecnPlay2017GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameJam_RecnPlay2017GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_GameJam_RecnPlay2017,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameJam_RecnPlay2017GameMode.h" },
				{ "ModuleRelativePath", "GameJam_RecnPlay2017GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameJam_RecnPlay2017GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameJam_RecnPlay2017GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJam_RecnPlay2017GameMode, 1026155669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJam_RecnPlay2017GameMode(Z_Construct_UClass_AGameJam_RecnPlay2017GameMode, &AGameJam_RecnPlay2017GameMode::StaticClass, TEXT("/Script/GameJam_RecnPlay2017"), TEXT("AGameJam_RecnPlay2017GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJam_RecnPlay2017GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
