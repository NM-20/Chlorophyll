#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872E10
   RuntimeId:        2B58
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C10E8
*/
enum ETimerType
{
  ETimer_Null = 0,
  ETimer_Ability = 1,
  ETimer_Weapon = 2,
  ETimer_Movement = 3,
  ETimer_Taunt = 4,
  ETimer_Pathfinding = 5,
  ETimer_AttackMovementStopped = 6,
  ETimer_WarpEscape = 7,
};

}
