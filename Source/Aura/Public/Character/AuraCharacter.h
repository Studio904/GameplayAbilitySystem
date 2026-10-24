// Copyright Studio 904

#pragma once

#include "CoreMinimal.h"
#include "Character/Studio904CharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AStudio904CharacterBase
{
	GENERATED_BODY()
	
public:
	AAuraCharacter();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
};
