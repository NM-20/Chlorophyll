#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428715D8
   RuntimeId:        2A65
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C17C8
   Default Value:    00000001428715F0
*/
#pragma pack(push, 8)
struct RegionInfoEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING RegionName; /* 0x0000 */
  FB_INT32 RegionPing; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RegionInfoEntry) == 16);

}
