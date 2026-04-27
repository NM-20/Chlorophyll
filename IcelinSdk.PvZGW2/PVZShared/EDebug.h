#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872CD0
   RuntimeId:        2B44
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C11C8
*/
enum EDebug
{
  EDebug_Info = 0,
  EDebug_Fatal = 1,
  EDebug_Assert = 2,
  EDebug_Warning = 3,
  EDebug_Status = 4,
  EDebug_PrintText = 5,
};

}
