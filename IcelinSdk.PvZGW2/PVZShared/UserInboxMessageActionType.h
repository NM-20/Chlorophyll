#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869F48
   RuntimeId:        253B
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C3708
*/
enum UserInboxMessageActionType
{
  UserInboxMessageActionType_None = 0,
  UserInboxMessageActionType_Survey = 1,
  UserInboxMessageActionType_RetentionGift = 2,
  UserInboxMessageActionType_MigrateData = 3,
  UserInboxMessageActionType_RegularCardStore = 4,
  UserInboxMessageActionType_UpSell = 5,
  UserInboxMessageActionType_Max = 6,
};

}
