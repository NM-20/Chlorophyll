#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C720
   RuntimeId:        1058
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B68D8
*/
enum UIScreenRenderingPass
{
  UIScreenRenderingPass_RenderTarget = 0,
  UIScreenRenderingPass_World = 1,
  UIScreenRenderingPass_AboveFlash = 2,
  UIScreenRenderingPass_BelowFlash = 3,
  UIScreenRenderingPass_Dialog = 4,
  UIScreenRenderingPass_Count = 5,
};

}
