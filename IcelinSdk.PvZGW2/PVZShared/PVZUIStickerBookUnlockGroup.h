#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428701B8
   RuntimeId:        296D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1A88
   Default Value:    00000001428701D0
*/
#pragma pack(push, 8)
struct PVZUIStickerBookUnlockGroup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StickerNumberDecorator; /* 0x0000 */
  FB_STDARRAY(struct PVZUIStickerBookUnlock) Unlocks; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookUnlockGroup) == 16);

}
