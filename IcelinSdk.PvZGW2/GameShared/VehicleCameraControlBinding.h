#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D0E0
   RuntimeId:        10D7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BADE0
   Default Value:    0000000142BF4EE0
*/
#pragma pack(push, 4)
struct VehicleCameraControlBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef EnableAnimatedVehicleCamera; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(VehicleCameraControlBinding) == 20);

}
