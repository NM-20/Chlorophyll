#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836610
   RuntimeId:        03DD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD288
   Default Value:    0000000142B88C28
*/
#pragma pack(push, 8)
struct SoundPatchPublicNode
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AudioGraphNodeData) Node; /* 0x0000 */
  FB_UINT32 Id; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundPatchPublicNode) == 16);

}
