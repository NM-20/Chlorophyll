#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DDA8
   RuntimeId:        285E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8520
   Default Value:    0000000142BFECC8
*/
#pragma pack(push, 4)
struct GunSwayLagData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MoveStrafeModifier; /* 0x0000 */
  FB_FLOAT32 MoveForwardModifier; /* 0x0004 */
  FB_FLOAT32 RotateYawModifier; /* 0x0008 */
  FB_FLOAT32 RotatePitchModifier; /* 0x000C */
  FB_FLOAT32 ReleaseModifier; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(GunSwayLagData) == 20);

}
