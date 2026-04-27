#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C3E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378B08
   Address:          00000001430C0CA8
   Default Value:    00000001428740B0
*/
#pragma pack(push, 8)
struct ServerAICoopSlotsCompleteMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerAICoopSlotsCompleteMessage) == 48);

}
