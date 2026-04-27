#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428335E8
   RuntimeId:        0119
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B4AB8
*/
enum QualityLevel
{
  QualityLevel_Low = 0,
  QualityLevel_Medium = 1,
  QualityLevel_High = 2,
  QualityLevel_Ultra = 3,
  QualityLevel_All = 4,
  QualityLevel_Invalid = 5,
};

}
