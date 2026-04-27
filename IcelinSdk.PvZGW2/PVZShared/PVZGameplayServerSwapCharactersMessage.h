#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28BF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E348
   Address:          00000001430C2488
   Default Value:    000000014286EF90
*/
#pragma pack(push, 8)
struct PVZGameplayServerSwapCharactersMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZGameplayServerSwapCharactersMessage) == 80);

}
