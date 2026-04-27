#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DAE8
   RuntimeId:        1163
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BACE0
*/
enum ViewDefinitionType
{
  ViewType_FullScreen = 0,
  ViewType_AutoVerticalSplit = 1,
  ViewType_AutoFullHorizontalSplit = 2,
  ViewType_AutoOffsetedHorizontalSplit = 3,
  ViewType_AutoQuadrant = 4,
  ViewType_Custom = 5,
};

}
