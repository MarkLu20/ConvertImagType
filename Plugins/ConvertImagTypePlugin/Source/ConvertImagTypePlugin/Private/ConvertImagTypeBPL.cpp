// Fill out your copyright notice in the Description page of Project Settings.

#include "ConvertImagTypeBPL.h"

bool UConvertImagTypeBPL::ConvertPNG2JPG(const FString & SourceName, const FString & TargetName)
{
	check(SourceName.EndsWith(TEXT(".png")) && TargetName.EndsWith(TEXT("jpg")));
	IImageWrapperModule &ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	IImageWrapperPtr SourceImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	IImageWrapperPtr TargetImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
	TArray<uint8> SourceImageData;
	TArray<uint8> TargetImagData;
	//int32 Width, Height;
	const TArray<uint8> *UncompressedRGBA = nullptr;
	if (UncompressedRGBA!=nullptr)
	{
 
	}
	return false;
	
}

