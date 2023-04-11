// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"

class AUserPlayer;

enum class BALLSTATE
{
	BS_TEE,
	BS_STOP,
	BS_FLY,
	BS_ROLL,
	BS_BOUND,
	BS_COUNT
};

UCLASS()
class RAMI_API ABall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void SetPlayer(AUserPlayer* pPlayer);

	//void SetSourcePosition(FVector3f src);

	//void SetPosition(FVector3f pos);

	//void SetSimPosition(FVector3f pos);

	//void SetVelocity(FVector3f velocity);

	//void SetAccellation(FVector3f accellation);

	//void SetSpin(FVector3f spin);

	//void SetBallState(BALLSTATE state);

protected:
	void Refresh();

public:
	BALLSTATE m_eBallState = BALLSTATE::BS_TEE;


	FVector3f m_sPosition; // m
	FVector3f m_sSimPosition; // m, for simulation
	FVector3f m_sSourcePosition;
	FVector3f m_sVelocity; // m/ms
	FVector3f m_sAccellation; // m/ms/ms
	FVector3f m_sSpin;
	//float m_fRenderSpinPitch = 0.0F; // degree
	//float m_fRenderSpinRoll = 0.0F; // degree
	//float m_fSimRenderSpinPitch = 0.0F; // degree, for simulation

	AActor m_BallRoot;
	AActor m_BallObject;
private:
	AUserPlayer* m_Player;
};
