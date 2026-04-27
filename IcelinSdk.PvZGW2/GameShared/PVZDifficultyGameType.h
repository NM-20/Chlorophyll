#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A598
   RuntimeId:        0E8A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B5CF8
*/
enum PVZDifficultyGameType
{
  PVZDifficultyGameType_Invalid = 0,
  PVZDifficultyGameType_Multiplayer = 1,
  PVZDifficultyGameType_Coop = 2,
  PVZDifficultyGameType_LocalPlay = 3,
  PVZDifficultyGameType_HUB = 4,
};

}
