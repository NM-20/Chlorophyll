#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayDispersionModData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E1D0
   RuntimeId:        2870
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8440
   Default Value:    000000014286E220
*/
#pragma pack(push, 4)
struct GunSwayStanceZoomModifierData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GunSwayDispersionModData DispersionMod; /* 0x0000 */
  GunSwayDispersionModData MovingDispersionMod; /* 0x0010 */
  GunSwayDispersionModData SprintingDispersionMod; /* 0x0020 */
  FB_FLOAT32 RecoilMagnitudeMod; /* 0x0030 */
  FB_FLOAT32 RecoilAngleMod; /* 0x0034 */
  FB_FLOAT32 FirstShotRecoilMod; /* 0x0038 */
  FB_FLOAT32 LagYawMod; /* 0x003C */
  FB_FLOAT32 LagPitchMod; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0044 */
#pragma pack(pop)

static_assert(sizeof(GunSwayStanceZoomModifierData) == 68);

}
