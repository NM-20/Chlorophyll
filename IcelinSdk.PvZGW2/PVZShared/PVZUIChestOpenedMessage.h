#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B40
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B768
   Address:          00000001430C11E8
   Default Value:    0000000142872BC0
*/
#pragma pack(push, 8)
struct PVZUIChestOpenedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZUIChestOpenedMessage) == 72);

}
