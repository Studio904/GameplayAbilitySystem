// Copyright Studio 904

#pragma once

#include "CoreMinimal.h"
#include "Character/Studio904CharacterBase.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AStudio904CharacterBase
{
	GENERATED_BODY()
	
	
public:
	AAuraEnemy();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
	
};
