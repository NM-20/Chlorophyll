#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D628
   RuntimeId:        2802
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8700
   Default Value:    0000000142869088
*/
#pragma pack(push, 4)
struct WeaponLagEffectSpringData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Constant; /* 0x0000 */
  FB_FLOAT32 Damping; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(WeaponLagEffectSpringData) == 8);

}
