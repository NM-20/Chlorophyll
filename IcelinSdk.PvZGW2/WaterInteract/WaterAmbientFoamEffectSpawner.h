#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876D78
   RuntimeId:        2E26
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C04A8
   Default Value:    00000001428766C8
*/
#pragma pack(push, 8)
struct WaterAmbientFoamEffectSpawner
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0000 */
  FB_FLOAT32 Threshold; /* 0x0008 */
  FB_FLOAT32 Randomness; /* 0x000C */
  FB_FLOAT32 CoolDownTime; /* 0x0010 */
  FB_FLOAT32 NearDistance; /* 0x0014 */
  FB_FLOAT32 FarDistance; /* 0x0018 */
  FB_FLOAT32 VerticalVelocityScale; /* 0x001C */
  FB_FLOAT32 HorizontalVelocityScale; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WaterAmbientFoamEffectSpawner) == 40);

}
