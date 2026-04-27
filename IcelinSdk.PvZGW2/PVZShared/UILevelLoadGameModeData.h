#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861B28
   RuntimeId:        1FCB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5248
   Default Value:    0000000142861B40
*/
#pragma pack(push, 8)
struct UILevelLoadGameModeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING GameModeIdentifier; /* 0x0000 */
  FB_UINT32 PackageIdentifier; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(FB_CSTRING) BackgroundImagesPath; /* 0x0010 */
  FB_STDARRAY(struct UILevelLoadIconData) IconData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILevelLoadGameModeData) == 32);

}
