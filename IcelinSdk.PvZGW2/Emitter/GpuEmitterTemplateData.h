#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A258
   RuntimeId:        0760
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E36
   VfTable:          00000001421FF2B0
   Address (Base):   0000000143115630
*/
#pragma pack(push, 16)
class GpuEmitterTemplateData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpawnRate; /* 0x0010 */
  FB_FLOAT32 Lifetime; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 Color; /* 0x0020 */
  Vec3 SimulationSpan; /* 0x0030 */
  Vec3 GlobalAcceleration; /* 0x0040 */
  FB_UINT32 MaxParticleCount; /* 0x0050 */
  FB_FLOAT32 EmitterLifetime; /* 0x0054 */
  FB_FLOAT32 MinSpawnDistance; /* 0x0058 */
  FB_FLOAT32 MaxSpawnDistance; /* 0x005C */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0060 */
  FB_FLOAT32 ParticleDrag; /* 0x0068 */
  FB_FLOAT32 SpeedNormalizationValue; /* 0x006C */
  FB_HANDLE(class AtlasTextureAsset) BaseTexture; /* 0x0070 */
  FB_HANDLE(class UpdateTransparencyData) Transparency; /* 0x0078 */
  FB_HANDLE(class PolynomialData) TransparencyPolynomial; /* 0x0080 */
  FB_HANDLE(class UpdateColorData) ColorProcessor; /* 0x0088 */
  FB_FLOAT32 StreakFactor; /* 0x0090 */
  FB_FLOAT32 EmissiveExposureFactor; /* 0x0094 */
  FB_HANDLE(class SpawnPositionData) SpawnPosition; /* 0x0098 */
  FB_HANDLE(class RandomXYZEvaluatorData) SpawnPositionRandomXYZ; /* 0x00A0 */
  FB_HANDLE(class SphereEvaluatorData) SpawnPositionSphere; /* 0x00A8 */
  FB_HANDLE(class SuperSphereEvaluatorData) SpawnPositionSuperSphere; /* 0x00B0 */
  FB_HANDLE(class BoxEvaluatorData) SpawnPositionBox; /* 0x00B8 */
  FB_HANDLE(class SpawnSizeData) SpawnSize; /* 0x00C0 */
  FB_HANDLE(class RandomXYZEvaluatorData) SpawnSizeRandomXYZ; /* 0x00C8 */
  FB_HANDLE(class SpawnSpeedData) SpawnSpeed; /* 0x00D0 */
  FB_HANDLE(class RandomXYZEvaluatorData) SpawnSpeedRandomXYZ; /* 0x00D8 */
  FB_HANDLE(class SpawnDirectionData) SpawnDirection; /* 0x00E0 */
  FB_HANDLE(class RandomXYZEvaluatorData) SpawnDirectionRandomXYZ; /* 0x00E8 */
  FB_HANDLE(class SphereEvaluatorData) SpawnDirectionSphere; /* 0x00F0 */
  FB_HANDLE(class SuperSphereEvaluatorData) SpawnDirectionSuperSphere; /* 0x00F8 */
  FB_HANDLE(class BoxEvaluatorData) SpawnDirectionBox; /* 0x0100 */
  FB_HANDLE(class PolynomialData) ParticleSizePolynomial; /* 0x0108 */
  FB_FLOAT32 RotationSpeed; /* 0x0110 */
  FB_FLOAT32 RotationSpeedVariance; /* 0x0114 */
  FB_HANDLE(class PolynomialData) RotationSpeedPolynomial; /* 0x0118 */
  FB_FLOAT32 CollisionThickness; /* 0x0120 */
  FB_FLOAT32 CollisionDampening; /* 0x0124 */
  FB_HANDLE(class TextureAsset) XZFlowMap; /* 0x0128 */
  FB_HANDLE(class TextureAsset) XYFlowMap; /* 0x0130 */
  FB_HANDLE(class TextureAsset) YZFlowMap; /* 0x0138 */
  FB_FLOAT32 FooParam; /* 0x0140 */
  FB_BOOLEAN KillParticlesWithEmitter; /* 0x0144 */
  FB_BOOLEAN ForceFullRes; /* 0x0145 */
  FB_BOOLEAN AlignToScreenSpace; /* 0x0146 */
  FB_BOOLEAN AlignToVelocityVec; /* 0x0147 */
  FB_BOOLEAN Emissive; /* 0x0148 */
  FB_BOOLEAN LocalSpace; /* 0x0149 */
  FB_BOOLEAN AllowDefaultFlowMap; /* 0x014A */
  char pad_014B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(GpuEmitterTemplateData) == 336);

}
