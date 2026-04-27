#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E9E8
   RuntimeId:        28A7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C2788
*/
enum VoipType
{
  VoipType_PushToTalk_Silent = 0,
  VoipType_On = 1,
  VoipType_Off = 2,
  VoipType_PushToTalk_Talking = 3,
  ViopType_Count = 4,
};

}
