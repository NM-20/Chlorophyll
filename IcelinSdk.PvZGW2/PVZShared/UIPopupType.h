#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A8F0
   RuntimeId:        25B3
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C3408
*/
enum UIPopupType
{
  PopupType_MemCard = 0,
  PopupType_StatsMigrationConfirmDecline = 24,
  PopupType_StatsMigrationConfirmAccept = 23,
  PopupType_StatsMigrationPrompt = 22,
  PopupType_LicenseAdded = 21,
  PopupType_BattlelogNotification = 20,
  PopupType_ItemRedeemed = 19,
  PopupType_Store = 18,
  PopupType_PromoInfo = 17,
  PopupType_COOPMatchmaking = 16,
  PopupType_GameQueue = 15,
  PopupType_Dynamic = 14,
  PopupType_StatsMigrationEndFlow = 25,
  PopupType_UpdateAvailable = 13,
  PopupType_IngamePlayer = 11,
  PopupType_Invalid = 10,
  PopupType_ManagePlayer = 9,
  PopupType_Error = 8,
  PopupType_ServerReminder = 7,
  PopupType_Generic = 6,
  PopupType_RevivePrompt = 5,
  PopupType_PrivacyPolicy = 4,
  PopupType_TermsOfService = 3,
  PopupType_Login = 2,
  PopupType_ControllerDisconnected = 1,
  PopupType_Origin = 12,
  PopupType_PlayStationPlus = 26,
};

}
