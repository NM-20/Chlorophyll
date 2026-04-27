#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CC68
   RuntimeId:        2768
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          090B
   VfTable:          0000000142366338
   Address (Base):   00000001430D94D0
*/
#pragma pack(push, 8)
class WeaponMultiplierBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 AmmoCapacityWeaponUpgradeMultiplier; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponMultiplierBuffEffectData) == 32);

}
