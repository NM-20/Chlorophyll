#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C41
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422453C0
   Address:          00000001430CA2E8
   Default Value:    0000000142843EB8
*/
#pragma pack(push, 8)
struct ServerVehicleForceArmamentReturnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerVehicleForceArmamentReturnMessage) == 56);

}
