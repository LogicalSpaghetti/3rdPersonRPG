// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ThirdPersonGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ThirdPersonGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ThirdPersonGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ThirdPersonGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFE430B6F,
				0xFB48454A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ThirdPersonGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ThirdPersonGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ThirdPersonGame(Z_Construct_UPackage__Script_ThirdPersonGame, TEXT("/Script/ThirdPersonGame"), Z_Registration_Info_UPackage__Script_ThirdPersonGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE430B6F, 0xFB48454A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
