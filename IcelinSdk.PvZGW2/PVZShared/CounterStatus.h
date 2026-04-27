#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428667F8
   RuntimeId:        2388
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4328
   Default Value:    0000000142BFEC20
*/
#pragma pack(push, 4)
struct CounterStatus
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 CurrentValue; /* 0x0000 */
  FB_FLOAT32 OriginalValue; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(CounterStatus) == 8);

}
