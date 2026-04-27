#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836AD0
   RuntimeId:        0429
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD188
   Default Value:    0000000142BEBE58
*/
#pragma pack(push, 4)
struct SoundWaveVariationSegment
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 SamplesOffset; /* 0x0000 */
  FB_UINT32 SeekTableOffset; /* 0x0004 */
  FB_FLOAT32 SegmentLength; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(SoundWaveVariationSegment) == 12);

}
