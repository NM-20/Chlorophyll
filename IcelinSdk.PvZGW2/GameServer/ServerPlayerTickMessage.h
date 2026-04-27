#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C38
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245440
   Address:          00000001430CA3E8
   Default Value:    0000000142846910
*/
#pragma pack(push, 8)
struct ServerPlayerTickMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerTickMessage) == 72);

}
