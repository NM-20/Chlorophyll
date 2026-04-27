#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428710D0
   RuntimeId:        2A2D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B81E0
   Default Value:    00000001428710E8
*/
#pragma pack(push, 8)
struct UIStickerBookUnlock
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StickerNumber; /* 0x0000 */
  FB_INT32 Count; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING Label; /* 0x0010 */
  FB_CSTRING Description; /* 0x0018 */
  FB_CSTRING ImageURL; /* 0x0020 */
  FB_INT32 Rarity; /* 0x0028 */
  FB_UINT32 UnlockID; /* 0x002C */
  FB_BOOLEAN IsLocked; /* 0x0030 */
  FB_BOOLEAN IsNew; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookUnlock) == 56);

}
