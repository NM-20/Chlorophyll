#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E8B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320340
   Address:          00000001430C58E8
   Default Value:    0000000142860A40
*/
#pragma pack(push, 8)
struct StatGainAwardMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatGainAwardMessage) == 64);

}
