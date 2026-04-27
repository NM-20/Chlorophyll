#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayDispersionData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayRecoilData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayLagData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DE88
   RuntimeId:        2868
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B84C0
   Default Value:    000000014286DEA0
*/
#pragma pack(push, 4)
struct GunSwayBaseMoveData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayDispersionData BaseValue; /* 0x0000 */
  GunSwayDispersionData Moving; /* 0x0010 */
  GunSwayRecoilData Recoil; /* 0x0020 */
  GunSwayLagData GunSwayLag; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x004C */
#pragma pack(pop)

static_assert(sizeof(GunSwayBaseMoveData) == 76);

}
