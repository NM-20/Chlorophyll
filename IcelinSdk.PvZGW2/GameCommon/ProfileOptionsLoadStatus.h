#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142841EA8
   RuntimeId:        0B4A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CBA28
*/
enum ProfileOptionsLoadStatus
{
  ProfileOptionsLoadStatus_Empty = 0,
  ProfileOptionsLoadStatus_Succeeded = 1,
  ProfileOptionsLoadStatus_OverwriteSucceeded = 2,
  ProfileOptionsLoadStatus_Corrupt = 3,
};

}
