#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/WorldRender/SkyType.h>
#include <IcelinSdk.PvZGW2/WorldRender/AlphaOutputMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855D68
   RuntimeId:        188C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D80
   VfTable:          00000001422BB690
   Address (Base):   00000001430E9580
*/
#pragma pack(push, 16)
class SkyComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 CloudLayerSunColor; /* 0x0080 */
  Vec3 CloudLayer1Color; /* 0x0090 */
  Vec3 CloudLayer2Color; /* 0x00A0 */
  Vec3 RayleighScatteringCoefficient; /* 0x00B0 */
  Vec3 Light1Color; /* 0x00C0 */
  Vec3 Light2Color; /* 0x00D0 */
  Vec3 RayleighPolarization; /* 0x00E0 */
  Vec3 MiePolarization; /* 0x00F0 */
  Vec3 OutdoorLightScale; /* 0x0100 */
  Vec4 ForwardScatteringDepthVisibility; /* 0x0110 */
  Vec3 ForwardScatteringOutdoorLightTint; /* 0x0120 */
  Vec3 HeightFogColorAdd; /* 0x0130 */
  Vec3 HeightFogColorMult; /* 0x0140 */
  Realm Realm; /* 0x0150 */
  SkyType SkyType; /* 0x0154 */
  FB_FLOAT32 LuminanceScale; /* 0x0158 */
  char pad_015C[0x0004];
  FB_HANDLE(class TextureAsset) SkyGradientTexture; /* 0x0160 */
  AlphaOutputMode AlphaOutput; /* 0x0168 */
  FB_FLOAT32 HdriRotation; /* 0x016C */
  FB_HANDLE(class TextureAsset) HdriTexture; /* 0x0170 */
  FB_FLOAT32 SunSize; /* 0x0178 */
  FB_FLOAT32 SunScale; /* 0x017C */
  FB_FLOAT32 PanoramicUVMinX; /* 0x0180 */
  FB_FLOAT32 PanoramicUVMaxX; /* 0x0184 */
  FB_FLOAT32 PanoramicUVMinY; /* 0x0188 */
  FB_FLOAT32 PanoramicUVMaxY; /* 0x018C */
  FB_FLOAT32 PanoramicTileFactor; /* 0x0190 */
  FB_FLOAT32 PanoramicRotation; /* 0x0194 */
  FB_HANDLE(class TextureAsset) PanoramicTexture; /* 0x0198 */
  FB_HANDLE(class TextureAsset) PanoramicAlphaTexture; /* 0x01A0 */
  FB_HANDLE(class TextureAsset) CloudLayerMaskTexture; /* 0x01A8 */
  FB_FLOAT32 CloudLayer1Altitude; /* 0x01B0 */
  FB_FLOAT32 CloudLayer1TileFactor; /* 0x01B4 */
  FB_FLOAT32 CloudLayer1Rotation; /* 0x01B8 */
  FB_FLOAT32 CloudLayer1Speed; /* 0x01BC */
  FB_FLOAT32 CloudLayer1SunLightIntensity; /* 0x01C0 */
  FB_FLOAT32 CloudLayer1SunLightPower; /* 0x01C4 */
  FB_FLOAT32 CloudLayer1AmbientLightIntensity; /* 0x01C8 */
  FB_FLOAT32 CloudLayer1AlphaMul; /* 0x01CC */
  FB_HANDLE(class TextureAsset) CloudLayer1Texture; /* 0x01D0 */
  FB_FLOAT32 CloudLayer1Absorption; /* 0x01D8 */
  FB_FLOAT32 CloudLayer1Scattering; /* 0x01DC */
  FB_FLOAT32 CloudLayer1Phase; /* 0x01E0 */
  FB_FLOAT32 CloudLayer1Thickness; /* 0x01E4 */
  FB_FLOAT32 CloudLayer2Altitude; /* 0x01E8 */
  FB_FLOAT32 CloudLayer2TileFactor; /* 0x01EC */
  FB_FLOAT32 CloudLayer2Rotation; /* 0x01F0 */
  FB_FLOAT32 CloudLayer2Speed; /* 0x01F4 */
  FB_FLOAT32 CloudLayer2SunLightIntensity; /* 0x01F8 */
  FB_FLOAT32 CloudLayer2SunLightPower; /* 0x01FC */
  FB_FLOAT32 CloudLayer2AmbientLightIntensity; /* 0x0200 */
  FB_FLOAT32 CloudLayer2AlphaMul; /* 0x0204 */
  FB_HANDLE(class TextureAsset) CloudLayer2Texture; /* 0x0208 */
  FB_FLOAT32 CloudLayer2Absorption; /* 0x0210 */
  FB_FLOAT32 CloudLayer2Scattering; /* 0x0214 */
  FB_FLOAT32 CloudLayer2Phase; /* 0x0218 */
  FB_FLOAT32 CloudLayer2Thickness; /* 0x021C */
  FB_HANDLE(class TextureAsset) StaticEnvmapTexture; /* 0x0220 */
  FB_FLOAT32 StaticEnvmapScale; /* 0x0228 */
  FB_FLOAT32 SkyEnvmap8BitTexScale; /* 0x022C */
  FB_HANDLE(class TextureAsset) CustomEnvmapTexture; /* 0x0230 */
  FB_FLOAT32 CustomEnvmapScale; /* 0x0238 */
  FB_FLOAT32 CustomEnvmapAmbient; /* 0x023C */
  FB_FLOAT32 SkyVisibilityExponent; /* 0x0240 */
  FB_FLOAT32 EarthRadius; /* 0x0244 */
  FB_FLOAT32 AtmosphereRadius; /* 0x0248 */
  FB_FLOAT32 MieScatteringCoefficient; /* 0x024C */
  FB_FLOAT32 MieG; /* 0x0250 */
  FB_FLOAT32 MieExtinctionCoefficientRelation; /* 0x0254 */
  FB_FLOAT32 ScaleHeightMie; /* 0x0258 */
  FB_FLOAT32 RayleighScatteringCoefficientScale; /* 0x025C */
  FB_FLOAT32 RayleighExtinctionCoefficientRelation; /* 0x0260 */
  FB_FLOAT32 ScaleHeightRayleigh; /* 0x0264 */
  FB_FLOAT32 OzonePercentage; /* 0x0268 */
  FB_FLOAT32 AerialPerspectiveScale; /* 0x026C */
  FB_FLOAT32 AerialPerspectiveIntensity; /* 0x0270 */
  FB_FLOAT32 AerialPerspectiveDithering; /* 0x0274 */
  FB_FLOAT32 Light1Intensity; /* 0x0278 */
  FB_FLOAT32 Light1RotX; /* 0x027C */
  FB_FLOAT32 Light1RotY; /* 0x0280 */
  FB_FLOAT32 Light2Intensity; /* 0x0284 */
  FB_FLOAT32 Light2RotX; /* 0x0288 */
  FB_FLOAT32 Light2RotY; /* 0x028C */
  FB_FLOAT32 FogStartDistance; /* 0x0290 */
  FB_FLOAT32 ForwardScatteringStartDepth; /* 0x0294 */
  FB_FLOAT32 ForwardScatteringEndDepth; /* 0x0298 */
  FB_FLOAT32 ForwardScatteringTakesColorFromOutdoorLight; /* 0x029C */
  FB_FLOAT32 MinHeightFogTransmittance; /* 0x02A0 */
  FB_FLOAT32 FlowPeriod; /* 0x02A4 */
  FB_FLOAT32 FlowDistance; /* 0x02A8 */
  FB_FLOAT32 FlowDirection; /* 0x02AC */
  FB_FLOAT32 FlowHeightMaskScale; /* 0x02B0 */
  FB_FLOAT32 FlowHeightMaskBias; /* 0x02B4 */
  FB_HANDLE(class TextureAsset) FlowMaskTexture; /* 0x02B8 */
  FB_BOOLEAN Enable; /* 0x02C0 */
  FB_BOOLEAN UseSkyVisibilityAsAO; /* 0x02C1 */
  FB_BOOLEAN SkyGradientFollowsPanoramicUVs; /* 0x02C2 */
  FB_BOOLEAN UseOzone; /* 0x02C3 */
  FB_BOOLEAN UseAerialPerspective; /* 0x02C4 */
  FB_BOOLEAN Light1FollowOutdoorLight; /* 0x02C5 */
  FB_BOOLEAN Light1TakesColorFromOutdoorLight; /* 0x02C6 */
  FB_BOOLEAN UseLightSource2; /* 0x02C7 */
  FB_BOOLEAN UseNoise; /* 0x02C8 */
  FB_BOOLEAN DrawSunDisc; /* 0x02C9 */
  char pad_02CA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02D0 */
#pragma pack(pop)

static_assert(sizeof(SkyComponentData) == 720);

}
