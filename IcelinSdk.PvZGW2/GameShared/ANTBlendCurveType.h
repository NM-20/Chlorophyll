#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D120
   RuntimeId:        10DB
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BADA0
*/
enum ANTBlendCurveType
{
  ANTBlendCurveType_SnapIn = 0,
  ANTBlendCurveType_SnapOut = 1,
  ANTBlendCurveType_LinearIn = 2,
  ANTBlendCurveType_LinearOut = 3,
  ANTBlendCurveType_EaseIn = 4,
  ANTBlendCurveType_EaseOut = 5,
  ANTBlendCurveType_Custom = 6,
};

}
