#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C3E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422453F0
   Address:          00000001430CA348
   Default Value:    0000000142843B98
*/
#pragma pack(push, 8)
struct ServerPlayerStartedFireMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerStartedFireMessage) == 56);

}
