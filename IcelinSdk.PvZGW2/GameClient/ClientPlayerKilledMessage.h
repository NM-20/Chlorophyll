#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A9C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232BD0
   Address:          00000001430CC348
   Default Value:    000000014283F990
*/
#pragma pack(push, 8)
struct ClientPlayerKilledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerKilledMessage) == 64);

}
