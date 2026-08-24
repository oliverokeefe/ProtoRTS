// Fill out your copyright notice in the Description page of Project Settings.


#include "SolbreakUserSettings.h"


USolbreakUserSettings::USolbreakUserSettings()
{
    MusicVolume = 1.0f;
    SFXVolume = 1.0f;
}

void USolbreakUserSettings::SetMusicVolume(float Volume)
{
    MusicVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
}

float USolbreakUserSettings::GetMusicVolume() const
{
    return MusicVolume;
}

void USolbreakUserSettings::SetSFXVolume(float Volume)
{
    SFXVolume = FMath::Clamp(Volume, 0.0f, 1.0f);
}

float USolbreakUserSettings::GetSFXVolume() const
{
    return SFXVolume;
}

