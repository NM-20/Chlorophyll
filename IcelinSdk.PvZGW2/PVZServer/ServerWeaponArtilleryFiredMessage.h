#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EA2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320110
   Address:          00000001430C5608
   Default Value:    0000000142860F30
*/
#pragma pack(push, 16)
struct ServerWeaponArtilleryFiredMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ServerWeaponArtilleryFiredMessage) == 80);

}
