#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B670
   RuntimeId:        263C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8A20
*/
enum AwardType
{
  AwardType_OnceGlobally = 0,
  AwardType_OncePerRound = 1,
  AwardType_Unlimited = 2,
  AwardType_Limited = 3,
  AwardType_GateList = 4,
};

}
