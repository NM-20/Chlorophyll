#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832F78
   RuntimeId:        00DA
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC6A0
*/
enum MultiPointLineType
{
  MultiPointLineType_Linear = 0,
  MultiPointLineType_Reciprocal = 1,
  MultiPointLineType_InverseReciprocal = 2,
  MultiPointLineType_SCurve = 3,
  MultiPointLineType_Sine = 4,
  MultiPointLineType_Exponential = 5,
};

}
