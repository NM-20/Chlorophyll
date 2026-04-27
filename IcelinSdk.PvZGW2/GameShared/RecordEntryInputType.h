#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F4B0
   RuntimeId:        12C5
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8CE8
*/
enum RecordEntryInputType
{
  RecordEntryInputType_FireInput = 0,
  RecordEntryInputType_PitchInput = 1,
  RecordEntryInputType_YawInput = 2,
  RecordEntryInputType_RollInput = 3,
  RecordEntryInputType_ThrottleInput = 4,
  RecordEntryInputType_DigitalBitFlagsInput = 5,
  RecordEntryInputType_AimingYaw = 6,
  RecordEntryInputType_AimingPitch = 7,
  RecordEntryInputTypeCount = 8,
};

}
