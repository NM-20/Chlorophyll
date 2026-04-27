#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870228
   RuntimeId:        2973
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8320
   Default Value:    0000000142870240
*/
#pragma pack(push, 8)
struct PVZUIStickerBookTeam
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct PVZUIDisplayStat) TeamStats; /* 0x0000 */
  FB_STDARRAY(struct PVZUIStickerBookSummonGroup) Summons; /* 0x0008 */
  FB_STDARRAY(struct PVZUIStickerBookCommanderAbility) CommanderAbilities; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookTeam) == 24);

}
