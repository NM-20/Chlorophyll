#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E92
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320210
   Address:          00000001430C5808
   Default Value:    0000000142860C30
*/
#pragma pack(push, 8)
struct StatScoringEventMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(StatScoringEventMessage) == 96);

}
