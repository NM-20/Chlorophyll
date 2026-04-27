#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836B30
   RuntimeId:        042F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD148
   Default Value:    0000000142B88C48
*/
#pragma pack(push, 4)
struct SoundWaveRuntimeVariation
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 PersistentDataSize; /* 0x0000 */
  FB_UINT16 FirstSegmentIndex; /* 0x0004 */
  FB_UINT8 FirstSubtitleIndex; /* 0x0006 */
  FB_UINT8 SubtitleCount; /* 0x0007 */
  FB_UINT8 SegmentCount; /* 0x0008 */
  FB_UINT8 ChunkIndex; /* 0x0009 */
  FB_UINT8 FirstLoopSegmentIndex; /* 0x000A */
  FB_UINT8 LastLoopSegmentIndex; /* 0x000B */
  FB_UINT8 Weight; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundWaveRuntimeVariation) == 16);

}
