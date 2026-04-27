#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A270
   RuntimeId:        255F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3548
   Default Value:    0000000142BFEC40
*/
#pragma pack(push, 4)
struct UITextureAtlasInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec2 MinUv; /* 0x0000 */
  Vec2 MaxUv; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UITextureAtlasInfo) == 16);

}
