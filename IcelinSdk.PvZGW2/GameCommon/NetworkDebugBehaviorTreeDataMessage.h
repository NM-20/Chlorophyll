#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B7A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240D78
   Address:          00000001430CB4A8
   Default Value:    0000000142842A00
*/
#pragma pack(push, 8)
struct NetworkDebugBehaviorTreeDataMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(NetworkDebugBehaviorTreeDataMessage) == 112);

}
