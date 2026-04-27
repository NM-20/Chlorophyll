#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428581E8
   RuntimeId:        19E4
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B67B8
*/
enum BackendType
{
  Backend_Lan = 0,
  Backend_Blaze = 1,
  Backend_Peer = 2,
  Backend_Local = 3,
  Backend_Playground = 4,
  Backend_LocalNoStorage = 5,
  Backend_Count_ = 6,
};

}
