#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/WorldRender/ShadowFilteringType.h>
#include <IcelinSdk.PvZGW2/Render/ShaderShadowmapQuality.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Render/TextureAddress.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855CE8
   RuntimeId:        1884
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D6D
   VfTable:          00000001422BB710
   Address (Base):   00000001430E9640
*/
#pragma pack(push, 16)
class OutdoorLightComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 SunColor; /* 0x0080 */
  Vec3 FinalSunLuminance; /* 0x0090 */
  Vec3 FinalSunIlluminance; /* 0x00A0 */
  Vec3 OuterSpaceSunLuminance; /* 0x00B0 */
  Vec3 OuterSpaceSunIlluminance1; /* 0x00C0 */
  Vec3 OuterSpaceSunIlluminance2; /* 0x00D0 */
  Vec3 SkyColor; /* 0x00E0 */
  Vec3 GroundColor; /* 0x00F0 */
  Realm Realm; /* 0x0100 */
  FB_FLOAT32 SunRotationX; /* 0x0104 */
  FB_FLOAT32 SunRotationY; /* 0x0108 */
  FB_FLOAT32 ShadowSunRotationX; /* 0x010C */
  FB_FLOAT32 ShadowSunRotationY; /* 0x0110 */
  FB_FLOAT32 SunIntensity; /* 0x0114 */
  FB_FLOAT32 SunAngularRadius; /* 0x0118 */
  FB_FLOAT32 SkyLightAngleFactor; /* 0x011C */
  FB_FLOAT32 SunSpecularScale; /* 0x0120 */
  FB_FLOAT32 SkyEnvmapShadowScale; /* 0x0124 */
  FB_FLOAT32 SunShadowHeightScale; /* 0x0128 */
  ShadowFilteringType SunShadowFilterType; /* 0x012C */
  ShaderShadowmapQuality SunShadowForwardQuality; /* 0x0130 */
  FB_INT32 SunPcssInitialSampleCount; /* 0x0134 */
  FB_INT32 SunPcssMaximumSampleCount; /* 0x0138 */
  FB_FLOAT32 SunPcssFilterErrorThresholdPct; /* 0x013C */
  FB_FLOAT32 SunPenumbraSize; /* 0x0140 */
  FB_FLOAT32 SunPcssShadowFilterScale; /* 0x0144 */
  FB_HANDLE(class TextureAsset) CloudShadowTexture; /* 0x0148 */
  Vec2 CloudShadowSpeed; /* 0x0150 */
  FB_FLOAT32 CloudShadowSize; /* 0x0158 */
  FB_FLOAT32 CloudShadowCoverage; /* 0x015C */
  FB_FLOAT32 CloudShadowExponent; /* 0x0160 */
  FB_FLOAT32 CloudShadowStartFade; /* 0x0164 */
  FB_FLOAT32 CloudShadowsFadeDistance; /* 0x0168 */
  Vec2 CloudXZTranslation; /* 0x016C */
  TextureAddress CloudShadowAddressingMode; /* 0x0174 */
  FB_FLOAT32 TranslucencyAmbient; /* 0x0178 */
  FB_FLOAT32 TranslucencyScale; /* 0x017C */
  FB_FLOAT32 TranslucencyPower; /* 0x0180 */
  FB_FLOAT32 TranslucencyDistortion; /* 0x0184 */
  FB_FLOAT32 ParticleSunShadowFactor; /* 0x0188 */
  FB_FLOAT32 ParticleSunShadowSmoothing; /* 0x018C */
  FB_BOOLEAN Enable; /* 0x0190 */
  FB_BOOLEAN ShadowSunRotationEnable; /* 0x0191 */
  FB_BOOLEAN SunPcssFilterAdaptive; /* 0x0192 */
  FB_BOOLEAN CloudShadowEnable; /* 0x0193 */
  FB_BOOLEAN CloudShadowIsTopDown; /* 0x0194 */
  char pad_0195[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */
#pragma pack(pop)

static_assert(sizeof(OutdoorLightComponentData) == 416);

}
