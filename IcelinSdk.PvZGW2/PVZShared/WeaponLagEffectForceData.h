#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D668
   RuntimeId:        2806
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B86C0
   Default Value:    0000000142BB5B60
*/
#pragma pack(push, 16)
struct WeaponLagEffectForceData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 OffsetForce; /* 0x0000 */
  Vec3 RotationForce; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponLagEffectForceData) == 32);

}
