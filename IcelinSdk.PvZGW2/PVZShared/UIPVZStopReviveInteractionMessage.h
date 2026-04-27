#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B21
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B9E8
   Address:          00000001430C15A8
   Default Value:    00000001428724B0
*/
#pragma pack(push, 8)
struct UIPVZStopReviveInteractionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UIPVZStopReviveInteractionMessage) == 104);

}
