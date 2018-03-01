// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FPSHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSHUD() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSHUD_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AFPSHUD::StaticRegisterNativesAFPSHUD()
	{
	}
	UClass* Z_Construct_UClass_AFPSHUD_NoRegister()
	{
		return AFPSHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "FPSHUD.h" },
				{ "ModuleRelativePath", "FPSHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[] = {
				{ "Category", "FPSHUD" },
				{ "ModuleRelativePath", "FPSHUD.h" },
				{ "ToolTip", "This will be drawn at the center of the screen." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "CrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFPSHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_CrosshairTexture_MetaData, ARRAY_COUNT(NewProp_CrosshairTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairTexture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFPSHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFPSHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSHUD, 1140171557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSHUD(Z_Construct_UClass_AFPSHUD, &AFPSHUD::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
