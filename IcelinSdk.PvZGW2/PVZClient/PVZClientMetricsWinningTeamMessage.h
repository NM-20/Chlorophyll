#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B57
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBE60
   Address:          00000001430C63C8
   Default Value:    00000001428599F8
*/
#pragma pack(push, 8)
struct PVZClientMetricsWinningTeamMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZClientMetricsWinningTeamMessage) == 56);

}
