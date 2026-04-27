#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C1C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422455F0
   Address:          00000001430CA768
   Default Value:    00000001428461A0
*/
#pragma pack(push, 8)
struct ServerCharacterSpawnedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerCharacterSpawnedMessage) == 64);

}
