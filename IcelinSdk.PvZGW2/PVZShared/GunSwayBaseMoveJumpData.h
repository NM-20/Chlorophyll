#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayDispersionData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayRecoilData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayLagData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DEF8
   RuntimeId:        286A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B84A0
   Default Value:    000000014286DF10
*/
#pragma pack(push, 4)
struct GunSwayBaseMoveJumpData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayDispersionData BaseValue; /* 0x0000 */
  GunSwayDispersionData Moving; /* 0x0010 */
  GunSwayDispersionData Jumping; /* 0x0020 */
  GunSwayDispersionData Sprinting; /* 0x0030 */
  GunSwayDispersionData VaultingSmallObject; /* 0x0040 */
  GunSwayDispersionData VaultingMediumObject; /* 0x0050 */
  GunSwayRecoilData Recoil; /* 0x0060 */
  GunSwayLagData GunSwayLag; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x008C */
#pragma pack(pop)

static_assert(sizeof(GunSwayBaseMoveJumpData) == 140);

}
