#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        180F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B8260
   Address:          00000001430C7328
   Default Value:    0000000142855340
*/
#pragma pack(push, 16)
struct UIVehicleHitUpdatedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIVehicleHitUpdatedMessage) == 64);

}
