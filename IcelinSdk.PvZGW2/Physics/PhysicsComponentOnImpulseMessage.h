#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        14FE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014227EBE8
   Address:          00000001430C8808
   Default Value:    0000000142851DE0
*/
#pragma pack(push, 8)
struct PhysicsComponentOnImpulseMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PhysicsComponentOnImpulseMessage) == 56);

}
