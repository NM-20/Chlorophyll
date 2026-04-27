#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        10D2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422670D0
   Address:          00000001430C9188
   Default Value:    000000014284D048
*/
#pragma pack(push, 8)
struct VehicleToComponentsStartDisabledDamagedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VehicleToComponentsStartDisabledDamagedMessage) == 48);

}
