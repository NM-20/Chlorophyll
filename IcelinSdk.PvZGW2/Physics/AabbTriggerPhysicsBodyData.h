#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBodyData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyMotionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851C50
   RuntimeId:        14E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09BA
   VfTable:          000000014227EE60
   Address (Base):   00000001430BFD70
*/
#pragma pack(push, 16)
class AabbTriggerPhysicsBodyData : public PhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 HalfExtents; /* 0x0030 */
  RigidBodyMotionType MotionType; /* 0x0040 */
  char pad_0044[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(AabbTriggerPhysicsBodyData) == 80);

}
