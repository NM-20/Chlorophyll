#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852490
   RuntimeId:        1572
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8648
*/
enum RenderDepthMode
{
  RenderDepthMode_Disabled = 0,
  RenderDepthMode_ReadOnly = 1,
  RenderDepthMode_ReadAndWrite = 2,
  RenderDepthMode_WriteOnly = 3,
  RenderDepthMode_ReadOnlyInverted = 4,
};

}
