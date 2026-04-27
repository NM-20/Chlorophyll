#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FAC8
   RuntimeId:        1321
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8C08
   Default Value:    000000014284FAE0
*/
#pragma pack(push, 8)
struct TextureContainer
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Description; /* 0x0000 */
  FB_HANDLE(class TextureAsset) Texture; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TextureContainer) == 16);

}
