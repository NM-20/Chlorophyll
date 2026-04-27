#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428369B0
   RuntimeId:        0417
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD1E8
*/
enum SoundDataState
{
  SoundDataState_Pending = 0,
  SoundDataState_Cancelled = 1,
  SoundDataState_Lost = 2,
  SoundDataState_Valid = 3,
};

}
