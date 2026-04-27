#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859688
   RuntimeId:        1B34
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C65A8
   Default Value:    00000001428596A0
*/
#pragma pack(push, 8)
struct RayHitMaterials
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING SoundMaterialName; /* 0x0000 */
  FB_UINT32 SoundMaterialID; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RayHitMaterials) == 16);

}
