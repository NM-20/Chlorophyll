#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428714C8
   RuntimeId:        2A5B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8160
   Default Value:    00000001428714E0
*/
#pragma pack(push, 8)
struct UIChestRewardItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING CardPackTextureId; /* 0x0000 */
  FB_CSTRING ItemName; /* 0x0008 */
  FB_CSTRING ItemDesc; /* 0x0010 */
  FB_CSTRING ItemImage; /* 0x0018 */
  FB_CSTRING ItemCategory; /* 0x0020 */
  FB_CSTRING ItemNumber; /* 0x0028 */
  FB_CSTRING ItemClassName; /* 0x0030 */
  FB_CSTRING ItemCostumeName; /* 0x0038 */
  FB_UINT32 Rareness; /* 0x0040 */
  FB_INT32 Quantity; /* 0x0044 */
  FB_INT32 ItemType; /* 0x0048 */
  FB_INT32 TeamId; /* 0x004C */
  FB_CSTRING CharacterBlueprint; /* 0x0050 */
  FB_INT32 ClassIndex; /* 0x0058 */
  FB_INT32 CostumeIndex; /* 0x005C */
  FB_INT32 StickerBookClassIndex; /* 0x0060 */
  FB_INT32 StickerBookCostumeIndex; /* 0x0064 */
  FB_BOOLEAN IsCard; /* 0x0068 */
  FB_BOOLEAN IsPuzzlePiece; /* 0x0069 */
  FB_BOOLEAN IsSpecialConsumable; /* 0x006A */
  FB_BOOLEAN AllSiblingsUnlocked; /* 0x006B */
  FB_BOOLEAN IsPlants; /* 0x006C */
  char pad_006D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(UIChestRewardItem) == 112);

}
