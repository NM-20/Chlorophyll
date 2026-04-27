#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/PVZDifficultyGameType.h>
#include <IcelinSdk.PvZGW2/GameShared/Difficulty.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistenceGameType.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A5B8
   RuntimeId:        0E8C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F21
   VfTable:          0000000142266648
   Address (Base):   00000001430EDA20
*/
#pragma pack(push, 16)
class DifficultyData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZDifficultyGameType PVZDifficultyGameType; /* 0x0010 */
  Difficulty Difficulty; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 StickyBoxModifier; /* 0x0020 */
  Vec3 SnapBoxModifier; /* 0x0030 */
  FB_FLOAT32 ScoreMultiplier; /* 0x0040 */
  PersistenceGameType GameType; /* 0x0044 */
  FB_CSTRING ReadableName; /* 0x0048 */
  FB_FLOAT32 HumanHealthModifier; /* 0x0050 */
  FB_FLOAT32 FriendsHealthModifier; /* 0x0054 */
  FB_FLOAT32 EnemiesHealthModifier; /* 0x0058 */
  FB_FLOAT32 FriendlyDamageModifier; /* 0x005C */
  FB_FLOAT32 VehicleDamageModifier; /* 0x0060 */
  FB_FLOAT32 HumanInCriticalHealth; /* 0x0064 */
  FB_FLOAT32 HumanInCriticalHealthDamageModifier; /* 0x0068 */
  FB_FLOAT32 HumanRegenerationRateModifier; /* 0x006C */
  FB_FLOAT32 CriticalFakeImmortalModifier; /* 0x0070 */
  FB_FLOAT32 InteractiveManDownDamageModifier; /* 0x0074 */
  FB_FLOAT32 InteractiveManDownTimeMultiplier; /* 0x0078 */
  FB_FLOAT32 InteractiveManDownReviveTime; /* 0x007C */
  FB_INT32 AdrenalineKillLimit; /* 0x0080 */
  Vec2 AttractDistanceFallOffModifier; /* 0x0084 */
  FB_FLOAT32 AttractSoftZoneModifier; /* 0x008C */
  FB_FLOAT32 AttractUserInputMultiplierModifier; /* 0x0090 */
  FB_FLOAT32 SnapZoomPostTimeNoInputModifier; /* 0x0094 */
  FB_FLOAT32 SnapZoomPostTimeModifier; /* 0x0098 */
  FB_FLOAT32 SuckZoomModifier; /* 0x009C */
  FB_FLOAT32 AiBulletDamageHumanCooldown; /* 0x00A0 */
  char pad_00A4[0x0004];
  FB_HANDLE(class GameAIDifficultyData) AIData; /* 0x00A8 */
  FB_BOOLEAN UsePitchZoomSnap; /* 0x00B0 */
  char pad_00B1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(DifficultyData) == 192);

}
