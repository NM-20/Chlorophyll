#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C3F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245420
   Address:          00000001430CA328
   Default Value:    0000000142846A70
*/
#pragma pack(push, 8)
struct ServerVehicleDestroyedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerVehicleDestroyedMessage) == 72);

}
