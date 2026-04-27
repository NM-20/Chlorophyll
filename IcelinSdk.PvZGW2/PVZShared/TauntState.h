#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863860
   RuntimeId:        212C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C4AE8
*/
enum TauntState
{
  TauntState_Idle = 0,
  TauntState_StartingTaunt = 1,
  TauntState_Taunting = 2,
  TauntState_ForceStop = 3,
};

}
