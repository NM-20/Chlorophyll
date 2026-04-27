#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428537E0
   RuntimeId:        1698
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7EA8
*/
enum ShaderDebugRenderMode
{
  ShaderDebugRenderMode_None = 0,
  ShaderDebugRenderMode_Overdraw = 1,
  ShaderDebugRenderMode_OverdrawDepthTest = 2,
  ShaderDebugRenderMode_ShaderCost = 3,
};

}
