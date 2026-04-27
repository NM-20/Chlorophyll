#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleReference.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FE00
   RuntimeId:        134F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8B48
   Default Value:    000000014284FE20
*/
#pragma pack(push, 8)
struct MorphTexturesBundleData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  BlueprintBundleReference TextureBundle; /* 0x0000 */
  FB_UINT32 TextureHash; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MorphTexturesBundleData) == 64);

}
