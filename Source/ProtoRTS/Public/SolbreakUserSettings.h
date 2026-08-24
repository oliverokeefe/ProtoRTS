// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "SolbreakUserSettings.generated.h"

/**
 * GameUserSettings for Solbreak SKirmish
 * 
 * Author: Gabe
 */
UCLASS(BlueprintType)
class PROTORTS_API USolbreakUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	

public:

	USolbreakUserSettings();

	// Settings for music volume

	UFUNCTION(BlueprintCallable, Category = "Settings|Audio")
	void SetMusicVolume(float Volume);

	UFUNCTION(BlueprintCallable, Category = "Settings|Audio")
	float GetMusicVolume() const;

	// Settings for SFX volume

	UFUNCTION(BlueprintCallable, Category = "Settings|Audio")
	void SetSFXVolume(float Volume);

	UFUNCTION(BlueprintCallable, Category = "Settings|Audio")
	float GetSFXVolume() const;

protected:

	UPROPERTY(Config)
	float MusicVolume;

	UPROPERTY(Config)
	float SFXVolume;
};
