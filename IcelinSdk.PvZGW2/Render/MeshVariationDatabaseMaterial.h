#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852CC0
   RuntimeId:        15F4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C83A8
   Default Value:    0000000142852CD8
*/
#pragma pack(push, 8)
struct MeshVariationDatabaseMaterial
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class MeshMaterial) Material; /* 0x0000 */
  FB_HANDLE(class MeshMaterialVariation) MaterialVariation; /* 0x0008 */
  FB_STDARRAY(struct TextureShaderParameter) TextureParameters; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MeshVariationDatabaseMaterial) == 24);

}
