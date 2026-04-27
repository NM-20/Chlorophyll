#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/OnlineSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/BugSentryOnlineSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/TelemetryOnlineSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/PingSiteSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/GameBrowserConfig.h>
#include <IcelinSdk.PvZGW2/PVZShared/TelemetryPinSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/MandatedVersionSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/BlazeClientBlackMarketManagerSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/BlazeClientNotificationManagerSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868890
   RuntimeId:        23FD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11CA
   VfTable:          000000014234EA28
   Address (Base):   00000001430B55B0
*/
#pragma pack(push, 8)
class PVZOnlineSettings : public OnlineSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ClientGameConfigurationOverride; /* 0x00F8 */
  FB_REFARRAY(class EntitlementQuery) EntitlementQueries; /* 0x0100 */
  FB_CSTRING RequestedSettings; /* 0x0108 */
  FB_INT32 QueueCapacityOverride; /* 0x0110 */
  FB_UINT32 PingPeriod; /* 0x0114 */
  BugSentryOnlineSettings BugSentrySettings; /* 0x0118 */
  TelemetryOnlineSettings TelemetrySettings; /* 0x0140 */
  FB_INT32 GameReportInterval; /* 0x01E8 */
  char pad_01EC[0x0004];
  FB_STDARRAY(struct GameInteractionKillSwitch) OnlineGameInteractionKillSwitchList; /* 0x01F0 */
  PingSiteSettings PingSiteSettings; /* 0x01F8 */
  GameBrowserConfig GameBrowser; /* 0x0200 */
  char pad_020C[0x0004];
  FB_CSTRING PurchaseCoinsButtonLicenseOverride; /* 0x0210 */
  FB_CSTRING TrialModePurchaseId; /* 0x0218 */
  FB_FLOAT32 MaxTrialTime; /* 0x0220 */
  FB_FLOAT32 TrialTimeDataPollTime; /* 0x0224 */
  FB_FLOAT32 TrialTimeDataStartTime; /* 0x0228 */
  char pad_022C[0x0004];
  FB_CSTRING TrialModeExpiredLicenseString; /* 0x0230 */
  FB_FLOAT32 TrialModeTimeModifier; /* 0x0238 */
  char pad_023C[0x0004];
  TelemetryPinSettings TelemetryPinSettings; /* 0x0240 */
  MandatedVersionSettings MandatedVersion; /* 0x0280 */
  BlazeClientBlackMarketManagerSettings BlazeClientBlackMarketManager; /* 0x028C */
  BlazeClientNotificationManagerSettings BlazeClientNotificationManager; /* 0x0298 */
  FB_BOOLEAN FairFightEnabled; /* 0x02A8 */
  FB_BOOLEAN DisableMiniGameBrowserAutoUpdate; /* 0x02A9 */
  FB_BOOLEAN PackExternalPurchasesKillSwitch; /* 0x02AA */
  FB_BOOLEAN KickPlayerOnStatsDownloadFailure; /* 0x02AB */
  FB_BOOLEAN OnlineGameInteractionMasterKillSwitch; /* 0x02AC */
  FB_BOOLEAN PurchaseCoinsButtonEnabled; /* 0x02AD */
  FB_BOOLEAN ForceDisableTrial; /* 0x02AE */
  FB_BOOLEAN ForceEndTrial; /* 0x02AF */
  FB_BOOLEAN TrialComingSoon; /* 0x02B0 */
  char pad_02B1[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02B8 */
#pragma pack(pop)

static_assert(sizeof(PVZOnlineSettings) == 696);

}
