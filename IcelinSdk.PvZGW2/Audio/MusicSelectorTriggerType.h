#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837E70
   RuntimeId:        055C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBE40
*/
enum MusicSelectorTriggerType
{
  MusicSelectorTriggerType_Interrupt = 0,
  MusicSelectorTriggerType_Queue = 1,
  MusicSelectorTriggerType_Fade = 2,
};

}
