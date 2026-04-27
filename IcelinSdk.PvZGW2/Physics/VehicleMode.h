#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850E40
   RuntimeId:        1418
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA640
*/
enum VehicleMode
{
  VmIdle = 0,
  VmEntering = 1,
  VmEntered = 2,
  VmStarting = 3,
  VmStarted = 4,
  VmStopping = 5,
  VmLeaving = 6,
};

}
