#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C5E8
   RuntimeId:        2700
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0918
   VfTable:          0000000142366788
   Address (Base):   00000001430D98F0
*/
#pragma pack(push, 8)
class ExplosionBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlock; /* 0x0018 */
  FB_HANDLE(class ExplosionEntityData) ApplicationExplosion; /* 0x0020 */
  FB_HANDLE(class ExplosionEntityData) TriggeredExplosion; /* 0x0028 */
  FB_HANDLE(class ExplosionEntityData) RemovalExplosion; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ExplosionBuffEffectData) == 56);

}
