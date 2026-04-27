#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862638
   RuntimeId:        206E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9660
   Default Value:    0000000142BFE4C0
*/
#pragma pack(push, 4)
struct VehicleAntMovementBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef MovementSpeedX; /* 0x0000 */
  AntRef MovementSpeedY; /* 0x0014 */
  AntRef VelocityUpDown; /* 0x0028 */
  AntRef AimLeftRight; /* 0x003C */
  AntRef AimUpDown; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0064 */
#pragma pack(pop)

static_assert(sizeof(VehicleAntMovementBinding) == 100);

}
