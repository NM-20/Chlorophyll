#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870378
   RuntimeId:        297B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C19E8
   Default Value:    0000000142870390
*/
#pragma pack(push, 8)
struct PVZUIStickerBookClass
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0000 */
  FB_CSTRING Label; /* 0x0008 */
  FB_STDARRAY(struct PVZUIStickerBookUnlockGroup) Abilities; /* 0x0010 */
  FB_CSTRING AbilitiesDescription; /* 0x0018 */
  FB_STDARRAY(struct PVZUIDisplayStat) Stats; /* 0x0020 */
  FB_STDARRAY(struct PVZUIDisplayStat) CostumeOverallStats; /* 0x0028 */
  FB_STDARRAY(struct PVZUIStickerBookCostume) Costumes; /* 0x0030 */
  FB_STDARRAY(struct PVZUIStickerBookAccessoryCategory) AccessoryCategories; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookClass) == 64);

}
