#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AC0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232970
   Address:          00000001430CBEC8
   Default Value:    0000000142840150
*/
#pragma pack(push, 8)
struct ClientGameplaySoldierHitMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientGameplaySoldierHitMessage) == 64);

}
