#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D860
   RuntimeId:        2820
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8600
   Default Value:    000000014286D878
*/
#pragma pack(push, 4)
struct WeaponAnimationSettingsData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 KickbackFactor; /* 0x0000 */
  FB_FLOAT32 KickbackSpeedFactor; /* 0x0004 */
  FB_FLOAT32 WeaponOffsetX; /* 0x0008 */
  FB_FLOAT32 WeaponOffsetY; /* 0x000C */
  FB_FLOAT32 WeaponOffsetZ; /* 0x0010 */
  FB_FLOAT32 ZoomOutSpeed; /* 0x0014 */
  FB_FLOAT32 ZoomInSpeed; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x001C */
#pragma pack(pop)

static_assert(sizeof(WeaponAnimationSettingsData) == 28);

}
