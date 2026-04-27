#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A0D8
   RuntimeId:        2551
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C3608
*/
enum PVZUIPopupType
{
  PVZUIPopupType_MemCard = 0,
  PVZUIPopupType_PromoInfo = 19,
  PVZUIPopupType_COOPMatchmaking = 18,
  PVZUIPopupType_GameQueue = 17,
  PVZUIPopupType_Dynamic = 16,
  PVZUIPopupType_UpdateAvailable = 15,
  PVZUIPopupType_Origin = 14,
  PVZUIPopupType_OnlinePass = 13,
  PVZUIPopupType_IngamePlayer = 12,
  PVZUIPopupType_Invalid = 11,
  PVZUIPopupType_ManagePlayer = 10,
  PVZUIPopupType_Error = 9,
  PVZUIPopupType_ServerReminder = 8,
  PVZUIPopupType_Generic = 7,
  PVZUIPopupType_RevivePrompt = 6,
  PVZUIPopupType_PrivacyPolicy = 5,
  PVZUIPopupType_TermsOfService = 4,
  PVZUIPopupType_ParentalEmail = 3,
  PVZUIPopupType_Login = 2,
  PVZUIPopupType_ControllerDisconnected = 1,
  PVZUIPopupType_PlayStationPlus = 20,
  PVZUIPopupType_LicenseAdded = 21,
};

}
