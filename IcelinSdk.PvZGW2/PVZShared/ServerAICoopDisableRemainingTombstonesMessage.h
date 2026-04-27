#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C44
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378AA8
   Address:          00000001430C0BE8
   Default Value:    00000001428741D0
*/
#pragma pack(push, 8)
struct ServerAICoopDisableRemainingTombstonesMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerAICoopDisableRemainingTombstonesMessage) == 48);

}
