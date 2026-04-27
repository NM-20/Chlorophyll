#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853040
   RuntimeId:        1628
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D6C
   VfTable:          00000001422A1440
   Address (Base):   00000001430EA8A0
*/
#pragma pack(push, 16)
class FilmicEffectsComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 DepthFlashAtmosColor; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  FB_FLOAT32 ChromaticAbberationScale; /* 0x0094 */
  FB_FLOAT32 ChromaticAbberationAspectRatio; /* 0x0098 */
  FB_FLOAT32 VignettingFalloff; /* 0x009C */
  FB_FLOAT32 VignettingLuminancePercent; /* 0x00A0 */
  FB_FLOAT32 LensDistortionGain; /* 0x00A4 */
  FB_FLOAT32 LensDistortionCubicGain; /* 0x00A8 */
  FB_FLOAT32 FrameFlashGain; /* 0x00AC */
  FB_FLOAT32 DepthFlashHalfDistance; /* 0x00B0 */
  FB_FLOAT32 DistanceBlurGain; /* 0x00B4 */
  FB_FLOAT32 DistanceBlurHalfDistance; /* 0x00B8 */
  FB_FLOAT32 EdgeBlurGain; /* 0x00BC */
  FB_FLOAT32 EdgeBlurDepthTargetScale; /* 0x00C0 */
  FB_FLOAT32 EdgeBlurFadeNearDepth; /* 0x00C4 */
  FB_FLOAT32 EdgeBlurFadeFarDepth; /* 0x00C8 */
  FB_FLOAT32 EdgeBlurMatteDilateSize; /* 0x00CC */
  FB_FLOAT32 EdgeBlurMatteBlurKernelSize; /* 0x00D0 */
  FB_FLOAT32 HeatRippleGain; /* 0x00D4 */
  FB_FLOAT32 HeatRippleHorizontalSpeed; /* 0x00D8 */
  FB_FLOAT32 HeatRippleVerticalSpeed; /* 0x00DC */
  FB_FLOAT32 HeatRippleNoiseScale; /* 0x00E0 */
  FB_FLOAT32 HeatRippleNearDistance; /* 0x00E4 */
  FB_FLOAT32 HeatRippleFarDistance; /* 0x00E8 */
  FB_FLOAT32 HeatRippleNearGain; /* 0x00EC */
  FB_FLOAT32 HeatRippleFarGain; /* 0x00F0 */
  char pad_00F4[0x0004];
  FB_HANDLE(class TextureAsset) HeatRippleTexture; /* 0x00F8 */
  FB_BOOLEAN Enable; /* 0x0100 */
  FB_BOOLEAN EnableChromaticAbberation; /* 0x0101 */
  FB_BOOLEAN EnableVignetting; /* 0x0102 */
  FB_BOOLEAN EnableLensDistortion; /* 0x0103 */
  FB_BOOLEAN EnableFrameFlash; /* 0x0104 */
  FB_BOOLEAN EnableDepthFlash; /* 0x0105 */
  FB_BOOLEAN EnableDistanceBlur; /* 0x0106 */
  FB_BOOLEAN EnableEdgeBlur; /* 0x0107 */
  FB_BOOLEAN EnableHeatRipple; /* 0x0108 */
  char pad_0109[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(FilmicEffectsComponentData) == 272);

}
