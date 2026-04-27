#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868130
   RuntimeId:        23D3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3A88
   Default Value:    0000000142868148
*/
#pragma pack(push, 8)
struct StatRequestEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Id; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Code; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StatRequestEntry) == 16);

}
