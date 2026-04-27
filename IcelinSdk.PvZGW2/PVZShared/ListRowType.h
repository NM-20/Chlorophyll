#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871C80
   RuntimeId:        2AC9
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C16E8
*/
enum ListRowType
{
  ListRowType_Invalid = 0,
  ListRowType_LabelSingle = 1,
  ListRowType_Toggle = 2,
  ListRowType_ToggleWithLabel = 3,
  ListRowType_Slider = 4,
  ListRowType_Dynamic = 5,
  ListRowType_Basic = 6,
};

}
