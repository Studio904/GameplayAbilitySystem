// Copyright Studio 904


#include "Character/AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("Hand-LSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraEnemy::HighLightActor()
{
	bHighLighted = true;
}

void AAuraEnemy::UnHighLightActor()
{
	bHighLighted = false;
}

void AAuraEnemy::BeginPlay()
{
	Super::BeginPlay();
}
