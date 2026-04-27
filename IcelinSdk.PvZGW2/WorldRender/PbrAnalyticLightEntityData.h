#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/LocalLightEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Render/LightColorMode.h>
#include <IcelinSdk.PvZGW2/Render/LightUnitType.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableEnabled.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855AC8
   RuntimeId:        1862
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B5F
   VfTable:          00000001422BBA28
   Address (Base):   00000001430D5A10
*/
#pragma pack(push, 16)
class PbrAnalyticLightEntityData : public LocalLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color; /* 0x0070 */
  Vec3 ParticleColorScale; /* 0x0080 */
  Vec3 RadiosityColorScale; /* 0x0090 */
  LightColorMode LightColorMode; /* 0x00A0 */
  FB_INT32 Temperature; /* 0x00A4 */
  FB_FLOAT32 Intensity; /* 0x00A8 */
  FB_FLOAT32 AttenuationRadius; /* 0x00AC */
  FB_FLOAT32 AttenuationOffset; /* 0x00B0 */
  LightUnitType LightUnit; /* 0x00B4 */
  QualityScalableEnabled CastShadows; /* 0x00B8 */
  QualityScalableEnabled CastVolumetricShadows; /* 0x00BC */
  FB_FLOAT32 ShadowRadius; /* 0x00C0 */
  FB_FLOAT32 ShadowCullDistance; /* 0x00C4 */
  FB_FLOAT32 ShadowFadeDistance; /* 0x00C8 */
  FB_FLOAT32 ShadowDimmer; /* 0x00CC */
  FB_FLOAT32 Dimmer; /* 0x00D0 */
  FB_BOOLEAN EmissiveShapeEnable; /* 0x00D4 */
  FB_BOOLEAN AffectDiffuse; /* 0x00D5 */
  FB_BOOLEAN AffectSpecular; /* 0x00D6 */
  FB_BOOLEAN CastShadowsEnable; /* 0x00D7 */
  FB_BOOLEAN CastVolumetricShadowsEnable; /* 0x00D8 */
  FB_BOOLEAN AffectRadiosity; /* 0x00D9 */
  char pad_00DA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(PbrAnalyticLightEntityData) == 224);

}
