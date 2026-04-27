#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayDispersionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DE08
   RuntimeId:        2864
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B84E0
   Default Value:    000000014286BDC8
*/
#pragma pack(push, 4)
struct GunSwayStanceTransition
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayDispersionData MaxPenaltyValue; /* 0x0000 */
  FB_FLOAT32 CoolDown; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(GunSwayStanceTransition) == 20);

}
