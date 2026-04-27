#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B3B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B878
   Address:          00000001430C1288
   Default Value:    0000000142872B10
*/
#pragma pack(push, 8)
struct PVZUISetTargetCharacterIconMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZUISetTargetCharacterIconMessage) == 64);

}
