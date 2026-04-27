#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851928
   RuntimeId:        14B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C95
   VfTable:          000000014227F2A8
   Address (Base):   00000001430FBB30
*/
#pragma pack(push, 16)
class PhysicsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class HavokAsset) Asset; /* 0x0018 */
  Vec3 InertiaModifier; /* 0x0020 */
  FB_REFARRAY(class RigidBodyData) RigidBodies; /* 0x0030 */
  FB_HANDLE(class FloatPhysicsData) FloatPhysics; /* 0x0038 */
  FB_FLOAT32 Mass; /* 0x0040 */
  FB_FLOAT32 AngularVelocityDamping; /* 0x0044 */
  FB_FLOAT32 LinearVelocityDamping; /* 0x0048 */
  char pad_004C[0x0004];
  FB_HANDLE(class ProximityData) Proximity; /* 0x0050 */
  FB_REFARRAY(class PhysicsConstraintData) Constraints; /* 0x0058 */
  FB_BOOLEAN MovableParts; /* 0x0060 */
  FB_BOOLEAN IsComposite; /* 0x0061 */
  char pad_0062[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PhysicsEntityData) == 112);

}
