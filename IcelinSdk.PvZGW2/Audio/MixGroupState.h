#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836328
   RuntimeId:        03B1
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC200
*/
enum MixGroupState
{
  MixGroupState_Normal = 0,
  MixGroupState_Mute = 1,
  MixGroupState_Solo = 2,
  MixGroupStateBitCount = 4,
};

}
