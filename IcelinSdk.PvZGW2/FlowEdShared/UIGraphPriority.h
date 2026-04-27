#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428571A8
   RuntimeId:        1999
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9BC0
*/
enum UIGraphPriority
{
  UIGraphPriority_Low = 0,
  UIGraphPriority_Normal = 1,
  UIGraphPriority_High = 2,
  UIGraphPriority_OverlayScreens = 3,
  UIGraphPriority_Critical = 4,
};

}
