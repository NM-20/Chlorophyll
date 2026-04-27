#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872F50
   RuntimeId:        2B6E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7EE0
*/
enum AiGameMode
{
  AiGameMode_NotSet = 0,
  AiGameMode_None = 1,
  AiGameMode_Coop = 2,
  AiGameMode_Vanquish = 4,
  AiGameMode_Rush = 8,
  AiGameMode_Endless = 16,
  AiGameMode_BossHunt = 32,
};

}
