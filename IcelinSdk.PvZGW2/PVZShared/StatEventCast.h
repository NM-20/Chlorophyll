#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864F18
   RuntimeId:        226E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B92A0
*/
enum StatEventCast
{
  SendToSingle = 0,
  SendToTeamExcludeSingle = 1,
  SendToTeam = 2,
  SendToAll = 3,
};

}
