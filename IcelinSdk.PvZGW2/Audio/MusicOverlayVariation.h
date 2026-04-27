#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837E10
   RuntimeId:        0556
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCF08
   Default Value:    0000000142BEBE90
*/
#pragma pack(push, 8)
struct MusicOverlayVariation
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SoundWaveAsset) Wave; /* 0x0000 */
  FB_FLOAT32 TransientPoint; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MusicOverlayVariation) == 16);

}
