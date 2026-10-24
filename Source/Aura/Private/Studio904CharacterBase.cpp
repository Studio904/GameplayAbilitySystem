// Copyright Studio 904


#include "Studio904CharacterBase.h"

// Sets default values
AStudio904CharacterBase::AStudio904CharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStudio904CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStudio904CharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStudio904CharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

