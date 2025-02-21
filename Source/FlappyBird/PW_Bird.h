#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PW_Bird.generated.h"

UCLASS()
class FLAPPYBIRD_API APW_Bird : public APawn
{
	GENERATED_BODY()

/*
Unreal Engine Property Specifiers
UPROPERTY([specifier, specifier, ...], [meta(key=value, key=value, ...)])
Type VariableName;
A UProperty cannot be a pointer to an FStruct.

UPROPERTY decorator macro exposes a UCLASS or USTRUCT member variable to the Unreal Engine type system, possibly,
depending of the specifiers given, making the member variable editable from the Unreal Editor GUI tools and the Blueprint visual scripting language.
UPROPERTIES can be primitive types, structs declared with the USTRUCT(BlueprintType) specifier,
or pointers to classes declared with the UCLASS(BlueprintType) specifier andthat in herit, ultimately, from UObject.
Pointers to UCLASS classes (and possibly USTRUCT structs) participate in garbage collection / reference counting.

EditAnywhere
Indicates that this property can be edited by property windows, on archetypes and instances.
This Specifier is incompatible with any of the the "Visible" Specifiers.

VisibleAnywhere
Indicates that this property is visible in all property windows, but cannot be edited. This Specifier is incompatible with the "Edit" Specifiers.

TArray <TSharedPtr<FMassArchetypeData>> AllArchetypes
*/
private:
     UPROPERTY(EditAnywhere)
        /*
        UStaticMeshComponent is a component that creates an instance of a StaticMesh.
        A StaticMesh is a 3D model that consists of a set of polygons.
        Static Meshes are used to create world geometry for levels in Unreal Engine.
        */
        UStaticMeshComponent * Mesh;

    UPROPERTY(VisibleAnywhere)
    /*
    UStringArmComponent tries to maintain its children at a fixed distance from the parent,
    but will retract the children if there is a collision, and spring back when there is no collision.
    Example: Use as a 'camera boom' or 'selfie stick' to keep the follow camera for a player from colliding into the world.

    A "camera boom" refers to a virtual component, typically a "SpringArmComponent," which acts like a flexible arm extending from a character or object,
    allowing the camera to smoothly follow and maintain a desired distance while avoiding collisions with the environment,
    essentially simulating how a real camera boom would operate in filmmaking.
    */
    UStringArmComponent * CameraBoom;




public:
	// Sets default values for this pawn's properties
	APW_Bird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
