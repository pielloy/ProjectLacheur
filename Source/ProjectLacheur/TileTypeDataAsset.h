// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TileTypeDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FItemInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
		bool walkable;

	UPROPERTY(EditAnywhere)
		int weight;

	UPROPERTY(EditAnywhere)
		bool isObject;

	UPROPERTY(EditAnywhere)
		UObject *obj;

	UPROPERTY(EditAnywhere)
		UStaticMesh *mesh;
};

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTLACHEUR_API UTileTypeDataAsset : public UDataAsset
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
			TMap<int, FItemInfo> items;
};
    