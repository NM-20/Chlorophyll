#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E94
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423201F0
   Address:          00000001430C57C8
   Default Value:    0000000142860908
*/
#pragma pack(push, 8)
struct ServerSimpleMeleeOnAttackerDiedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerSimpleMeleeOnAttackerDiedMessage) == 56);

}
