// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/ImageWrapper/Public/ImageWrapper.h"
#include "Runtime/ImageWrapper/Public/Interfaces/IImageWrapper.h" 
#include  "PlatformFilemanager.h"
#include "Paths.h"
#include"Runtime/Engine//Classes/Engine/Texture2D.h"
#include "Runtime/ImageWrapper/Public/Interfaces/IImageWrapperModule.h"
#include "ConvertImagTypeBPL.generated.h"

/**
 *
 */

UCLASS()

class CONVERTIMAGTYPEPLUGIN_API UConvertImagTypeBPL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "ConvertImag")
		static bool ConvertPNG2JPG(FString SourceName, FString TargetName);
	UFUNCTION(BlueprintCallable, Category = "LoadTexture")
		static UTexture2D* LoadTexture2D( FString ImagePath, bool& IsValid, int32& OutWidth, int32& OutHeight);
	/*UFUNCTION(BlueprintCallable, Category = "LoadTexture")
		static IImageWrapperPtr GetImageWrapperByExtention(const FString InImagePath);*/



};
static IImageWrapperPtr GetImageWrapperByExtention( FString InImagePath);
