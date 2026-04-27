#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C39
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378A48
   Address:          00000001430C0D48
   Default Value:    0000000142873F80
*/
#pragma pack(push, 8)
struct ServerAISetStunnedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ServerAISetStunnedMessage) == 80);

}
