#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23B2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F4D8
   Address:          00000001430C3E48
   Default Value:    00000001428675E0
*/
#pragma pack(push, 8)
struct PVZGameplayReviveStartedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZGameplayReviveStartedMessage) == 112);

}
