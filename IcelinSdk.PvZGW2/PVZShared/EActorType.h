#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872D90
   RuntimeId:        2B50
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C1108
*/
enum EActorType
{
  EActorType_Zombie = 1,
  EActorType_Plant = 2,
  EActorType_ZombieNPC = 4,
  EActorType_PlantNPC = 8,
  EActorType_Human = 16,
  EActorType_Gnome = 32,
};

}
