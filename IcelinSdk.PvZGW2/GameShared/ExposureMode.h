#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DC00
   RuntimeId:        1171
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6898
*/
enum ExposureMode
{
  ExposureMode_Manual = 0,
  ExposureMode_ManualEV = 1,
  ExposureMode_AutoExposure = 2,
  ExposureMode_UseVisualEnvironment = 3,
};

}
