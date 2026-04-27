#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849F18
   RuntimeId:        0E28
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6958
*/
enum PersistenceGameType
{
  PersistenceGameType_Singleplayer = 0,
  PersistenceGameType_Cooperative = 1,
  PersistenceGameType_Multiplayer = 2,
  PersistenceGameType_Count = 3,
};

}
