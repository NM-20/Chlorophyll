#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852450
   RuntimeId:        156E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8688
*/
enum RenderWriteMask
{
  RenderWriteMask_Red = 1,
  RenderWriteMask_Green = 2,
  RenderWriteMask_Blue = 4,
  RenderWriteMask_Alpha = 8,
  RenderWriteMask_None = 0,
  RenderWriteMask_Color = 7,
  RenderWriteMask_All = 15,
};

}
