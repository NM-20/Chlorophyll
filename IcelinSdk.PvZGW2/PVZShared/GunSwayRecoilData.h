#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DDE8
   RuntimeId:        2862
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8500
   Default Value:    000000014286B528
*/
#pragma pack(push, 4)
struct GunSwayRecoilData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 RecoilAmplitudeMax; /* 0x0000 */
  FB_FLOAT32 RecoilAmplitudeIncPerShot; /* 0x0004 */
  FB_FLOAT32 HorizontalRecoilAmplitudeIncPerShotMin; /* 0x0008 */
  FB_FLOAT32 HorizontalRecoilAmplitudeIncPerShotMax; /* 0x000C */
  FB_FLOAT32 HorizontalRecoilAmplitudeMax; /* 0x0010 */
  FB_FLOAT32 RecoilAmplitudeDecreaseFactor; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GunSwayRecoilData) == 24);

}
