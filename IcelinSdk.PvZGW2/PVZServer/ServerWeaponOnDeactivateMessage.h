#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E9F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320140
   Address:          00000001430C5668
   Default Value:    0000000142860E78
*/
#pragma pack(push, 8)
struct ServerWeaponOnDeactivateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerWeaponOnDeactivateMessage) == 48);

}
