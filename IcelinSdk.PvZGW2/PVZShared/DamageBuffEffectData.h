#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C5A8
   RuntimeId:        26FC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          091E
   VfTable:          00000001423667A0
   Address (Base):   00000001430D9950
*/
#pragma pack(push, 8)
class DamageBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlock; /* 0x0018 */
  FB_FLOAT32 Damage; /* 0x0020 */
  DamageType DamageType; /* 0x0024 */
  MaterialDecl Material; /* 0x0028 */
  FB_BOOLEAN UseCollisionVelocity; /* 0x002C */
  FB_BOOLEAN ForceCollisionVelocity; /* 0x002D */
  FB_BOOLEAN NoDamageSource; /* 0x002E */
  FB_BOOLEAN IsUnrevivable; /* 0x002F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DamageBuffEffectData) == 48);

}
