#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D928
   RuntimeId:        114F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAD00
   Default Value:    000000014284D940
*/
#pragma pack(push, 4)
struct BlurEffectData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 DispersionStrength; /* 0x0000 */
  FB_FLOAT32 DispersionThreshhold; /* 0x0004 */
  FB_FLOAT32 ExplosionStrength; /* 0x0008 */
  FB_FLOAT32 BulletStrength; /* 0x000C */
  FB_FLOAT32 ExplosionFalloffSpeed; /* 0x0010 */
  FB_FLOAT32 BulletFalloffSpeed; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BlurEffectData) == 24);

}
