#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSwitchingEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E2F0
   RuntimeId:        287A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2C48
   Default Value:    000000014286E308
*/
#pragma pack(push, 8)
struct WeaponSwitchingMapData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  WeaponSwitchingEnum FromWeapon; /* 0x0000 */
  FB_INT32 Action; /* 0x0004 */
  FB_FLOAT32 MaxHoldTime; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(enum WeaponSwitchingEnum) ToWeapon; /* 0x0010 */
  FB_BOOLEAN FireAndSwitchBackToPrev; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponSwitchingMapData) == 32);

}
