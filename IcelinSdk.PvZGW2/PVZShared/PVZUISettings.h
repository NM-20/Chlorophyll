#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A210
   RuntimeId:        2559
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E9
   VfTable:          000000014235B490
   Address (Base):   00000001430BCD30
*/
#pragma pack(push, 8)
class PVZUISettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING MetaDataAssetPath; /* 0x0020 */
  FB_CSTRING LoadingTransitionTexturePath; /* 0x0028 */
  FB_CSTRING SavingTransitionTexturePath; /* 0x0030 */
  FB_CSTRING BackgroundTransitionTexturePath; /* 0x0038 */
  FB_CSTRING PopupPath; /* 0x0040 */
  FB_CSTRING ObjectTagDataPath; /* 0x0048 */
  FB_CSTRING IMSettingsPath; /* 0x0050 */
  FB_INT32 PreviewWatermarkDelayTime; /* 0x0058 */
  FB_FLOAT32 PreviewWatermarkBackingAlpha; /* 0x005C */
  FB_FLOAT32 PreviewWatermarkNameAlpha; /* 0x0060 */
  FB_INT32 BackgroundTransitionId; /* 0x0064 */
  FB_STDARRAY(FB_UINT32) AppearanceCategoriesOrder; /* 0x0068 */
  FB_FLOAT32 LoadingIconPosX; /* 0x0070 */
  FB_FLOAT32 LoadingIconPosY; /* 0x0074 */
  FB_FLOAT32 SavingIconPosX; /* 0x0078 */
  FB_FLOAT32 SavingIconPosY; /* 0x007C */
  FB_INT32 GameModeIndex; /* 0x0080 */
  FB_INT32 LevelIndex; /* 0x0084 */
  FB_INT32 CoopLevelIndex; /* 0x0088 */
  FB_INT32 DifficultyIndex; /* 0x008C */
  FB_BOOLEAN UseRimeFrontend; /* 0x0090 */
  FB_BOOLEAN PauseShowReturnToHUB; /* 0x0091 */
  FB_BOOLEAN PauseShowSwitchTeams; /* 0x0092 */
  FB_BOOLEAN PauseShowInviteFriends; /* 0x0093 */
  FB_BOOLEAN PauseShowDebugOptions; /* 0x0094 */
  FB_BOOLEAN PauseShowRespawn; /* 0x0095 */
  FB_BOOLEAN PauseShowLeaveParty; /* 0x0096 */
  FB_BOOLEAN PauseShowDisbandGroup; /* 0x0097 */
  FB_BOOLEAN IsPauseEnabled; /* 0x0098 */
  FB_BOOLEAN DisableObjectiveMovies; /* 0x0099 */
  FB_BOOLEAN BootflowVideosEnabled; /* 0x009A */
  FB_BOOLEAN AlwaysShowObjectTagForHumanPlayers; /* 0x009B */
  FB_BOOLEAN ShowBETAWatermark; /* 0x009C */
  FB_BOOLEAN ShowPreviewBuildWatermark; /* 0x009D */
  FB_BOOLEAN CommerceShowCoinPackName; /* 0x009E */
  char pad_009F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PVZUISettings) == 160);

}
