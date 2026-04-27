#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C34
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142378B68
   Address:          00000001430C0DE8
   Default Value:    0000000142873E90
*/
#pragma pack(push, 8)
struct ClientAIAnimAimingMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ClientAIAnimAimingMessage) == 80);

}
