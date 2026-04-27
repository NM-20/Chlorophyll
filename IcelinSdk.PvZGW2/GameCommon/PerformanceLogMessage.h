#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B91
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240630
   Address:          00000001430CB1E8
   Default Value:    0000000142843440
*/
#pragma pack(push, 16)
struct PerformanceLogMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0130];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(PerformanceLogMessage) == 304);

}
