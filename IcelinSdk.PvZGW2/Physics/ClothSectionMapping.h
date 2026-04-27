#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850C00
   RuntimeId:        13F8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C89C8
   Default Value:    0000000142850C18
*/
#pragma pack(push, 8)
struct ClothSectionMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ClothMeshName; /* 0x0000 */
  FB_STDARRAY(FB_UINT32) SubsetIds; /* 0x0008 */
  FB_UINT32 LodIndex; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ClothSectionMapping) == 24);

}
