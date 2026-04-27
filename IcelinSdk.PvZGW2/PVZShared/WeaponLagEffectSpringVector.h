#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponLagEffectSpringData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D648
   RuntimeId:        2804
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B86E0
   Default Value:    000000014286A588
*/
#pragma pack(push, 4)
struct WeaponLagEffectSpringVector
{
  typedef struct ValueTypeInfo TypeInfo_t;

  WeaponLagEffectSpringData SpringX; /* 0x0000 */
  WeaponLagEffectSpringData SpringY; /* 0x0008 */
  WeaponLagEffectSpringData SpringZ; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WeaponLagEffectSpringVector) == 24);

}
