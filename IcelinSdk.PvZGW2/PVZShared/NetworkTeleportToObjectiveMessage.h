#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23AD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F988
   Address:          00000001430C3EE8
   Default Value:    0000000142867430
*/
#pragma pack(push, 16)
struct NetworkTeleportToObjectiveMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(NetworkTeleportToObjectiveMessage) == 112);

}
