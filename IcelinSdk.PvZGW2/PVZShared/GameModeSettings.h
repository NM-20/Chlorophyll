#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428619F0
   RuntimeId:        1FBD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11DF
   VfTable:          00000001423442B8
   Address (Base):   00000001430B4A60
*/
#pragma pack(push, 8)
class GameModeSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GameModeConfiguration) GameModeConfiguration; /* 0x0020 */
  FB_INT32 RushInstantCaptureUpToFlag; /* 0x0028 */
  FB_UINT32 CapturePointShowDebugInfo; /* 0x002C */
  FB_UINT32 MaxSelfRevives; /* 0x0030 */
  FB_UINT32 TeamVanquishKillCount; /* 0x0034 */
  FB_FLOAT32 ForceRespawnManDownTime; /* 0x0038 */
  FB_FLOAT32 SkipManDownTime; /* 0x003C */
  FB_INT32 OverrideRoundStartPlayerCount; /* 0x0040 */
  FB_UINT32 StoredDifficultyIndex; /* 0x0044 */
  FB_INT32 SkipSpawnScreenClassIndex; /* 0x0048 */
  FB_INT32 SkipSpawnScreenCostumeIndex; /* 0x004C */
  FB_FLOAT32 SkipSpawnRandomCostumes_UnrevivableAliveTimeThreshold; /* 0x0050 */
  FB_INT32 ForceHUBMissionPlants; /* 0x0054 */
  FB_INT32 ForceHUBMissionZombies; /* 0x0058 */
  FB_INT32 ForceKOTHWave; /* 0x005C */
  FB_CSTRING ForceHUBTimeOfDay; /* 0x0060 */
  FB_CSTRING HUBOverrideAISpawningID; /* 0x0068 */
  FB_FLOAT32 HUBUnderworldChallengeTimer; /* 0x0070 */
  FB_INT32 CommunityMeterForceScore; /* 0x0074 */
  FB_UINT32 MaxSimultaniousMinionHealers; /* 0x0078 */
  FB_UINT32 MaxSimultaniousHeroHealers; /* 0x007C */
  FB_UINT32 MaxSimultaniousBossHealers; /* 0x0080 */
  FB_UINT32 MaxSquadSize; /* 0x0084 */
  FB_UINT32 LocalPlayMaxBotsPerTeam; /* 0x0088 */
  FB_UINT32 LocalPlaySelectedAICharacterSetZombiesUnlockId; /* 0x008C */
  FB_UINT32 LocalPlaySelectedAICharacterSetPlantsUnlockId; /* 0x0090 */
  char pad_0094[0x0004];
  FB_STDARRAY(struct TeamColor) TeamHighlightColors; /* 0x0098 */
  FB_CSTRING CrazyOptionsDataPath; /* 0x00A0 */
  FB_CSTRING AvailableCostumes; /* 0x00A8 */
  FB_CSTRING GW1AvailableCostumes; /* 0x00B0 */
  FB_FLOAT32 CrazyOption_TimeBomb_FullTimer; /* 0x00B8 */
  FB_FLOAT32 CrazyOption_TimeBomb_ShortTimer; /* 0x00BC */
  FB_FLOAT32 CrazyOption_TimeBomb_BumpTime; /* 0x00C0 */
  FB_FLOAT32 CrazyOptionsGlobalScoreModifier; /* 0x00C4 */
  FB_INT32 ModeTeamId; /* 0x00C8 */
  char pad_00CC[0x0004];
  FB_CSTRING SplashToLevel; /* 0x00D0 */
  FB_CSTRING SplashToLevelInclusion; /* 0x00D8 */
  FB_INT32 AttackingTeamId; /* 0x00E0 */
  FB_INT32 EndlessSkipToWaveIndex; /* 0x00E4 */
  FB_INT32 EndlessSkipIndexMax; /* 0x00E8 */
  FB_INT32 FakeEndlessMaxWaveCompleted; /* 0x00EC */
  FB_INT32 PlantsThreatLevel; /* 0x00F0 */
  FB_INT32 ZombieThreatLevel; /* 0x00F4 */
  FB_INT32 SeasonalQuestCooldownTime; /* 0x00F8 */
  FB_UINT32 XPFishStarCost; /* 0x00FC */
  FB_FLOAT32 XPFishXPGrant; /* 0x0100 */
  FB_FLOAT32 PauseRespawnWaitTime; /* 0x0104 */
  FB_BOOLEAN SelfReviveEnabled; /* 0x0108 */
  FB_BOOLEAN BoastsEnabled; /* 0x0109 */
  FB_BOOLEAN EnableAIRevives; /* 0x010A */
  FB_BOOLEAN ShowAINametags; /* 0x010B */
  FB_BOOLEAN AlwaysShowNametags; /* 0x010C */
  FB_BOOLEAN UseCoopAIWeaponData; /* 0x010D */
  FB_BOOLEAN CountAIKills; /* 0x010E */
  FB_BOOLEAN RenderingHighlightAllCharacters; /* 0x010F */
  FB_BOOLEAN RenderingHighlightFriendlyCharacters; /* 0x0110 */
  FB_BOOLEAN E3StageDemo; /* 0x0111 */
  FB_BOOLEAN EnableCharacterSubRealms; /* 0x0112 */
  FB_BOOLEAN ShowTeamSwitchWarning; /* 0x0113 */
  FB_BOOLEAN UseInfiniteManDownTime; /* 0x0114 */
  FB_BOOLEAN SkipManDown; /* 0x0115 */
  FB_BOOLEAN AllowManualTeamSwitch; /* 0x0116 */
  FB_BOOLEAN Force1HpCharacterHealth; /* 0x0117 */
  FB_BOOLEAN UnlimitedPrimaryAmmo; /* 0x0118 */
  FB_BOOLEAN SkipPreroundCountdown; /* 0x0119 */
  FB_BOOLEAN SkipEOR; /* 0x011A */
  FB_BOOLEAN SkipSpawnRandomCostumes; /* 0x011B */
  FB_BOOLEAN DisableHUBAISpawns; /* 0x011C */
  FB_BOOLEAN ShowHUBAISpawningDebug; /* 0x011D */
  FB_BOOLEAN ForceEnableKOTH; /* 0x011E */
  FB_BOOLEAN SkipIntroHubNIS; /* 0x011F */
  FB_BOOLEAN ForceHUBCustomizeUnlock; /* 0x0120 */
  FB_BOOLEAN HUBAISpawnDebug; /* 0x0121 */
  FB_BOOLEAN HUBOverrideAISpawning; /* 0x0122 */
  FB_BOOLEAN HUBForceShowSplitScreenPortal; /* 0x0123 */
  FB_BOOLEAN HUBUnderworldOpenAllPortals; /* 0x0124 */
  FB_BOOLEAN ShowCommunityChallengeDebug; /* 0x0125 */
  FB_BOOLEAN ForceScoreOverride; /* 0x0126 */
  FB_BOOLEAN LocalPlayAIWaitForFirstPlayerToSpawn; /* 0x0127 */
  FB_BOOLEAN CrazyOption1; /* 0x0128 */
  FB_BOOLEAN CrazyOption2; /* 0x0129 */
  FB_BOOLEAN CrazyOption3; /* 0x012A */
  FB_BOOLEAN CrazyOption4; /* 0x012B */
  FB_BOOLEAN CrazyOption5; /* 0x012C */
  FB_BOOLEAN CrazyOption6; /* 0x012D */
  FB_BOOLEAN CrazyOption7; /* 0x012E */
  FB_BOOLEAN CrazyOption8; /* 0x012F */
  FB_BOOLEAN CrazyOption9; /* 0x0130 */
  FB_BOOLEAN QuickRegen; /* 0x0131 */
  FB_BOOLEAN HealingAuras; /* 0x0132 */
  FB_BOOLEAN Berserk; /* 0x0133 */
  FB_BOOLEAN IceCreamRain; /* 0x0134 */
  FB_BOOLEAN TacoPanic; /* 0x0135 */
  FB_BOOLEAN Salsa; /* 0x0136 */
  FB_BOOLEAN CheeseCapture; /* 0x0137 */
  FB_BOOLEAN NeutralGnomus; /* 0x0138 */
  FB_BOOLEAN CheeseTrap; /* 0x0139 */
  FB_BOOLEAN RushDelivery; /* 0x013A */
  FB_BOOLEAN FarewellTaco; /* 0x013B */
  FB_BOOLEAN HasSeenIntroVideo; /* 0x013C */
  FB_BOOLEAN IsGnomeSummonedCharacter; /* 0x013D */
  FB_BOOLEAN IsBETA; /* 0x013E */
  FB_BOOLEAN HasSeenESRBScreen; /* 0x013F */
  FB_BOOLEAN HasSeenForcedMailBox; /* 0x0140 */
  FB_BOOLEAN ForceDefaultCustomizations; /* 0x0141 */
  FB_BOOLEAN DebugSpawnNet; /* 0x0142 */
  char pad_0143[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0148 */
#pragma pack(pop)

static_assert(sizeof(GameModeSettings) == 328);

}
