#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851E40
   RuntimeId:        1502
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C87E8
*/
enum PhysicsWorldType
{
  PhysicsWorldType_Client = 0,
  PhysicsWorldType_ClientEffect = 1,
  PhysicsWorldType_Server = 2,
  PhysicsWorldType_Max = 3,
};

}
