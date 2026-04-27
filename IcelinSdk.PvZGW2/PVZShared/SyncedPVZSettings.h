#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/ServerTypeValues.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868A50
   RuntimeId:        2417
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E0
   VfTable:          000000014234E870
   Address (Base):   00000001430B5830
*/
#pragma pack(push, 8)
class SyncedPVZSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TeamSwitchingCooldownTime; /* 0x0020 */
  FB_FLOAT32 GameModeCounterModifier; /* 0x0024 */
  FB_FLOAT32 SpottingInterval; /* 0x0028 */
  FB_FLOAT32 SpottingFov; /* 0x002C */
  FB_FLOAT32 SpottingDistance; /* 0x0030 */
  FB_UINT32 CommanderSize; /* 0x0034 */
  ServerTypeValues ServerType; /* 0x0038 */
  FB_FLOAT32 GlobalScoreMultiplier; /* 0x003C */
  FB_FLOAT32 ForceExplosionDeathMagnitude; /* 0x0040 */
  FB_BOOLEAN AllUnlocksUnlocked; /* 0x0044 */
  FB_BOOLEAN CommanderEnabled; /* 0x0045 */
  FB_BOOLEAN RenderAliveCharactersInGame; /* 0x0046 */
  FB_BOOLEAN ForceExplosionDeath; /* 0x0047 */
  FB_BOOLEAN UseDefaultCustomization; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SyncedPVZSettings) == 80);

}
