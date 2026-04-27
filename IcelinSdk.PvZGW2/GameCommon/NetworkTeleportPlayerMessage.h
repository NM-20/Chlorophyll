#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BA0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240220
   Address:          00000001430CB008
   Default Value:    0000000142843C70
*/
#pragma pack(push, 16)
struct NetworkTeleportPlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(NetworkTeleportPlayerMessage) == 160);

}
