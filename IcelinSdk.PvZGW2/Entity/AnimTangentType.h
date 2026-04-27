#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BFF0
   RuntimeId:        0976
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB7C0
*/
enum AnimTangentType
{
  kTangentFixed = 0,
  kTangentLinear = 1,
  kTangentFlat = 2,
  kTangentStep = 3,
  kTangentStepNext = 4,
  kTangentSlow = 5,
  kTangentFast = 6,
  kTangentSmooth = 7,
  kTangentClamped = 8,
};

}
