#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIConnectionEntity1ButtonPopup.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIConnectionEntity2ButtonPopup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870988
   RuntimeId:        29D1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A4D
   VfTable:          000000014236D2F8
   Address (Base):   00000001430E3DC0
*/
#pragma pack(push, 8)
class UIConnectionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  UIConnectionEntity1ButtonPopup PopupNotSignedInToLive; /* 0x0020 */
  UIConnectionEntity1ButtonPopup PopupNotSignedInToPSN; /* 0x0038 */
  UIConnectionEntity2ButtonPopup PopupNotSignedInToOrigin; /* 0x0050 */
  UIConnectionEntity1ButtonPopup PopupNewUpdateExists; /* 0x0070 */
  UIConnectionEntity1ButtonPopup PopupAuthCodeFailed; /* 0x0088 */
  UIConnectionEntity1ButtonPopup PopupConnectionFailed; /* 0x00A0 */
  UIConnectionEntity1ButtonPopup PopupDuplicateLogin; /* 0x00B8 */
  UIConnectionEntity1ButtonPopup PopupInvalidUser; /* 0x00D0 */
  UIConnectionEntity1ButtonPopup PopupLoginCancelled; /* 0x00E8 */
  UIConnectionEntity2ButtonPopup PopupLoginCancelledSkippable; /* 0x0100 */
  UIConnectionEntity2ButtonPopup PopupGuestUserWarning; /* 0x0120 */
  UIConnectionEntity1ButtonPopup PopupGuestUserError; /* 0x0140 */
  UIConnectionEntity1ButtonPopup PopupMissingOnlineAccess; /* 0x0158 */
  UIConnectionEntity1ButtonPopup PopupNeedUserInteraction; /* 0x0170 */
  UIConnectionEntity1ButtonPopup PopupNetworkDisconnect; /* 0x0188 */
  UIConnectionEntity1ButtonPopup PopupNetworkError; /* 0x01A0 */
  UIConnectionEntity1ButtonPopup PopupNoMultiplayerPrivilege; /* 0x01B8 */
  UIConnectionEntity1ButtonPopup PopupOriginStartupFailed; /* 0x01D0 */
  UIConnectionEntity1ButtonPopup PopupServerConfiguration; /* 0x01E8 */
  UIConnectionEntity1ButtonPopup PopupServerDisconnect; /* 0x0200 */
  UIConnectionEntity1ButtonPopup PopupTimeout; /* 0x0218 */
  UIConnectionEntity1ButtonPopup PopupTooYoung; /* 0x0230 */
  UIConnectionEntity1ButtonPopup PopupUserChanged; /* 0x0248 */
  UIConnectionEntity1ButtonPopup PopupServerNotFound; /* 0x0260 */
  UIConnectionEntity1ButtonPopup PopupBanned; /* 0x0278 */
  UIConnectionEntity1ButtonPopup PopupDefaultError; /* 0x0290 */
  UIConnectionEntity1ButtonPopup PopupNotSignedInToLive_SplitScreen; /* 0x02A8 */
  UIConnectionEntity1ButtonPopup PopupNotSignedInToPSN_SplitScreen; /* 0x02C0 */
  UIConnectionEntity2ButtonPopup PopupNotSignedInToOrigin_SplitScreen; /* 0x02D8 */
  UIConnectionEntity1ButtonPopup PopupNewUpdateExists_SplitScreen; /* 0x02F8 */
  UIConnectionEntity1ButtonPopup PopupAuthCodeFailed_SplitScreen; /* 0x0310 */
  UIConnectionEntity1ButtonPopup PopupConnectionFailed_SplitScreen; /* 0x0328 */
  UIConnectionEntity1ButtonPopup PopupDuplicateLogin_SplitScreen; /* 0x0340 */
  UIConnectionEntity1ButtonPopup PopupInvalidUser_SplitScreen; /* 0x0358 */
  UIConnectionEntity1ButtonPopup PopupLoginCancelled_SplitScreen; /* 0x0370 */
  UIConnectionEntity2ButtonPopup PopupLoginCancelledSkippable_SplitScreen; /* 0x0388 */
  UIConnectionEntity2ButtonPopup PopupGuestUserWarning_SplitScreen; /* 0x03A8 */
  UIConnectionEntity1ButtonPopup PopupGuestUserError_SplitScreen; /* 0x03C8 */
  UIConnectionEntity1ButtonPopup PopupMissingOnlineAccess_SplitScreen; /* 0x03E0 */
  UIConnectionEntity1ButtonPopup PopupNeedUserInteraction_SplitScreen; /* 0x03F8 */
  UIConnectionEntity1ButtonPopup PopupNetworkDisconnect_SplitScreen; /* 0x0410 */
  UIConnectionEntity1ButtonPopup PopupNetworkError_SplitScreen; /* 0x0428 */
  UIConnectionEntity1ButtonPopup PopupNoMultiplayerPrivilege_SplitScreen; /* 0x0440 */
  UIConnectionEntity1ButtonPopup PopupOriginStartupFailed_SplitScreen; /* 0x0458 */
  UIConnectionEntity1ButtonPopup PopupServerConfiguration_SplitScreen; /* 0x0470 */
  UIConnectionEntity1ButtonPopup PopupServerDisconnect_SplitScreen; /* 0x0488 */
  UIConnectionEntity1ButtonPopup PopupTimeout_SplitScreen; /* 0x04A0 */
  UIConnectionEntity1ButtonPopup PopupTooYoung_SplitScreen; /* 0x04B8 */
  UIConnectionEntity1ButtonPopup PopupUserChanged_SplitScreen; /* 0x04D0 */
  UIConnectionEntity1ButtonPopup PopupServerNotFound_SplitScreen; /* 0x04E8 */
  UIConnectionEntity1ButtonPopup PopupBanned_SplitScreen; /* 0x0500 */
  UIConnectionEntity1ButtonPopup PopupDefaultError_SplitScreen; /* 0x0518 */
  UIConnectionEntity2ButtonPopup PopupServerNotFound_PC; /* 0x0530 */
  UIConnectionEntity2ButtonPopup PopupServerNotFound_SplitScreen_PC; /* 0x0550 */
  FB_HANDLE(class ProfileOptionData) TelemetryOption; /* 0x0570 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0578 */
#pragma pack(pop)

static_assert(sizeof(UIConnectionEntityData) == 1400);

}
