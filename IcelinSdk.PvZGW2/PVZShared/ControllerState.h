#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870598
   RuntimeId:        2997
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B82A0
*/
enum ControllerState
{
  ControllerState_AssignToPlayer = 0,
  ControllerState_WaitingForAnyButton = 1,
  ControllerState_ClearPlayerAssignment = 2,
  ControllerState_Reconnect = 3,
  ControllerState_AssignController = 4,
};

}
