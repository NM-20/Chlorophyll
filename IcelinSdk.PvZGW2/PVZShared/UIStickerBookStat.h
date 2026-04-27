#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428711A0
   RuntimeId:        2A31
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1828
   Default Value:    00000001428711B8
*/
#pragma pack(push, 8)
struct UIStickerBookStat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0000 */
  FB_CSTRING Amount; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookStat) == 16);

}
