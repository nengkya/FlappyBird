Unreal Engine 5.5.3  
  
[Tutorial](https://dev.epicgames.com/community/learning/tutorials/jyWV/unreal-engine-c-beginner-tutorial-flappy-bird) 7:00  
  
1. Create blank project  
  
2. We create played control actor, the Bird  
   Tool > New c++ class > Pawn  
   Name it PW_Bird
   
4. Edit file PW_Bird.h under the GENERATED_BODY() to create a child blueprint class  
   A "Blueprint" is a visual scripting system that allows users to create gameplay elements, like character actions, object interactions, and level events,  
   using a node-based interface without writing traditional code, essentially acting as a visual programming language to design game mechanics within the Unreal Editor itself.  
   To make Blueprint visible use UProperty(EditAnywhere).  
   ```  
   private:
   /*
   Unreal Engine Property Specifiers
   UPROPERTY([specifier, specifier, ...], [meta(key=value, key=value, ...)])
   Type VariableName;
   A UProperty cannot be a pointer to an FStruct.
    
   UPROPERTY decorator macro exposes a UCLASS or USTRUCT member variable to the Unreal Engine type system, possibly,
   depending of the specifiers given, making the member variable editable from the Unreal Editor GUI tools and the Blueprint visual scripting language.
   UPROPERTIES can be primitive types, structs declared with the USTRUCT(BlueprintType) specifier, or pointers to classes declared with the UCLASS(BlueprintType) specifier and
   that inherit, ultimately, from UObject.
   Pointers to UCLASS classes (and possibly USTRUCT structs) participate in garbage collection / reference counting.
    
   EditAnywhere
   Indicates that this property can be edited by property windows, on archetypes and instances. This Specifier is incompatible with any of the the "Visible" Specifiers.
     
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
   ```  
  
