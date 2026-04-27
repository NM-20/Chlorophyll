#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A99
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232BE0
   Address:          00000001430CC3A8
   Default Value:    000000014283F830
*/
#pragma pack(push, 8)
struct ClientPlayerEnterExitVehicleMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerEnterExitVehicleMessage) == 72);

}
