#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870E68
   RuntimeId:        2A11
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8220
*/
enum PVZDebugCommands
{
  PVZUIDebugCommands_UILanguage = 0,
  PVZUIDebugCommands_PGListInterruptedPurchases = 20,
  PVZUIDebugCommands_PGResumeInterruptedPurchases = 21,
  PVZUIDebugCommands_PGAwardActiveChallenge = 22,
  PVZUIDebugCommands_PGSetPlayerLevel = 23,
  PVZUIDebugCommands_PGAddStarConsumable = 24,
  PVZUIDebugCommands_PGAddSelfReviveConsumable = 25,
  PVZUIDebugCommands_PGAddTeamReviveConsumable = 26,
  PVZUIDebugCommands_PGDeleteBytewaultRecord = 27,
  PVZUIDebugCommands_PGWipeStats = 28,
  PVZUIDebugCommands_IAMLOST = 29,
  PVZUIDebugCommands_PGAddCharacterXP = 30,
  PVZUIDebugCommands_PGSetXPModifier = 31,
  PVZUIDebugCommands_ExecuteConsoleCommand = 32,
  PVZUIDebugCommands_GPMissionIgnoreDependencies = 33,
  PVZUIDebugCommands_PGResetChests = 34,
  PVZUIDebugCommands_PGStopNextPurchaseBefore = 19,
  PVZUIDebugCommands_PGAddRainbowStarConsumable = 35,
  PVZUIDebugCommands_PGRedeemCode = 18,
  PVZUIDebugCommands_PGGrantAllInventory = 16,
  PVZUIDebugCommands_AIPathfinding = 1,
  PVZUIDebugCommands_AIKillAll = 2,
  PVZUIDebugCommands_AIPauseAI = 3,
  PVZUIDebugCommands_GPAddHealth = 4,
  PVZUIDebugCommands_GPTeleportToActiveObj = 5,
  PVZUIDebugCommands_GPTeleportToObj = 6,
  PVZUIDebugCommands_GPInstantCapture = 7,
  PVZUIDebugCommands_GPRushTimer = 8,
  PVZUIDebugCommands_GPJumpToWave = 9,
  PVZUIDebugCommands_GPShowPosition = 10,
  PVZUIDebugCommands_GPDisableAbilityCooldown = 11,
  PVZUIDebugCommands_GPDisablePreround = 12,
  PVZUIDebugCommands_PGAddCurrency = 13,
  PVZUIDebugCommands_PGWipeInventory = 14,
  PVZUIDebugCommands_PGShowHiddenPacks = 15,
  PVZUIDebugCommands_PGGrantUnopenedPacks = 17,
  PVZUIDebugCommands_PGSetMaxRank = 36,
};

}
