#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852410
   RuntimeId:        156A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C86C8
*/
enum RenderBlendMode
{
  RenderBlendMode_Zero = 0,
  RenderBlendMode_Source1Alpha = 15,
  RenderBlendMode_InvSource1Color = 14,
  RenderBlendMode_Source1Color = 13,
  RenderBlendMode_InvConstant = 12,
  RenderBlendMode_Constant = 11,
  RenderBlendMode_SourceAlphaSaturate = 10,
  RenderBlendMode_InvDestAlpha = 9,
  RenderBlendMode_DestAlpha = 8,
  RenderBlendMode_InvDestColor = 7,
  RenderBlendMode_DestColor = 6,
  RenderBlendMode_InvSourceAlpha = 5,
  RenderBlendMode_SourceAlpha = 4,
  RenderBlendMode_InvSourceColor = 3,
  RenderBlendMode_SourceColor = 2,
  RenderBlendMode_One = 1,
  RenderBlendMode_InvSource1Alpha = 16,
  RenderBlendModeCount = 17,
};

}
