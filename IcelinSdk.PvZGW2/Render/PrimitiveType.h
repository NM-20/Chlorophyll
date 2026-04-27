#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428523D0
   RuntimeId:        1566
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8708
*/
enum PrimitiveType
{
  PrimitiveType_PointList = 0,
  PrimitiveType_LineList = 1,
  PrimitiveType_LineStrip = 2,
  PrimitiveType_TriangleList = 3,
  PrimitiveType_TriangleStrip = 5,
  PrimitiveType_QuadList = 7,
  PrimitiveType_RectList = 8,
  PrimitiveType_TrianglePatch = 9,
  PrimitiveTypeCount = 10,
};

}
