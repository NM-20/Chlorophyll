#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0ABA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422329D0
   Address:          00000001430CBF88
   Default Value:    000000014283FFC0
*/
#pragma pack(push, 16)
struct ClientCollisionGrenadeCollisionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ClientCollisionGrenadeCollisionMessage) == 80);

}
