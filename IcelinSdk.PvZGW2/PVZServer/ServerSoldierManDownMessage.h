#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E42
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423205D0
   Address:          00000001430C5BE8
   Default Value:    00000001428601B0
*/
#pragma pack(push, 8)
struct ServerSoldierManDownMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerSoldierManDownMessage) == 64);

}
