#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858A70
   RuntimeId:        1A6F
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6798
*/
enum MatchmakingSessionMode
{
  MatchmakingSessionMode_FindDedicatedServer = 0,
  MatchmakingSessionMode_ResetDedicatedServer = 1,
  MatchmakingSessionMode_FindPeerGame = 2,
  MatchmakingSessionMode_FindOrCreatePeerGame = 3,
  MatchmakingSessionMode_CreatePeerGame = 4,
  MatchmakingSessionMode_Scenario = 5,
  MatchmakingSessionMode_Invalid = 6,
};

}
