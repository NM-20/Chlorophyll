#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870198
   RuntimeId:        296B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1AA8
   Default Value:    0000000142BB5CA0
*/
#pragma pack(push, 8)
struct PVZUIStickerBookUnlock
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 StickerNumber; /* 0x0000 */
  FB_UINT32 UnlockAssetIdentifier; /* 0x0004 */
  FB_HANDLE(class TextureAsset) Image; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookUnlock) == 16);

}
