#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Emitter/EmittableType.h>
#include <IcelinSdk.PvZGW2/Emitter/EmittableAlignment.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterDrawOrder.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A158
   RuntimeId:        0750
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E3D
   VfTable:          00000001421FF328
   Address (Base):   00000001431156F0
*/
#pragma pack(push, 16)
class EmitterTemplateData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ProcessorData) RootProcessor; /* 0x0010 */
  FB_UINT32 MaxCount; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 WorldAlignmentDirection; /* 0x0020 */
  Vec3 OrientToPosition; /* 0x0030 */
  FB_FLOAT32 Lifetime; /* 0x0040 */
  FB_FLOAT32 TimeScale; /* 0x0044 */
  FB_UINT32 LifetimeFrameCount; /* 0x0048 */
  FB_FLOAT32 KillRibbonTailDistance; /* 0x004C */
  EmittableType EmittableType; /* 0x0050 */
  EmittableAlignment EmittableAlignment; /* 0x0054 */
  FB_FLOAT32 MotionStretchMultiplier; /* 0x0058 */
  FB_FLOAT32 MotionStretchViewMultiplier; /* 0x005C */
  FB_FLOAT32 MotionStretchLengthClamp; /* 0x0060 */
  FB_FLOAT32 MotionStretchRelativeLengthClamp; /* 0x0064 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0068 */
  FB_HANDLE(class ObjectVariation) ObjectVariation; /* 0x0070 */
  FB_FLOAT32 EmissiveExposureFactor; /* 0x0078 */
  FB_FLOAT32 VertexPixelLightingBlendFactor; /* 0x007C */
  FB_FLOAT32 GlobalLocalNormalBlendFactor; /* 0x0080 */
  FB_FLOAT32 SoftParticlesFadeDistanceMultiplier; /* 0x0084 */
  FB_FLOAT32 LightWrapAroundFactor; /* 0x0088 */
  FB_FLOAT32 BentNormalFactor; /* 0x008C */
  FB_FLOAT32 LightMultiplier; /* 0x0090 */
  FB_FLOAT32 BendingFactor; /* 0x0094 */
  FB_FLOAT32 MicroVariationSmoothingFactor; /* 0x0098 */
  FB_FLOAT32 SunVolumetricShadowAbsorptionScale; /* 0x009C */
  FB_FLOAT32 SunVolumetricShadowAbsorptionR; /* 0x00A0 */
  FB_FLOAT32 SunVolumetricShadowAbsorptionG; /* 0x00A4 */
  FB_FLOAT32 SunVolumetricShadowAbsorptionB; /* 0x00A8 */
  FB_FLOAT32 SunVolumetricShadowPhaseG0; /* 0x00AC */
  FB_FLOAT32 SunVolumetricShadowPhaseG1; /* 0x00B0 */
  FB_FLOAT32 SunVolumetricShadowOffset; /* 0x00B4 */
  FB_FLOAT32 CameraBias; /* 0x00B8 */
  FB_FLOAT32 FlipUProbability; /* 0x00BC */
  FB_FLOAT32 FlipVProbability; /* 0x00C0 */
  char pad_00C4[0x0004];
  SurfaceShaderInstanceDataStruct Shader; /* 0x00C8 */
  FB_FLOAT32 AnimationFrameCount; /* 0x00F0 */
  FB_FLOAT32 AnimationFrameColumnCount; /* 0x00F4 */
  EmitterDrawOrder EmitterDrawOrder; /* 0x00F8 */
  FB_FLOAT32 ParticleCullingFactor; /* 0x00FC */
  FB_FLOAT32 MinSpawnDistance; /* 0x0100 */
  FB_FLOAT32 MaxSpawnDistance; /* 0x0104 */
  FB_FLOAT32 MinScreenArea; /* 0x0108 */
  FB_FLOAT32 MeshCullingDistance; /* 0x010C */
  FB_INT32 SkipUpdateMaxCount; /* 0x0110 */
  FB_FLOAT32 PreciseWindAndForceMaxDistance; /* 0x0114 */
  FB_FLOAT32 TurbulenceMaxDistance; /* 0x0118 */
  FB_FLOAT32 DistanceScaleLength; /* 0x011C */
  FB_FLOAT32 DistanceScaleNearValue; /* 0x0120 */
  FB_FLOAT32 DistanceScaleFarValue; /* 0x0124 */
  FB_FLOAT32 SpeedNormalizationValue; /* 0x0128 */
  FB_FLOAT32 WindSpeedNormalizationValue; /* 0x012C */
  FB_FLOAT32 TravelledDistanceNormalizationValue; /* 0x0130 */
  char pad_0134[0x0004];
  FB_REFARRAY(class EffectParameter) PerParticleEffectParameters; /* 0x0138 */
  FB_FLOAT32 MinDistanceTravelledBeforeSpawn; /* 0x0140 */
  FB_FLOAT32 CullFadeNearDistance; /* 0x0144 */
  FB_FLOAT32 CullFadeNearRange; /* 0x0148 */
  FB_FLOAT32 CullFadeFarDistance; /* 0x014C */
  FB_FLOAT32 CullFadeFarRange; /* 0x0150 */
  char pad_0154[0x0004];
  FB_HANDLE(class SoundAsset) SpawnSound; /* 0x0158 */
  FB_BOOLEAN RepeatParticleSpawning; /* 0x0160 */
  FB_BOOLEAN FollowSpawnSource; /* 0x0161 */
  FB_BOOLEAN FollowSpawnSourceVelocity; /* 0x0162 */
  FB_BOOLEAN KillParticlesWithEmitter; /* 0x0163 */
  FB_BOOLEAN SmoothRibbonSpawn; /* 0x0164 */
  FB_BOOLEAN ExclusionVolumeCullEnable; /* 0x0165 */
  FB_BOOLEAN Emissive; /* 0x0166 */
  FB_BOOLEAN Opaque; /* 0x0167 */
  FB_BOOLEAN MeshParticlesMotionBlur; /* 0x0168 */
  FB_BOOLEAN ReceiveSunShadow; /* 0x0169 */
  FB_BOOLEAN ForceNiceSorting; /* 0x016A */
  FB_BOOLEAN LocalSpace; /* 0x016B */
  FB_BOOLEAN AllowScale; /* 0x016C */
  FB_BOOLEAN CameraSpace; /* 0x016D */
  FB_BOOLEAN TransparencySunShadowEnable; /* 0x016E */
  FB_BOOLEAN SunVolumetricShadowEnable; /* 0x016F */
  FB_BOOLEAN CastPlanarReflectionEnable; /* 0x0170 */
  FB_BOOLEAN ForceFullRes; /* 0x0171 */
  FB_BOOLEAN FogFade; /* 0x0172 */
  FB_BOOLEAN LockRibbonDirection; /* 0x0173 */
  FB_BOOLEAN EmitterSpawnSkippable; /* 0x0174 */
  FB_BOOLEAN PauseSimulationWhenCulled; /* 0x0175 */
  FB_BOOLEAN AcceptGlobalParameter1; /* 0x0176 */
  FB_BOOLEAN AcceptGlobalParameter2; /* 0x0177 */
  FB_BOOLEAN AcceptGlobalParameter3; /* 0x0178 */
  FB_BOOLEAN SkipNearCameraFade; /* 0x0179 */
  FB_BOOLEAN EmitterWindEvaluationEnable; /* 0x017A */
  FB_BOOLEAN EmittableWindEvaluationEnable; /* 0x017B */
  char pad_017C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */
#pragma pack(pop)

static_assert(sizeof(EmitterTemplateData) == 384);

}
