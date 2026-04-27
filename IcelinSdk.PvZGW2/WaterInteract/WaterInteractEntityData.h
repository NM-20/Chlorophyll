#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/WaterInteract/AmbientWaveSettings.h>
#include <IcelinSdk.PvZGW2/Core/PlatformScalableInt.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/WaterInteract/WaterEntityClipInfo.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876DD8
   RuntimeId:        2E2C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B1F
   VfTable:          0000000142395C50
   Address (Base):   00000001430D84B0
*/
#pragma pack(push, 16)
class WaterInteractEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 TileOffset; /* 0x0090 */
  ::fb::AmbientWaveSettings AmbientWaveSettings; /* 0x00A0 */
  ::fb::AmbientWaveSettings DetailWaveSettings; /* 0x01A0 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader; /* 0x02A0 */
  FB_FLOAT32 ProjectorElevation; /* 0x02A8 */
  FB_FLOAT32 WaveAmplitudeScale; /* 0x02AC */
  FB_FLOAT32 Choppiness; /* 0x02B0 */
  FB_FLOAT32 TileDimension; /* 0x02B4 */
  PlatformScalableInt SimulationResolution; /* 0x02B8 */
  FB_FLOAT32 DetailTileDimension; /* 0x02DC */
  QualityScalableInt DetailSimulationResolution; /* 0x02E0 */
  FB_HANDLE(class WaterEffectSetup) EffectSetup; /* 0x02F0 */
  FB_FLOAT32 ShoreWaveAmplitude; /* 0x02F8 */
  FB_FLOAT32 ShoreWaveFrequency; /* 0x02FC */
  FB_FLOAT32 ShoreWindAngle; /* 0x0300 */
  FB_FLOAT32 ShoreWindWavelength; /* 0x0304 */
  FB_FLOAT32 ShoreWavelength; /* 0x0308 */
  FB_FLOAT32 ShoreDepth; /* 0x030C */
  MaterialDecl MaterialPair; /* 0x0310 */
  QualityScalableInt InteractiveWavesGridCount; /* 0x0314 */
  QualityScalableInt InteractiveWavesCellCount; /* 0x0324 */
  FB_FLOAT32 InteractiveWaveDisturbanceScale; /* 0x0334 */
  FB_HANDLE(class TextureAsset) InteractiveFoamSplatTexture; /* 0x0338 */
  FB_FLOAT32 InteractiveFoamHalfLife; /* 0x0340 */
  FB_FLOAT32 InteractiveFoamTargetScale; /* 0x0344 */
  FB_FLOAT32 InteractiveFoamSplatInterval; /* 0x0348 */
  WaterEntityClipInfo ClipInfo; /* 0x034C */
  FB_BOOLEAN WaveSimulation; /* 0x0351 */
  FB_BOOLEAN Visible; /* 0x0352 */
  QualityScalableBool DetailSimulation; /* 0x0353 */
  FB_BOOLEAN ShorelineEnable; /* 0x0357 */
  QualityScalableBool InteractiveWavesEnable; /* 0x0358 */
  char pad_035C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0360 */
#pragma pack(pop)

static_assert(sizeof(WaterInteractEntityData) == 864);

}
