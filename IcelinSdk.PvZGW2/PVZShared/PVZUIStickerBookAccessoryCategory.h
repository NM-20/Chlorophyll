#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870358
   RuntimeId:        2979
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1A08
   Default Value:    00000001428702C8
*/
#pragma pack(push, 8)
struct PVZUIStickerBookAccessoryCategory
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0000 */
  FB_CSTRING Description; /* 0x0008 */
  FB_STDARRAY(struct PVZUIStickerBookUnlockGroup) Accessories; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookAccessoryCategory) == 24);

}
