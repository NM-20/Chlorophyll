#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16BE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422A1250
   Address:          00000001430C7CC8
   Default Value:    0000000142853A70
*/
#pragma pack(push, 8)
struct PerformanceClientMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PerformanceClientMessage) == 56);

}
