#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428375C0
   RuntimeId:        04D6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B6A38
*/
enum FadeCurveType
{
  FadeCurveType_LinearAmplitude = 0,
  FadeCurveType_SineAmplitude = 1,
  FadeCurveType_LinearDecibel = 2,
};

}
