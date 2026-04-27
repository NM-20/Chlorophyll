#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863128
   RuntimeId:        20F0
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C4CC8
*/
enum PVZCommanderActionState
{
  PVZCommanderActionState_Disabled = 0,
  PVZCommanderActionState_Idle = 1,
  PVZCommanderActionState_CoolDown = 2,
  PVZCommanderActionState_Count = 3,
};

}
