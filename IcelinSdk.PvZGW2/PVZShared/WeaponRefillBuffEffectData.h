#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CB68
   RuntimeId:        2758
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0910
   VfTable:          00000001423662F0
   Address (Base):   00000001430F6550
*/
#pragma pack(push, 8)
class WeaponRefillBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0018 */
  FB_INT32 AmmoPickupCount; /* 0x001C */
  FB_INT32 AddAmmo; /* 0x0020 */
  FB_INT32 AddMagazines; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WeaponRefillBuffEffectData) == 40);

}
