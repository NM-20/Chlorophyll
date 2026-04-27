#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSwitchingEnum.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872C10
   RuntimeId:        287E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2C08
   Default Value:    000000014286C278
*/
#pragma pack(push, 4)
struct WeaponSwitchingOverride
{
  typedef struct ValueTypeInfo TypeInfo_t;

  WeaponSwitchingEnum FromWeapon; /* 0x0000 */
  FB_INT32 Action; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(WeaponSwitchingOverride) == 8);

}
