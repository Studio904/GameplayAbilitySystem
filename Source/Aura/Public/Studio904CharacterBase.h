// Copyright Studio 904

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Studio904CharacterBase.generated.h"

UCLASS()
class AURA_API AStudio904CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStudio904CharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
