#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2373
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142350768
   Address:          00000001430C4568
   Default Value:    0000000142866120
*/
#pragma pack(push, 8)
struct NetworkPlayerSelectedWeaponMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(NetworkPlayerSelectedWeaponMessage) == 104);

}
