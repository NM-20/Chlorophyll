#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DC98
   RuntimeId:        2854
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8580
*/
enum ExplodeOnContactType
{
  ExplodeOnContactType_None = 0,
  ExplodeOnContactType_EnemyPlayers = 1,
  ExplodeOnContactType_EnemyPlayersAndVehicles = 2,
  ExplodeOnContactType_AllPlayers = 3,
  ExplodeOnContactType_AllPlayersAndVehicles = 4,
  ExplodeOnContactType_Any = 5,
};

}
