#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        279E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142365FE0
   Address:          00000001430C2E88
   Default Value:    0000000142868098
*/
#pragma pack(push, 8)
struct ServerGameAdministrationResetServerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerGameAdministrationResetServerMessage) == 56);

}
