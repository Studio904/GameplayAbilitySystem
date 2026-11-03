// Copyright Studio 904

#pragma once

#include "CoreMinimal.h"
#include "Character/Studio904CharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AStudio904CharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
	
public:
	AAuraEnemy();
	
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
	
};
