#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870130
   RuntimeId:        2967
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1AE8
   Default Value:    0000000142870148
*/
#pragma pack(push, 8)
struct PVZUIStickerBookSummon
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 StickerNumber; /* 0x0000 */
  FB_UINT32 SummonConsumableAssetIdentifier; /* 0x0004 */
  FB_CSTRING SummonConsumableAssetKey; /* 0x0008 */
  FB_HANDLE(class TextureAsset) Image; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookSummon) == 24);

}
