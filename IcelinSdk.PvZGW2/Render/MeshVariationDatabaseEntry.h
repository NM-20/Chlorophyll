#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852CF8
   RuntimeId:        15F6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8388
   Default Value:    0000000142852D10
*/
#pragma pack(push, 8)
struct MeshVariationDatabaseEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0000 */
  FB_UINT32 VariationAssetNameHash; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(struct MeshVariationDatabaseMaterial) Materials; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MeshVariationDatabaseEntry) == 24);

}
