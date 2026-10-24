// Copyright Studio 904

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Studio904CharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AStudio904CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AStudio904CharacterBase();

protected:
	virtual void BeginPlay() override;
	
};
