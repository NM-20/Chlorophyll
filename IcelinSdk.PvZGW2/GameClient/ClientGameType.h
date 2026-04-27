#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283EF30
   RuntimeId:        0A70
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CC888
*/
enum ClientGameType
{
  ClientGameType_SinglePlayer = 0,
  ClientGameType_Hosted = 1,
  ClientGameType_MpTutorial = 2,
  ClientGameType_Joined = 3,
};

}
