#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CD2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252BE8
   Address:          00000001430C9A88
   Default Value:    0000000142847900
*/
#pragma pack(push, 8)
struct ServerRoundOverMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerRoundOverMessage) == 64);

}
