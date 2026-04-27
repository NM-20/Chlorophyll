#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1800
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B8370
   Address:          00000001430C7508
   Default Value:    0000000142855000
*/
#pragma pack(push, 8)
struct UIUserConnectedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIUserConnectedMessage) == 48);

}
