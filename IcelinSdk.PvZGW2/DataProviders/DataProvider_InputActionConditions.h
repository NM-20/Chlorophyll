#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834878
   RuntimeId:        0214
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC440
*/
enum DataProvider_InputActionConditions
{
  InputAction_IsDown = 0,
  InputAction_BeenDown = 1,
  InputAction_WentDown = 2,
  InputAction_IsUp = 3,
  InputAction_WentUp = 4,
  InputAction_WentUpAfterTime = 5,
  InputAction_WentUpBeforeTime = 6,
};

}
