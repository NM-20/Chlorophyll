#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428667C8
   RuntimeId:        2386
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4348
   Default Value:    00000001428667E0
*/
#pragma pack(push, 8)
struct StatCounterStatus
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Code; /* 0x0000 */
  FB_FLOAT32 CurrentValue; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StatCounterStatus) == 16);

}
