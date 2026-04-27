#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F138
   RuntimeId:        128F
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA960
*/
enum CutsceneQualityLevel
{
  CutsceneQualityLevel_Invalid = -1,
  CutsceneQualityLevel_Low = 0,
  CutsceneQualityLevel_Medium = 1,
  CutsceneQualityLevel_High = 2,
  CutsceneQualityLevel_VeryHigh = 3,
  CutsceneQualityLevel_Uncompressed = 4,
};

}
