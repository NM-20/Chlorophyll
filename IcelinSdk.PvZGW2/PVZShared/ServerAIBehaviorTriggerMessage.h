#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C3B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378928
   Address:          00000001430C0D08
   Default Value:    0000000142874020
*/
#pragma pack(push, 8)
struct ServerAIBehaviorTriggerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ServerAIBehaviorTriggerMessage) == 88);

}
