#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBodyData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyMotionType.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyQualityType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851B68
   RuntimeId:        14DA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B5
   VfTable:          000000014227EF78
   Address (Base):   00000001430BC8C0
*/
#pragma pack(push, 16)
class RigidBodyData : public PhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 CenterOfMass; /* 0x0030 */
  Vec3 InertiaModifier; /* 0x0040 */
  LinearTransform Transform; /* 0x0050 */
  LinearTransform KeyframeTransform; /* 0x0090 */
  RigidBodyType RigidBodyType; /* 0x00D0 */
  FB_FLOAT32 Mass; /* 0x00D4 */
  MaterialDecl Material; /* 0x00D8 */
  FB_FLOAT32 DynamicFriction; /* 0x00DC */
  FB_FLOAT32 StaticFriction; /* 0x00E0 */
  FB_FLOAT32 Restitution; /* 0x00E4 */
  FB_FLOAT32 AngularVelocityDamping; /* 0x00E8 */
  FB_FLOAT32 LinearVelocityDamping; /* 0x00EC */
  RigidBodyMotionType MotionType; /* 0x00F0 */
  RigidBodyQualityType QualityType; /* 0x00F4 */
  FB_UINT32 SystemGroup; /* 0x00F8 */
  FB_UINT32 SubSystemId; /* 0x00FC */
  FB_UINT32 SubSystemIdNoCollide; /* 0x0100 */
  char pad_0104[0x0004];
  FB_STDARRAY(FB_UINT32) PartIndices; /* 0x0108 */
  FB_HANDLE(class FloatPhysicsData) FloatPhysics; /* 0x0110 */
  FB_BOOLEAN ComputeCenterOfMass; /* 0x0118 */
  FB_BOOLEAN IsRootController; /* 0x0119 */
  char pad_011A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(RigidBodyData) == 288);

}
