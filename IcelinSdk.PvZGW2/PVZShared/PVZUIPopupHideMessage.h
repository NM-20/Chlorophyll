#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2557
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014235B4C0
   Address:          00000001430C3568
   Default Value:    0000000142866C78
*/
#pragma pack(push, 8)
struct PVZUIPopupHideMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZUIPopupHideMessage) == 56);

}
