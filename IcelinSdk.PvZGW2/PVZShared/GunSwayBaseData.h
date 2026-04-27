#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayDispersionData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayRecoilData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayLagData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DE28
   RuntimeId:        2866
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2C88
   Default Value:    000000014286DE40
*/
#pragma pack(push, 4)
struct GunSwayBaseData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayDispersionData BaseValue; /* 0x0000 */
  GunSwayRecoilData Recoil; /* 0x0010 */
  GunSwayLagData GunSwayLag; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(GunSwayBaseData) == 60);

}
