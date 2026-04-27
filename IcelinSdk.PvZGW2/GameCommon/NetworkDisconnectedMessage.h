#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B48
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241268
   Address:          00000001430CBA48
   Default Value:    0000000142841E60
*/
#pragma pack(push, 8)
struct NetworkDisconnectedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(NetworkDisconnectedMessage) == 64);

}
