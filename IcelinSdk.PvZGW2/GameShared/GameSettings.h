#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/GameShared/LogFileCollisionMode.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/GameShared/SKU.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AD08
   RuntimeId:        0EEB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C5
   VfTable:          0000000142262DB8
   Address (Base):   00000001430B4890
*/
#pragma pack(push, 8)
class GameSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxPlayerCount; /* 0x0020 */
  FB_UINT32 MaxSpectatorCount; /* 0x0024 */
  FB_UINT32 MinPlayerCountElimination; /* 0x0028 */
  LogFileCollisionMode LogFileCollisionMode; /* 0x002C */
  FB_UINT32 LogFileRotationHistoryLength; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING Level; /* 0x0038 */
  FB_CSTRING StartPoint; /* 0x0040 */
  FB_REFARRAY(class InputConfigurationAsset) InputConfiguration; /* 0x0048 */
  FB_CSTRING ActiveGameModeViewDefinition; /* 0x0050 */
  FB_REFARRAY(class GameModeViewDefinition) GameModeViewDefinitions; /* 0x0058 */
  TeamId DefaultTeamId; /* 0x0060 */
  FB_UINT32 PS3ContentRatingAge; /* 0x0064 */
  FB_UINT32 LogHistory; /* 0x0068 */
  char pad_006C[0x0004];
  FB_HANDLE(class VersionData) Version; /* 0x0070 */
  FB_HANDLE(class SubWorldInclusion) LayerInclusionTable; /* 0x0078 */
  FB_CSTRING DefaultLayerInclusion; /* 0x0080 */
  FB_FLOAT32 TimeBeforeSpawnIsAllowed; /* 0x0088 */
  FB_FLOAT32 LevelWarmUpTime; /* 0x008C */
  FB_FLOAT32 TimeToWaitForQuitTaskCompletion; /* 0x0090 */
  char pad_0094[0x0004];
  FB_HANDLE(class PlayerData) Player; /* 0x0098 */
  FB_HANDLE(class DifficultyDatas) DifficultySettings; /* 0x00A0 */
  FB_INT32 DifficultyIndex; /* 0x00A8 */
  SKU CurrentSKU; /* 0x00AC */
  FB_REFARRAY(class GameSettingsComponent) GameSettingsComponents; /* 0x00B0 */
  FB_BOOLEAN LogFileEnable; /* 0x00B8 */
  FB_BOOLEAN ResourceRefreshAlwaysAllowed; /* 0x00B9 */
  FB_BOOLEAN SpawnMaxLocalPlayersOnStartup; /* 0x00BA */
  FB_BOOLEAN UseSpeedBasedDetailedCollision; /* 0x00BB */
  FB_BOOLEAN UseSingleWeaponSelector; /* 0x00BC */
  FB_BOOLEAN AutoAimEnabled; /* 0x00BD */
  FB_BOOLEAN HasUnlimitedAmmo; /* 0x00BE */
  FB_BOOLEAN HasUnlimitedMags; /* 0x00BF */
  FB_BOOLEAN RotateLogs; /* 0x00C0 */
  FB_BOOLEAN AdjustVehicleCenterOfMass; /* 0x00C1 */
  FB_BOOLEAN AimAssistEnabled; /* 0x00C2 */
  FB_BOOLEAN AimAssistUsePolynomials; /* 0x00C3 */
  FB_BOOLEAN ForceFreeStreaming; /* 0x00C4 */
  FB_BOOLEAN ForceDisableFreeStreaming; /* 0x00C5 */
  FB_BOOLEAN IsGodMode; /* 0x00C6 */
  FB_BOOLEAN IsJesusMode; /* 0x00C7 */
  FB_BOOLEAN IsJesusModeAi; /* 0x00C8 */
  FB_BOOLEAN GameAdministrationEnabled; /* 0x00C9 */
  FB_BOOLEAN AllowDestructionOutsideCombatArea; /* 0x00CA */
  char pad_00CB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(GameSettings) == 208);

}
