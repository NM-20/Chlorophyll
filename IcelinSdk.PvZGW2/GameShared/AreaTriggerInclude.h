#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BF30
   RuntimeId:        0FEE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB120
*/
enum AreaTriggerInclude
{
  ATNone = 0,
  ATAll = 1,
  ATPlayers = 2,
  ATAI = 3,
  ATAI_Allies = 4,
  ATAI_Enemies = 5,
};

}
