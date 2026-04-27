#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870260
   RuntimeId:        2975
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8300
   Default Value:    0000000142870278
*/
#pragma pack(push, 8)
struct PVZUIStickerBookWeapon
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 UnlockAssetIdentifier; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class TextureAsset) Image; /* 0x0008 */
  FB_CSTRING AmmoDescription; /* 0x0010 */
  FB_CSTRING ReloadDescription; /* 0x0018 */
  FB_CSTRING DamageDescription; /* 0x0020 */
  FB_CSTRING UseDescription; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookWeapon) == 48);

}
