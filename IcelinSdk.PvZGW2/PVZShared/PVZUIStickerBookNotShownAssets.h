#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428703D8
   RuntimeId:        297D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B82E0
   Default Value:    00000001428703F0
*/
#pragma pack(push, 8)
struct PVZUIStickerBookNotShownAssets
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) UnlockAssetIdentifiers; /* 0x0000 */
  FB_STDARRAY(FB_UINT32) ConsumableAssetIdentifiers; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookNotShownAssets) == 16);

}
