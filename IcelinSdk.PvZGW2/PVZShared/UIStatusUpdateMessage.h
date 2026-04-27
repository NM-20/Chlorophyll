#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B3A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B8D8
   Address:          00000001430C12A8
   Default Value:    0000000142872AB0
*/
#pragma pack(push, 8)
struct UIStatusUpdateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UIStatusUpdateMessage) == 96);

}
