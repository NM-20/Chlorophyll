#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B1A8
   RuntimeId:        260E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8AE0
   Default Value:    000000014286B1C0
*/
#pragma pack(push, 16)
struct FireEffectData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Offset; /* 0x0000 */
  Vec3 Rotation; /* 0x0010 */
  Vec3 ZoomOffset; /* 0x0020 */
  Vec3 ZoomRotation; /* 0x0030 */
  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0040 */
  FB_HANDLE(class EffectBlueprint) ChargingEffect; /* 0x0048 */
  FB_REFARRAY(class EffectBlueprint) ChargeEffects; /* 0x0050 */
  FB_BOOLEAN UseZoomOffset; /* 0x0058 */
  FB_BOOLEAN UseZoomRotation; /* 0x0059 */
  FB_BOOLEAN DisableDuringZoom; /* 0x005A */
  FB_BOOLEAN UpdateTransform; /* 0x005B */
  FB_BOOLEAN StopLoopingEffects; /* 0x005C */
  char pad_005D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(FireEffectData) == 96);

}
