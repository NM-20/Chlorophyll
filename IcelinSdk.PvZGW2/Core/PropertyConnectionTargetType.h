#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428334B0
   RuntimeId:        0107
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD5C8
*/
enum PropertyConnectionTargetType
{
  PropertyConnectionTargetType_Invalid = 0,
  PropertyConnectionTargetType_ClientAndServer = 1,
  PropertyConnectionTargetType_Client = 2,
  PropertyConnectionTargetType_Server = 3,
  PropertyConnectionTargetType_NetworkedClient = 4,
  PropertyConnectionTargetType_NetworkedClientAndServer = 5,
};

}
