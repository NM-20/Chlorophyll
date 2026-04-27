#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BoneComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/WheelPhysicsType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CA88
   RuntimeId:        108A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D19
   VfTable:          00000001422675D8
   Address (Base):   00000001430D0BC0
*/
#pragma pack(push, 16)
class WheelComponentData : public BoneComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WheelConfigData) Config; /* 0x0070 */
  WheelPhysicsType PhysicsType; /* 0x0078 */
  FB_FLOAT32 EffectClampVelocity; /* 0x007C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(WheelComponentData) == 128);

}
