#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/FakePhysicsData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850D40
   RuntimeId:        1408
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1141
   VfTable:          000000014227F8F8
   Address (Base):   00000001430EB380
*/
#pragma pack(push, 16)
class FakeHingeData : public FakePhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinAngle; /* 0x0038 */
  FB_FLOAT32 MaxAngle; /* 0x003C */
  Vec3 Pivot; /* 0x0040 */
  Vec3 RotationAxis; /* 0x0050 */
  Vec3 ExtensionAxis; /* 0x0060 */
  FB_FLOAT32 AngularDampening; /* 0x0070 */
  FB_FLOAT32 PullbackAcceleration; /* 0x0074 */
  FB_FLOAT32 ProgressiveExponent; /* 0x0078 */
  FB_FLOAT32 InertiaModifier; /* 0x007C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(FakeHingeData) == 128);

}
