#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422A1230
   Address:          00000001430C7C48
   Default Value:    0000000142853B60
*/
#pragma pack(push, 8)
struct PerformanceClientLevelLoadMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PerformanceClientLevelLoadMessage) == 96);

}
