#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873A38
   RuntimeId:        2C0E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7F60
*/
enum EActorRole
{
  EActor_Zombie = 1,
  EActor_Plant = 2,
  EActor_ZombieNPC = 4,
  EActor_PlantNPC = 8,
  EActor_Human = 16,
  EActor_Gnome = 32,
};

}
