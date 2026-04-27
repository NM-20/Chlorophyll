#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ACC8
   RuntimeId:        0EE7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB320
*/
enum LogFileCollisionMode
{
  LFCM_Overwrite = 0,
  LFCM_Rotate = 1,
  LFCM_TimeStamp = 2,
};

}
