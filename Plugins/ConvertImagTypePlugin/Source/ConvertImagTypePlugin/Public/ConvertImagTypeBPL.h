// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/ImageWrapper/Public/ImageWrapper.h"
#include "Runtime/Core/Public/Windows/WindowsPlatformFile.h"
#include "Paths.h"
#include "ConvertImagTypeBPL.generated.h"

/**
 * 
 */
UCLASS()
class CONVERTIMAGTYPEPLUGIN_API UConvertImagTypeBPL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "ConvertImag")
		static bool ConvertPNG2JPG(const FString &SourceName,const FString &TargetName);
	
	
	
	
};
