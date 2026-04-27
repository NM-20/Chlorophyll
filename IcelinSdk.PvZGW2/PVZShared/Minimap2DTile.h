#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864FB8
   RuntimeId:        2278
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4708
   Default Value:    0000000142864FD0
*/
#pragma pack(push, 8)
struct Minimap2DTile
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) Texture; /* 0x0000 */
  FB_INT32 ChildIndex0; /* 0x0008 */
  FB_INT32 ChildIndex1; /* 0x000C */
  FB_INT32 ChildIndex2; /* 0x0010 */
  FB_INT32 ChildIndex3; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Minimap2DTile) == 24);

}
