#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142842340
   RuntimeId:        0B63
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CB728
   Default Value:    0000000142842358
*/
#pragma pack(push, 8)
struct SaveGameHeaderEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Key; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Value; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SaveGameHeaderEntry) == 16);

}
