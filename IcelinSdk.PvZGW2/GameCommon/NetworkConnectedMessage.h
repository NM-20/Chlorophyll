#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B47
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241278
   Address:          00000001430CBA68
   Default Value:    0000000142841DB0
*/
#pragma pack(push, 8)
struct NetworkConnectedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(NetworkConnectedMessage) == 120);

}
