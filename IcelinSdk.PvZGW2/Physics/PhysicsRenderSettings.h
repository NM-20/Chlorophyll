#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851E20
   RuntimeId:        1500
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E09
   VfTable:          000000014227EB80
   Address (Base):   00000001430DB450
*/
#pragma pack(push, 8)
class PhysicsRenderSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 RenderTerrainMinMaxLevel; /* 0x0010 */
  FB_FLOAT32 ViewDistance; /* 0x0014 */
  FB_INT32 RenderSpecificPart; /* 0x0018 */
  FB_BOOLEAN RenderServer; /* 0x001C */
  FB_BOOLEAN RenderClient; /* 0x001D */
  FB_BOOLEAN RenderEffectWorld; /* 0x001E */
  FB_BOOLEAN RenderStatic; /* 0x001F */
  FB_BOOLEAN RenderDetail; /* 0x0020 */
  FB_BOOLEAN RenderGroup; /* 0x0021 */
  FB_BOOLEAN RenderUngrouped; /* 0x0022 */
  FB_BOOLEAN RenderRagdoll; /* 0x0023 */
  FB_BOOLEAN RenderWater; /* 0x0024 */
  FB_BOOLEAN RenderTerrain; /* 0x0025 */
  FB_BOOLEAN RenderCharactersCollisionShape; /* 0x0026 */
  FB_BOOLEAN RenderCharactersRaycastShape; /* 0x0027 */
  FB_BOOLEAN RenderAabbTrigger; /* 0x0028 */
  FB_BOOLEAN RenderCharacterCollision; /* 0x0029 */
  FB_BOOLEAN RenderSolidGeometry; /* 0x002A */
  FB_BOOLEAN UseShapeCache; /* 0x002B */
  FB_BOOLEAN RenderConstraints; /* 0x002C */
  FB_BOOLEAN RenderOnlyContactConstraints; /* 0x002D */
  FB_BOOLEAN RenderConstraintCount; /* 0x002E */
  FB_BOOLEAN RenderActiveConstraintCount; /* 0x002F */
  FB_BOOLEAN RenderSimulationIslands; /* 0x0030 */
  FB_BOOLEAN RenderBroadphaseHandles; /* 0x0031 */
  FB_BOOLEAN RenderCollisionVertexCount; /* 0x0032 */
  FB_BOOLEAN RenderInteractingVertexCount; /* 0x0033 */
  FB_BOOLEAN RenderInteractingShapeCount; /* 0x0034 */
  FB_BOOLEAN RenderPenetrationDistance; /* 0x0035 */
  FB_BOOLEAN RenderMidphaseCheckCount; /* 0x0036 */
  FB_BOOLEAN RenderDestructionConnections; /* 0x0037 */
  FB_BOOLEAN RenderActions; /* 0x0038 */
  FB_BOOLEAN RenderSleepStatus; /* 0x0039 */
  FB_BOOLEAN RenderQualityType; /* 0x003A */
  FB_BOOLEAN RenderPartBoundingBoxes; /* 0x003B */
  FB_BOOLEAN RenderOnlyBoundingBoxes; /* 0x003C */
  FB_BOOLEAN RenderRigidBodyTransform; /* 0x003D */
  FB_BOOLEAN RenderInertia; /* 0x003E */
  FB_BOOLEAN RenderCenterOfMass; /* 0x003F */
  FB_BOOLEAN RenderLinearVelocity; /* 0x0040 */
  FB_BOOLEAN RenderCollidesWithTerrain; /* 0x0041 */
  FB_BOOLEAN RenderCollisionSpheres; /* 0x0042 */
  FB_BOOLEAN RenderEntityStats; /* 0x0043 */
  FB_BOOLEAN RenderWorldStats; /* 0x0044 */
  FB_BOOLEAN ShowContactsInWorldStats; /* 0x0045 */
  FB_BOOLEAN ShowInactiveContactsInWorldStats; /* 0x0046 */
  FB_BOOLEAN ShowPhantomsInWorldStats; /* 0x0047 */
  FB_BOOLEAN ShowFixedObjectsInWorldStats; /* 0x0048 */
  FB_BOOLEAN RenderMemoryUsed; /* 0x0049 */
  FB_BOOLEAN CollisionSpawnDebug; /* 0x004A */
  FB_BOOLEAN RenderHeatMap; /* 0x004B */
  FB_BOOLEAN RenderHeatMapFromToi; /* 0x004C */
  FB_BOOLEAN RenderInvalidSpawnPositions; /* 0x004D */
  FB_BOOLEAN RenderAddToWorldMap; /* 0x004E */
  char pad_004F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PhysicsRenderSettings) == 80);

}
