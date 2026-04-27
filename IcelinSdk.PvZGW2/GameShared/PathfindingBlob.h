#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849080
   RuntimeId:        0D4C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C97C8
   Default Value:    0000000142849098
*/
#pragma pack(push, 8)
struct PathfindingBlob
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID BlobId; /* 0x0000 */
  FB_UINT32 BlobSize; /* 0x0010 */
  char pad_0014[0x0004];
  FB_STDARRAY(FB_UINT32) ChunkSizes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PathfindingBlob) == 32);

}
