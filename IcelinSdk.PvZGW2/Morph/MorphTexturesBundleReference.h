#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FE68
   RuntimeId:        1351
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8B28
   Default Value:    000000014284FE18
*/
#pragma pack(push, 8)
struct MorphTexturesBundleReference
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct MorphTexturesBundleData) TextureBundleData; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MorphTexturesBundleReference) == 8);

}
