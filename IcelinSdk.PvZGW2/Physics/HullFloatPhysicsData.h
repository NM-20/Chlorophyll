#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/FloatPhysicsData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851058
   RuntimeId:        1432
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F9
   VfTable:          000000014227F6C0
   Address (Base):   00000001430DB810
*/
#pragma pack(push, 16)
class HullFloatPhysicsData : public FloatPhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 WaterResistanceAxisMod; /* 0x0020 */
  Vec3 WaterFrictionAxisMod; /* 0x0030 */
  Vec3 Offset; /* 0x0040 */
  FB_INT32 SubSurfaceSplits; /* 0x0050 */
  FB_FLOAT32 Depth; /* 0x0054 */
  FB_FLOAT32 Width; /* 0x0058 */
  FB_FLOAT32 Length; /* 0x005C */
  FB_FLOAT32 FrontCurveDegree; /* 0x0060 */
  FB_FLOAT32 SideCurveDegree; /* 0x0064 */
  FB_FLOAT32 NonEngineSteer; /* 0x0068 */
  FB_FLOAT32 NonEngineSteerMinSpeed; /* 0x006C */
  FB_FLOAT32 NonEngineSteerMaxSpeed; /* 0x0070 */
  FB_FLOAT32 WaterDampeningMod; /* 0x0074 */
  FB_FLOAT32 LiftModifier; /* 0x0078 */
  FB_FLOAT32 SupportSizeMod; /* 0x007C */
  FB_FLOAT32 AngularDampening; /* 0x0080 */
  FB_FLOAT32 FrictionThrottleModifier; /* 0x0084 */
  char pad_0088[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(HullFloatPhysicsData) == 144);

}
