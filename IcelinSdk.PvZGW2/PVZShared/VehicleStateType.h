#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869CE8
   RuntimeId:        2515
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C3748
*/
enum VehicleStateType
{
  VehicleStateType_Normal = 0,
  VehicleStateType_LowHealth = 1,
  VehicleStateType_CriticalState = 2,
  VehicleStateType_LAST_ITEM = 3,
};

}
