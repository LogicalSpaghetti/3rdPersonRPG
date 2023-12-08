// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonGame/ThirdPersonGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonGameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	THIRDPERSONGAME_API UClass* Z_Construct_UClass_AThirdPersonGameGameMode();
	THIRDPERSONGAME_API UClass* Z_Construct_UClass_AThirdPersonGameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonGame();
// End Cross Module References
	void AThirdPersonGameGameMode::StaticRegisterNativesAThirdPersonGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonGameGameMode);
	UClass* Z_Construct_UClass_AThirdPersonGameGameMode_NoRegister()
	{
		return AThirdPersonGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThirdPersonGameGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonGameGameMode_Statics::ClassParams = {
		&AThirdPersonGameGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AThirdPersonGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonGameGameMode.OuterSingleton, Z_Construct_UClass_AThirdPersonGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonGameGameMode.OuterSingleton;
	}
	template<> THIRDPERSONGAME_API UClass* StaticClass<AThirdPersonGameGameMode>()
	{
		return AThirdPersonGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonGameGameMode);
	AThirdPersonGameGameMode::~AThirdPersonGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_3rdPersonRPG_ThirdPersonGame_Source_ThirdPersonGame_ThirdPersonGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_3rdPersonRPG_ThirdPersonGame_Source_ThirdPersonGame_ThirdPersonGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonGameGameMode, AThirdPersonGameGameMode::StaticClass, TEXT("AThirdPersonGameGameMode"), &Z_Registration_Info_UClass_AThirdPersonGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonGameGameMode), 2015743282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_3rdPersonRPG_ThirdPersonGame_Source_ThirdPersonGame_ThirdPersonGameGameMode_h_2829939205(TEXT("/Script/ThirdPersonGame"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_3rdPersonRPG_ThirdPersonGame_Source_ThirdPersonGame_ThirdPersonGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_3rdPersonRPG_ThirdPersonGame_Source_ThirdPersonGame_ThirdPersonGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
