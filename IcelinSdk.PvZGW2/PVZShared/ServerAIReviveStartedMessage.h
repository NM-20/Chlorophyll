#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C47
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378878
   Address:          00000001430C0B88
   Default Value:    0000000142874280
*/
#pragma pack(push, 8)
struct ServerAIReviveStartedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerAIReviveStartedMessage) == 72);

}
