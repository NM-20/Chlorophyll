#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23B3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F438
   Address:          00000001430C3E28
   Default Value:    0000000142867650
*/
#pragma pack(push, 8)
struct PVZGameplayReviveCancelledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(PVZGameplayReviveCancelledMessage) == 104);

}
