#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameAIWeaponData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428745A8
   RuntimeId:        2C64
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0692
   VfTable:          0000000142378778
   Address (Base):   0000000143104050
*/
#pragma pack(push, 8)
class AIWeaponData : public GameAIWeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DamageScale; /* 0x0018 */
  FB_INT32 WeaponSet; /* 0x001C */
  FB_FLOAT32 Urgency; /* 0x0020 */
  FB_FLOAT32 MinRange; /* 0x0024 */
  FB_FLOAT32 MaxRange; /* 0x0028 */
  FB_FLOAT32 WeaponSelectionChance; /* 0x002C */
  FB_FLOAT32 OptimalRangePercentage; /* 0x0030 */
  FB_FLOAT32 ChargeShotChance; /* 0x0034 */
  FB_HANDLE(class PressureControl) PressureControl; /* 0x0038 */
  FB_HANDLE(class BurstControl) BurstControl; /* 0x0040 */
  FB_HANDLE(class AimerSettings) AimerSettings; /* 0x0048 */
  FB_HANDLE(class InaccuracySettings) InaccuracySettings; /* 0x0050 */
  FB_HANDLE(class SprayPattern) SprayPattern; /* 0x0058 */
  FB_HANDLE(class MovementControl) MovementControl; /* 0x0060 */
  FB_HANDLE(class DifficultyControl) DifficultyControl; /* 0x0068 */
  FB_BOOLEAN IsAiAllowed; /* 0x0070 */
  FB_BOOLEAN VisibilityRequiredToEquip; /* 0x0071 */
  FB_BOOLEAN IsMelee; /* 0x0072 */
  FB_BOOLEAN MustFire; /* 0x0073 */
  FB_BOOLEAN OnGroundOnly; /* 0x0074 */
  FB_BOOLEAN TargetOnGroundOnly; /* 0x0075 */
  char pad_0076[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(AIWeaponData) == 120);

}
