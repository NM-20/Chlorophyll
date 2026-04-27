#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C238
   RuntimeId:        101C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C92A8
   Default Value:    000000014284C250
*/
#pragma pack(push, 8)
struct UITextureMappingOutputEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Id; /* 0x0000 */
  FB_HANDLE(class TextureAsset) Texture; /* 0x0008 */
  Vec2 Min; /* 0x0010 */
  Vec2 Max; /* 0x0018 */
  FB_BOOLEAN Streaming; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UITextureMappingOutputEntry) == 40);

}
