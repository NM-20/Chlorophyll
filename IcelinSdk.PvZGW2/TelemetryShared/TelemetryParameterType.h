#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874B18
   RuntimeId:        2C81
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7DE0
*/
enum TelemetryParameterType
{
  TelemetryParameterType_Int = 0,
  TelemetryParameterType_Float = 1,
  TelemetryParameterType_String = 2,
  TelemetryParameterType_Uint = 3,
  TelemetryParameterType_Int64 = 4,
  TelemetryParameterType_Uint64 = 5,
  TelemetryParameterType_Bool = 6,
  TelemetryParameterType_Vec2 = 7,
  TelemetryParameterType_Vec3 = 8,
  TelemetryParameterType_Vec4 = 9,
  TelemetryParameterType_Transform = 10,
  TelemetryParameterType_Special = 11,
  TelemetryParameterType_RawJsonString = 12,
};

}
