#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1801
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B8380
   Address:          00000001430C74E8
   Default Value:    0000000142855030
*/
#pragma pack(push, 8)
struct UIUserDisconnectedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIUserDisconnectedMessage) == 48);

}
