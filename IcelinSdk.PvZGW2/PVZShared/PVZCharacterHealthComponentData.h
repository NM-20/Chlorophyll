#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862F50
   RuntimeId:        20D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D11
   VfTable:          0000000142354088
   Address (Base):   00000001430D4270
*/
#pragma pack(push, 16)
class PVZCharacterHealthComponentData : public CharacterHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 UnderWaterHoldBreathTime; /* 0x0080 */
  FB_FLOAT32 UnderWaterBreathRegenerationTime; /* 0x0084 */
  FB_STDARRAY(struct DamageEntryData) UnderWaterDamageTable; /* 0x0088 */
  FB_FLOAT32 UnderWaterClearSpottingTime; /* 0x0090 */
  char pad_0094[0x0004];
  FB_HANDLE(class PVZCharacterHealthComponentInputRestrictionAsset) SpawnRestrictedInput; /* 0x0098 */
  FB_FLOAT32 MaxHealHealth; /* 0x00A0 */
  char pad_00A4[0x0004];
  FB_STDARRAY(FB_FLOAT32) ReviveHealthMultipliers; /* 0x00A8 */
  FB_STDARRAY(struct HealthScaleThreshold) HealthScaleThresholds; /* 0x00B0 */
  FB_BOOLEAN IsHealable; /* 0x00B8 */
  FB_BOOLEAN DeathInSecondaryIsUnrevivable; /* 0x00B9 */
  char pad_00BA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterHealthComponentData) == 192);

}
