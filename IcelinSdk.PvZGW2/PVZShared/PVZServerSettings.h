#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/GameShared/VoiceChannel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868910
   RuntimeId:        2405
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D4
   VfTable:          000000014234E910
   Address (Base):   00000001430BCE50
*/
#pragma pack(push, 8)
class PVZServerSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InActivityTimeOut; /* 0x0020 */
  FB_FLOAT32 ClientInActivityTimeOut; /* 0x0024 */
  FB_FLOAT32 ResetTimeInTeamInactivityTimeOut; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING PVZBlazePlaylist; /* 0x0030 */
  FB_UINT32 TeamSwitchImbalanceLimit; /* 0x0038 */
  FB_UINT32 GameSize; /* 0x003C */
  VoiceChannel DefaultVoiceChannel; /* 0x0040 */
  FB_INT32 DeathmatchFriendZoneFallbackCount; /* 0x0044 */
  FB_FLOAT32 TeamSwitchCooldownTime; /* 0x0048 */
  FB_INT32 ServerConfigurationRefreshInterval; /* 0x004C */
  FB_CSTRING OverrideServerConfigurationStartTime; /* 0x0050 */
  FB_BOOLEAN AutoBalance; /* 0x0058 */
  FB_BOOLEAN OverrideAutoBalance; /* 0x0059 */
  FB_BOOLEAN KickIdlePlayers; /* 0x005A */
  FB_BOOLEAN MapSequencerEnabled; /* 0x005B */
  FB_BOOLEAN PlaylistEnabled; /* 0x005C */
  char pad_005D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZServerSettings) == 96);

}
