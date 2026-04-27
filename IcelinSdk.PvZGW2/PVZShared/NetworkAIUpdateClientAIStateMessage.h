#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C4A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378888
   Address:          00000001430C0B28
   Default Value:    0000000142874350
*/
#pragma pack(push, 8)
struct NetworkAIUpdateClientAIStateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkAIUpdateClientAIStateMessage) == 80);

}
