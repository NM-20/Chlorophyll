#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142841958
   RuntimeId:        0B30
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CBC88
*/
enum AdministrationEventType
{
  AdministrationEventType_Add = 0,
  AdministrationEventType_Remove = 1,
  AdministrationEventType_Clear = 2,
  AdministrationEventType_List = 3,
  AdministrationEventType_Load = 4,
  AdministrationEventType_Save = 5,
};

}
