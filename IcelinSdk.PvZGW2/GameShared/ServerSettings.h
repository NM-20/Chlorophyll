#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B668
   RuntimeId:        0F6B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11CD
   VfTable:          0000000142268930
   Address (Base):   00000001430B58F0
*/
#pragma pack(push, 8)
class ServerSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING InstancePath; /* 0x0020 */
  FB_UINT32 RemoteControlPort; /* 0x0028 */
  FB_UINT32 MaxQueriesPerSecond; /* 0x002C */
  FB_CSTRING SavePoint; /* 0x0030 */
  FB_FLOAT32 TimeoutTime; /* 0x0038 */
  FB_UINT32 PlayerCountNeededForMultiplayer; /* 0x003C */
  FB_CSTRING DebugMenuClick; /* 0x0040 */
  FB_FLOAT32 LoadingTimeout; /* 0x0048 */
  FB_FLOAT32 IngameTimeout; /* 0x004C */
  FB_FLOAT32 OutgoingFrequency; /* 0x0050 */
  FB_UINT32 IncomingRate; /* 0x0054 */
  FB_UINT32 OutgoingRate; /* 0x0058 */
  char pad_005C[0x0004];
  FB_CSTRING Playlist; /* 0x0060 */
  FB_INT32 DedicatedServerCpu; /* 0x0068 */
  FB_UINT32 SaveGameVersion; /* 0x006C */
  FB_CSTRING ServerName; /* 0x0070 */
  FB_CSTRING ServerPassword; /* 0x0078 */
  FB_FLOAT32 VehicleSpawnDelayModifier; /* 0x0080 */
  FB_FLOAT32 RespawnTimeModifier; /* 0x0084 */
  FB_CSTRING AdministrationPassword; /* 0x0088 */
  FB_CSTRING RemoteAdministrationPort; /* 0x0090 */
  FB_BOOLEAN QueryProviderEnabled; /* 0x0098 */
  FB_BOOLEAN DebrisClusterEnabled; /* 0x0099 */
  FB_BOOLEAN VegetationEnabled; /* 0x009A */
  FB_BOOLEAN WaterPhysicsEnabled; /* 0x009B */
  FB_BOOLEAN IsDesertingAllowed; /* 0x009C */
  FB_BOOLEAN IsRenderDamageEvents; /* 0x009D */
  FB_BOOLEAN RespawnOnDeathPosition; /* 0x009E */
  FB_BOOLEAN IsStatsEnabled; /* 0x009F */
  FB_BOOLEAN IsNetworkStatsEnabled; /* 0x00A0 */
  FB_BOOLEAN IsAiEnabled; /* 0x00A1 */
  FB_BOOLEAN IsDestructionEnabled; /* 0x00A2 */
  FB_BOOLEAN IsSoldierAnimationEnabled; /* 0x00A3 */
  FB_BOOLEAN IsSoldierDetailedCollisionEnabled; /* 0x00A4 */
  FB_BOOLEAN LoadSavePoint; /* 0x00A5 */
  FB_BOOLEAN DisableCutscenes; /* 0x00A6 */
  FB_BOOLEAN HavokVisualDebugger; /* 0x00A7 */
  FB_BOOLEAN HavokCaptureToFile; /* 0x00A8 */
  FB_BOOLEAN ShowTriggerDebugText; /* 0x00A9 */
  FB_BOOLEAN TimeoutGame; /* 0x00AA */
  FB_BOOLEAN AILooksIntoCamera; /* 0x00AB */
  FB_BOOLEAN DeathmatchDebugInfo; /* 0x00AC */
  FB_BOOLEAN JobEnable; /* 0x00AD */
  FB_BOOLEAN ThreadingEnable; /* 0x00AE */
  FB_BOOLEAN DrawActivePhysicsObjects; /* 0x00AF */
  FB_BOOLEAN IsRanked; /* 0x00B0 */
  FB_BOOLEAN UnlockResolver; /* 0x00B1 */
  FB_BOOLEAN ScoringLogEnabled; /* 0x00B2 */
  FB_BOOLEAN ForcePlaylist; /* 0x00B3 */
  FB_BOOLEAN AutoUnspawnBangers; /* 0x00B4 */
  FB_BOOLEAN RegulatedAIThrottle; /* 0x00B5 */
  FB_BOOLEAN EnableAnimationCulling; /* 0x00B6 */
  FB_BOOLEAN FallBackToSquadSpawn; /* 0x00B7 */
  FB_BOOLEAN SaveGameUseProfileSaves; /* 0x00B8 */
  FB_BOOLEAN VehicleSpawnAllowed; /* 0x00B9 */
  FB_BOOLEAN AdministrationEnabled; /* 0x00BA */
  FB_BOOLEAN AdministrationLogEnabled; /* 0x00BB */
  FB_BOOLEAN AdministrationTimeStampLogNames; /* 0x00BC */
  FB_BOOLEAN AdministrationEventsEnabled; /* 0x00BD */
  FB_BOOLEAN AdministrationServerNameRestricted; /* 0x00BE */
  char pad_00BF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(ServerSettings) == 192);

}
