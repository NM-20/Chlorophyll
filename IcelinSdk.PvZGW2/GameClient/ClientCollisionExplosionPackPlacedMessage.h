#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0ABB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422329E0
   Address:          00000001430CBF68
   Default Value:    000000014283FF88
*/
#pragma pack(push, 8)
struct ClientCollisionExplosionPackPlacedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientCollisionExplosionPackPlacedMessage) == 56);

}
