#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C5C8
   RuntimeId:        26FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0933
   VfTable:          00000001423667B8
   Address (Base):   00000001430F6850
*/
#pragma pack(push, 8)
class DamageOverTimeBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlock; /* 0x0018 */
  FB_FLOAT32 Damage; /* 0x0020 */
  DamageType DamageType; /* 0x0024 */
  MaterialDecl Material; /* 0x0028 */
  FB_FLOAT32 Period; /* 0x002C */
  FB_BOOLEAN ApplyAtStartOfPeriod; /* 0x0030 */
  FB_BOOLEAN NoDamageSource; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DamageOverTimeBuffEffectData) == 56);

}
