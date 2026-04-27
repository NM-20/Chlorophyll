#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/Online/BackendType.h>
#include <IcelinSdk.PvZGW2/Online/OnlineEnvironment.h>
#include <IcelinSdk.PvZGW2/Online/LogLevelType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858228
   RuntimeId:        19E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C9
   VfTable:          00000001422D5018
   Address (Base):   00000001430B4C60
*/
#pragma pack(push, 8)
class OnlineSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BackendType Backend; /* 0x0020 */
  BackendType PeerBackend; /* 0x0024 */
  OnlineEnvironment Environment; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class OnlineProviderAsset) Provider; /* 0x0030 */
  FB_STDARRAY(struct OnlinePlatformConfiguration) Platforms; /* 0x0038 */
  FB_CSTRING ServiceNameOverride; /* 0x0040 */
  LogLevelType LogLevel; /* 0x0048 */
  FB_INT32 BlazeLogLevel; /* 0x004C */
  FB_INT32 DirtySockLogLevel; /* 0x0050 */
  char pad_0054[0x0004];
  FB_HANDLE(class OnlineRichPresenceData) RichPresenceData; /* 0x0058 */
  FB_HANDLE(class LicenseConfiguration) LicenseConfig; /* 0x0060 */
  FB_CSTRING Region; /* 0x0068 */
  FB_CSTRING Country; /* 0x0070 */
  FB_CSTRING PingSite; /* 0x0078 */
  FB_CSTRING MatchmakingToken; /* 0x0080 */
  FB_CSTRING MatchmakingTokenSuffix; /* 0x0088 */
  FB_CSTRING MatchmakingTokenPatchSuffix; /* 0x0090 */
  FB_UINT32 NegativeUserCacheRefreshPeriod; /* 0x0098 */
  char pad_009C[0x0004];
  FB_CSTRING ServerLoginEmail; /* 0x00A0 */
  FB_CSTRING ServerLoginPassword; /* 0x00A8 */
  FB_CSTRING ServerLoginPersonaName; /* 0x00B0 */
  FB_INT32 BlazeServerConnectionTimeout; /* 0x00B8 */
  FB_INT32 BlazeServerTimeout; /* 0x00BC */
  FB_INT32 BlazeClientConnectionTimeout; /* 0x00C0 */
  FB_INT32 BlazeClientTimeout; /* 0x00C4 */
  FB_INT32 BlazeClientSettingsRetryTime; /* 0x00C8 */
  FB_INT32 PeerPort; /* 0x00CC */
  FB_UINT32 BlazeCachedUserRefreshInterval; /* 0x00D0 */
  FB_INT32 DirtySockServerPacketQueueCapacity; /* 0x00D4 */
  FB_CSTRING TrustedLoginCertFilename; /* 0x00D8 */
  FB_CSTRING TrustedLoginKeyFilename; /* 0x00E0 */
  FB_UINT32 MinPlayerCapacity; /* 0x00E8 */
  FB_BOOLEAN AssertOnPresenceRequestFailures; /* 0x00EC */
  FB_BOOLEAN ClientIsPresenceEnabled; /* 0x00ED */
  FB_BOOLEAN ServerIsPresenceEnabled; /* 0x00EE */
  FB_BOOLEAN IsSecure; /* 0x00EF */
  FB_BOOLEAN EnableQoS; /* 0x00F0 */
  FB_BOOLEAN ServerIsReconfigurable; /* 0x00F1 */
  FB_BOOLEAN SupportHostMigration; /* 0x00F2 */
  FB_BOOLEAN ServerAllowAnyReputation; /* 0x00F3 */
  FB_BOOLEAN EnableGamegroupInvites; /* 0x00F4 */
  FB_BOOLEAN IsTrialMode; /* 0x00F5 */
  FB_BOOLEAN EnableNucleusLtOverride; /* 0x00F6 */
  char pad_00F7[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F8 */
#pragma pack(pop)

static_assert(sizeof(OnlineSettings) == 248);

}
