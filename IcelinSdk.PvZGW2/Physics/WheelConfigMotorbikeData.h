#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/WheelConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428513E0
   RuntimeId:        1466
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E0C
   VfTable:          000000014227F568
   Address (Base):   00000001430FBFB0
*/
#pragma pack(push, 16)
class WheelConfigMotorbikeData : public WheelConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxSpringForce; /* 0x0190 */
  FB_FLOAT32 CollisionYawDampeningDuration; /* 0x0194 */
  FB_FLOAT32 CollisionYawDampening; /* 0x0198 */
  char pad_019C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */
#pragma pack(pop)

static_assert(sizeof(WheelConfigMotorbikeData) == 416);

}
