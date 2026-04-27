#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        25BE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014235B0C8
   Address:          00000001430C3308
   Default Value:    000000014286AAA0
*/
#pragma pack(push, 8)
struct UIPopupUpdateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIPopupUpdateMessage) == 80);

}
