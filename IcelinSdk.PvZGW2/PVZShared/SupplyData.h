#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DC58
   RuntimeId:        2850
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8100
   Default Value:    000000014286A9F8
*/
#pragma pack(push, 8)
struct SupplyData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class HealingSupplyUnitSphereData) Healing; /* 0x0000 */
  FB_HANDLE(class AmmoSupplyUnitSphereData) Ammo; /* 0x0008 */
  FB_FLOAT32 ExclusionTimeout; /* 0x0010 */
  FB_BOOLEAN SupplySoldiers; /* 0x0014 */
  FB_BOOLEAN SupplyVehicles; /* 0x0015 */
  FB_BOOLEAN TeamSpecific; /* 0x0016 */
  FB_BOOLEAN ExcludeSelf; /* 0x0017 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SupplyData) == 24);

}
