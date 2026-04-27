#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858788
   RuntimeId:        1A4D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9B20
*/
enum MatchmakingPlatform
{
  MatchmakingPlatform_PC = 0,
  MatchmakingPlatform_PCGen4 = 1,
  MatchmakingPlatform_Gen4 = 2,
  MatchmakingPlatform_Gen3 = 3,
  MatchmakingPlatform_Console = 4,
  MatchmakingPlatform_360 = 5,
  MatchmakingPlatform_PS3 = 6,
  MatchmakingPlatform_Durango = 7,
  MatchmakingPlatform_Kettle = 8,
  MatchmakingPlatform_Any = 9,
};

}
