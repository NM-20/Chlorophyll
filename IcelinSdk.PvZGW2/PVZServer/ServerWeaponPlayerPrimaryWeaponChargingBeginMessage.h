#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EA7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423201C0
   Address:          00000001430C5568
   Default Value:    0000000142861030
*/
#pragma pack(push, 8)
struct ServerWeaponPlayerPrimaryWeaponChargingBeginMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerWeaponPlayerPrimaryWeaponChargingBeginMessage) == 56);

}
