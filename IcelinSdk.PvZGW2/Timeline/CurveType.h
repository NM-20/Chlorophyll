#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854BC8
   RuntimeId:        17AB
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9F80
*/
enum CurveType
{
  CurveType_Basic_Linear = 0,
  CurveType_Basic_Step = 1,
  CurveType_Basic_StepNext = 2,
  CurveType_Complex = 3,
};

}
