#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835538
   RuntimeId:        02DC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD448
   Default Value:    0000000142B88B1B
*/
#pragma pack(push, 1)
struct AntScenario
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0001 */
#pragma pack(pop)

static_assert(sizeof(AntScenario) == 1);

}
