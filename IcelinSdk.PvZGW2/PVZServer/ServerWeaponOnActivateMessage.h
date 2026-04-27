#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E9E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320150
   Address:          00000001430C5688
   Default Value:    0000000142860E48
*/
#pragma pack(push, 8)
struct ServerWeaponOnActivateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerWeaponOnActivateMessage) == 48);

}
