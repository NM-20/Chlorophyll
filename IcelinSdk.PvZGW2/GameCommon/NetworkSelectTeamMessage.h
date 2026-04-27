#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B84
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422409B8
   Address:          00000001430CB368
   Default Value:    0000000142842EE0
*/
#pragma pack(push, 8)
struct NetworkSelectTeamMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkSelectTeamMessage) == 80);

}
