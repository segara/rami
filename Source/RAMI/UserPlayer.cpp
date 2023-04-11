// Fill out your copyright notice in the Description page of Project Settings.


#include "UserPlayer.h"


// Sets default values
AUserPlayer::AUserPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AUserPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUserPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

