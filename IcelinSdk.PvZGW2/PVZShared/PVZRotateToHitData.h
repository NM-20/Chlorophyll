#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862F70
   RuntimeId:        20DA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9520
   Default Value:    0000000142861734
*/
#pragma pack(push, 4)
struct PVZRotateToHitData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 RotationSpeedFactor; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(PVZRotateToHitData) == 4);

}
