#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836410
   RuntimeId:        03BD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD2E8
   Default Value:    0000000142BEBE30
*/
#pragma pack(push, 8)
struct MixerPresetNodeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AudioGraphNodeData) Node; /* 0x0000 */
  FB_FLOAT32 Value; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MixerPresetNodeData) == 16);

}
