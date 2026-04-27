#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872CF0
   RuntimeId:        2B46
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C11A8
*/
enum EVar
{
  EVar_Speed = 0,
  EVar_DistanceToTarget = 1,
  EVar_DistanceToPathDest = 2,
  EVar_DistanceTargetToCapture = 3,
  EVar_TargetThreatLevel = 4,
  EVar_HighestThreatLevel = 5,
  EVar_Health = 6,
  EVar_TimeSinceTargetLastSeen = 7,
  EVar_BurstCooldown = 8,
  EVar_DamageDistance = 9,
};

}
