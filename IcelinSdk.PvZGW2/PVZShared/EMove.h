#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872D70
   RuntimeId:        2B4E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C1128
*/
enum EMove
{
  EMove_Null = 0,
  EMove_Stop = 1,
  EMove_Random = 2,
  EMove_Chase = 3,
  EMove_FollowOwner = 4,
  EMove_AttackPosition = 5,
  EMove_Attractor = 6,
  EMove_Fallback = 7,
  EMove_Ability = 8,
  EMove_Dodge = 9,
  EMove_EscapeThreat = 10,
  EMove_Stagger = 11,
  EMove_HealTarget = 12,
  EMove_PointOfInterest = 13,
  EMove_AttackFromPointOfInterest = 14,
  EMove_DefendPointOfInterest = 15,
};

}
