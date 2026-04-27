#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861BC0
   RuntimeId:        1FD1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5228
   Default Value:    0000000142861BD8
*/
#pragma pack(push, 8)
struct UILevelCoopDescription
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Playlist; /* 0x0000 */
  FB_HANDLE(class TextureAsset) Image; /* 0x0008 */
  FB_CSTRING DisplayNameSid; /* 0x0010 */
  FB_CSTRING DescriptionSid; /* 0x0018 */
  FB_CSTRING GameMode; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UILevelCoopDescription) == 40);

}
