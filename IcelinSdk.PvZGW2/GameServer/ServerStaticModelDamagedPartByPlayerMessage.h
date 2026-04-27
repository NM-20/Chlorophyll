#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CBC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252D08
   Address:          00000001430C9D48
   Default Value:    00000001428475A0
*/
#pragma pack(push, 8)
struct ServerStaticModelDamagedPartByPlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ServerStaticModelDamagedPartByPlayerMessage) == 88);

}
