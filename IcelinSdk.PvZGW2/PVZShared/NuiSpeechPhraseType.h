#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861E48
   RuntimeId:        1FF7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B97C0
*/
enum NuiSpeechPhraseType
{
  NuiSpeechPhraseType_InputAction = 0,
  NuiSpeechPhraseType_Commorose = 1,
  NuiSpeechPhraseType_FocusPoint = 2,
  NuiSpeechPhraseType_Entity = 3,
  NuiSpeechPhraseType_Direct = 4,
  NuiSpeechPhraseType_DataSet = 5,
  NuiSpeechPhraseType_CommanderComplex = 6,
  NuiSpeechPhraseType_Count = 7,
};

}
