#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428765F8
   RuntimeId:        2DCB
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7C80
*/
enum UITextEntryType
{
  UITextEntryType_Passthrough = 0,
  UITextEntryType_DataKey = 1,
  UITextEntryType_PropertyInt = 2,
  UITextEntryType_PropertyFloat = 3,
  UITextEntryType_PropertyBool = 4,
  UITextEntryType_PropertyString = 5,
  UITextEntryType_PropertyTransform = 6,
  UITextEntryType_PropertyVec3 = 7,
  UITextEntryType_PropertyVec4 = 8,
};

}
