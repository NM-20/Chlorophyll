#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428380E0
   RuntimeId:        0580
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBDE0
*/
enum VoiceOverValueType
{
  VoiceOverValueType_Boolean = 0,
  VoiceOverValueType_Integer = 1,
  VoiceOverValueType_Float = 2,
  VoiceOverValueType_Vector = 3,
  VoiceOverValueType_Object = 4,
  VoiceOverValueTypeCount = 5,
};

}
