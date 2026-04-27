#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0ABE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232990
   Address:          00000001430CBF08
   Default Value:    00000001428400D0
*/
#pragma pack(push, 16)
struct ClientCollisionProjectileImpactMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ClientCollisionProjectileImpactMessage) == 80);

}
