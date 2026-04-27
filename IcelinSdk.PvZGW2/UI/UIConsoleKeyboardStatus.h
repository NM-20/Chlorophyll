#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854F00
   RuntimeId:        17E8
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7708
*/
enum UIConsoleKeyboardStatus
{
  UIConsoleKeyboardStatus_Success = 0,
  UIConsoleKeyboardStatus_Failed = 1,
  UIConsoleKeyboardStatus_Cancelled = 2,
  UIConsoleKeyboardStatus_Active = 3,
  UIConsoleKeyboardStatus_Inactive = 4,
  UIConsoleKeyboardStatus_Count = 5,
};

}
