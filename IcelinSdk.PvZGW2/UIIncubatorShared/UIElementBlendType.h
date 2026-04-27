#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876758
   RuntimeId:        2DD5
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7C40
*/
enum UIElementBlendType
{
  UIElementBlendType_Solid = 0,
  UIElementBlendType_AlphaBlend = 1,
  UIElementBlendType_Additive = 2,
  UIElementBlendType_Subtract = 3,
  UIElementBlendType_Multiply = 4,
  UIElementBlendType_Lighten = 5,
  UIElementBlendType_Darken = 6,
  UIElementBlendType_Difference = 7,
  UIElementBlendType_Erase = 8,
  UIElementBlendType_PreMultiply = 9,
  UIElementBlendType_AlphaBlendNonAdditive = 10,
  UIElementBlendType_Count = 11,
};

}
