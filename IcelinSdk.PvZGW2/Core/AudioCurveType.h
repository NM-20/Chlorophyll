#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832DF0
   RuntimeId:        00D2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC6E0
*/
enum AudioCurveType
{
  AudioCurveType_Spline = 0,
  AudioCurveType_Smooth = 1,
  AudioCurveType_Linear = 2,
  AudioCurveType_NearestValue = 3,
};

}
