#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AA9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232AE0
   Address:          00000001430CC1A8
   Default Value:    000000014283FC00
*/
#pragma pack(push, 8)
struct ClientPlayerInteractionEntityInRangeChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerInteractionEntityInRangeChangedMessage) == 64);

}
