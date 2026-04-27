#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855FC8
   RuntimeId:        18B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D81
   VfTable:          00000001422C4E28
   Address (Base):   00000001430E8FE0
*/
#pragma pack(push, 16)
class ScreenSpaceRaytraceComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 CameraFadeStart; /* 0x0084 */
  FB_FLOAT32 CameraFadeLength; /* 0x0088 */
  FB_FLOAT32 DistanceFadeStart; /* 0x008C */
  FB_FLOAT32 DistanceFadeLength; /* 0x0090 */
  FB_FLOAT32 ScreenFadeStart; /* 0x0094 */
  FB_FLOAT32 ScreenFadeLength; /* 0x0098 */
  FB_FLOAT32 BorderFadeStart; /* 0x009C */
  FB_FLOAT32 BorderFadeLength; /* 0x00A0 */
  FB_FLOAT32 MirrorFadeStart; /* 0x00A4 */
  FB_FLOAT32 MirrorFadeLength; /* 0x00A8 */
  FB_FLOAT32 ThicknessFadeStart; /* 0x00AC */
  FB_FLOAT32 ThicknessFadeLength; /* 0x00B0 */
  FB_FLOAT32 RoughnessFadeStart; /* 0x00B4 */
  FB_FLOAT32 RoughnessFadeLength; /* 0x00B8 */
  char pad_00BC[0x0004];
  FB_HANDLE(class TextureAsset) NormalFadeTexture; /* 0x00C0 */
  FB_UINT32 MinSamples; /* 0x00C8 */
  FB_UINT32 MaxSamples; /* 0x00CC */
  FB_UINT32 TemporalSamples; /* 0x00D0 */
  FB_UINT32 TemporalPeriod; /* 0x00D4 */
  FB_FLOAT32 MinRoughness; /* 0x00D8 */
  FB_FLOAT32 MaxRoughness; /* 0x00DC */
  FB_UINT32 ResolveSamples; /* 0x00E0 */
  FB_FLOAT32 NoiseThreshold; /* 0x00E4 */
  FB_FLOAT32 ClampThreshold; /* 0x00E8 */
  FB_FLOAT32 ImportanceSamplingBias; /* 0x00EC */
  FB_FLOAT32 FilterBias; /* 0x00F0 */
  FB_FLOAT32 FilterAngularBias; /* 0x00F4 */
  FB_FLOAT32 TemporalFilterResponsiveness; /* 0x00F8 */
  FB_BOOLEAN RaytraceEnable; /* 0x00FC */
  char pad_00FD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(ScreenSpaceRaytraceComponentData) == 256);

}
