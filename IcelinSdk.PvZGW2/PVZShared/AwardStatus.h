#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142866818
   RuntimeId:        238A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4308
   Default Value:    00000001428660F8
*/
#pragma pack(push, 8)
struct AwardStatus
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT64 TimeActivatedInSeconds; /* 0x0000 */
  FB_CSTRING Code; /* 0x0008 */
  FB_UINT32 CurrentValue; /* 0x0010 */
  FB_UINT32 OriginalValue; /* 0x0014 */
  FB_STDARRAY(struct CounterStatus) Counters; /* 0x0018 */
  FB_BOOLEAN IsCounting; /* 0x0020 */
  FB_BOOLEAN IsActivatable; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AwardStatus) == 40);

}
