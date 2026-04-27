#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862108
   RuntimeId:        2023
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9720
*/
enum ScreenActionInputEventType
{
  ScreenActionInputEventType_RuleRecognition = 0,
  ScreenActionInputEventType_CommoroseActivation = 1,
  ScreenActionInputEventType_CommoroseIndication = 2,
  ScreenActionInputEventType_Deploy = 3,
  ScreenActionInputEventType_CommanderAction = 4,
  ScreenActionInputEventType_CommanderTarget = 5,
  ScreenActionInputEventType_CommanderOther = 6,
  ScreenActionInputEventType_SystemSpeechCommand_OpenMenu = 7,
  ScreenActionInputEventType_SystemSpeechCommand_Play = 8,
  ScreenActionInputEventType_SystemSpeechCommand_Pause = 9,
  ScreenActionInputEventType_SystemSpeechCommand_ShowView = 10,
  ScreenActionInputEventType_SystemSpeechCommand_Back = 11,
  ScreenActionInputEventType_Count = 12,
};

}
