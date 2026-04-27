#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B6A8
   RuntimeId:        0F6F
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B5518
*/
enum PlayerSpawnType
{
  PlayerSpawnType_HumanPlayer = 0,
  PlayerSpawnType_AiPlayer = 1,
  PlayerSpawnType_Actor = 2,
  PlayerSpawnType_BrainAI = 3,
  PlayerSpawnType_Ai2Player = 300,
  PlayerSpawnType_PersistentAiPlayer = 400,
  PlayerSpawnType_UseBlueprintSetting = 999,
};

}
