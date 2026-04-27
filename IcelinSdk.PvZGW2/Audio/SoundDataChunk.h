#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428369D0
   RuntimeId:        0419
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD1C8
   Default Value:    0000000142BEBE40
*/
#pragma pack(push, 4)
struct SoundDataChunk
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID ChunkId; /* 0x0000 */
  FB_UINT32 ChunkSize; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(SoundDataChunk) == 20);

}
