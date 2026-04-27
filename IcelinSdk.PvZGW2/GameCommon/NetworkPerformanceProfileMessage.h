#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B70
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240F58
   Address:          00000001430CB5C8
   Default Value:    0000000142842640
*/
#pragma pack(push, 8)
struct NetworkPerformanceProfileMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(NetworkPerformanceProfileMessage) == 120);

}
