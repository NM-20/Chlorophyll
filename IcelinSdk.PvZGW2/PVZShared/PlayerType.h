#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865B78
   RuntimeId:        232D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B91C0
*/
enum PlayerType
{
  PlayerType_HumanOnly = 0,
  PlayerType_AIOnly = 1,
  PlayerType_PersistentAIOnly = 2,
  PlayerType_HumanAndPersistentAI = 3,
};

}
