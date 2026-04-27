#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C43
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378AB8
   Address:          00000001430C0C08
   Default Value:    00000001428741A0
*/
#pragma pack(push, 8)
struct ServerAICoopVaseBreakerFailMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerAICoopVaseBreakerFailMessage) == 48);

}
