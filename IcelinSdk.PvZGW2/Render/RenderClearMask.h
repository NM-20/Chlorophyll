#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852470
   RuntimeId:        1570
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8668
*/
enum RenderClearMask
{
  RenderClearMask_Color0 = 1,
  RenderClearMask_Color1 = 2,
  RenderClearMask_Color2 = 4,
  RenderClearMask_Color3 = 8,
  RenderClearMask_Color4 = 16,
  RenderClearMask_Color5 = 32,
  RenderClearMask_Color6 = 64,
  RenderClearMask_Color7 = 128,
  RenderClearMask_Depth = 256,
  RenderClearMask_Stencil = 512,
  RenderClearMask_Color = 255,
  RenderClearMask_All = 1023,
  RenderClearMask_None = 0,
};

}
