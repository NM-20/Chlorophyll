#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AD28
   RuntimeId:        0EED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E3
   VfTable:          0000000142262EA8
   Address (Base):   00000001430B4BE0
*/
#pragma pack(push, 8)
class SyncedGameSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 DifficultyIndex; /* 0x0020 */
  FB_FLOAT32 DifficultyScoreMultiplierOverride; /* 0x0024 */
  FB_FLOAT32 ManDownTimeModifier; /* 0x0028 */
  FB_FLOAT32 BulletDamageModifier; /* 0x002C */
  FB_FLOAT32 MaxAllowedLatency; /* 0x0030 */
  FB_FLOAT32 BadExperienceIconsHoldTime; /* 0x0034 */
  FB_BOOLEAN DisableToggleEntryCamera; /* 0x0038 */
  FB_BOOLEAN DisableRegenerateHealth; /* 0x0039 */
  FB_BOOLEAN EnableFriendlyFire; /* 0x003A */
  FB_BOOLEAN ForceReloadWholeMags; /* 0x003B */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SyncedGameSettings) == 64);

}
