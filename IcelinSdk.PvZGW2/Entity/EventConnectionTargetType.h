#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A4A8
   RuntimeId:        07C5
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB9C0
*/
enum EventConnectionTargetType
{
  EventConnectionTargetType_Invalid = 0,
  EventConnectionTargetType_ClientAndServer = 1,
  EventConnectionTargetType_Client = 2,
  EventConnectionTargetType_Server = 3,
  EventConnectionTargetType_NetworkedClient = 4,
  EventConnectionTargetType_NetworkedClientAndServer = 5,
};

}
