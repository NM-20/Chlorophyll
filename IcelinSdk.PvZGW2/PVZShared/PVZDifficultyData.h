#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DifficultyData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428644F8
   RuntimeId:        21E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F22
   VfTable:          00000001423527E0
   Address (Base):   00000001430BF890
*/
#pragma pack(push, 16)
class PVZDifficultyData : public DifficultyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 AIHealthModifier; /* 0x00C0 */
  FB_FLOAT32 AIVersusHumanDamageModifier; /* 0x00C4 */
  FB_FLOAT32 AIVersusPersistentAIDamageModifier; /* 0x00C8 */
  FB_FLOAT32 AttackerAIVersusHumanDamageModifier; /* 0x00CC */
  FB_FLOAT32 DefenderAIVersusHumanDamageModifier; /* 0x00D0 */
  FB_FLOAT32 AttackerAIVersusPersistentAIDamageModifier; /* 0x00D4 */
  FB_FLOAT32 DefenderAIVersusPersistentAIDamageModifier; /* 0x00D8 */
  FB_FLOAT32 MaxRegenerationHealthMultiplier; /* 0x00DC */
  FB_FLOAT32 MaxRegenerationHealthMultiplierIncrement; /* 0x00E0 */
  FB_FLOAT32 RegenerationRateMultiplier; /* 0x00E4 */
  FB_FLOAT32 RegenerationDelayMultiplier; /* 0x00E8 */
  FB_FLOAT32 PlayableTeamHealthModifier; /* 0x00EC */
  FB_FLOAT32 NonPlayableTeamHealthModifier; /* 0x00F0 */
  FB_FLOAT32 ZombieHealthModifier; /* 0x00F4 */
  FB_FLOAT32 PlantHealthModifier; /* 0x00F8 */
  char pad_00FC[0x0004];
  FB_HANDLE(class GameAIDifficultyData) AttackerAIData; /* 0x0100 */
  FB_HANDLE(class GameAIDifficultyData) DefenderAIData; /* 0x0108 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(PVZDifficultyData) == 272);

}
