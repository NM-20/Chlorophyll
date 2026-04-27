#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/OriginalLocalLightEntityData.h>
#include <IcelinSdk.PvZGW2/Render/SpotLightShape.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableEnabled.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855A68
   RuntimeId:        185C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B66
   VfTable:          00000001422BBA98
   Address (Base):   00000001430E9C40
*/
#pragma pack(push, 16)
class SpotLightEntityData : public OriginalLocalLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SpotLightShape Shape; /* 0x00C0 */
  FB_FLOAT32 ConeInnerAngle; /* 0x00C4 */
  FB_FLOAT32 ConeOuterAngle; /* 0x00C8 */
  FB_FLOAT32 FrustumFov; /* 0x00CC */
  FB_FLOAT32 FrustumAspect; /* 0x00D0 */
  FB_FLOAT32 OrthoWidth; /* 0x00D4 */
  FB_FLOAT32 OrthoHeight; /* 0x00D8 */
  FB_FLOAT32 NearPlane; /* 0x00DC */
  FB_HANDLE(class TextureAsset) Texture; /* 0x00E0 */
  QualityScalableEnabled CastShadows; /* 0x00E8 */
  QualityScalableEnabled CastVolumetricShadows; /* 0x00EC */
  FB_FLOAT32 ShadowRadius; /* 0x00F0 */
  FB_FLOAT32 ShadowCullDistance; /* 0x00F4 */
  QualityScalableEnabled FrustumAsCone; /* 0x00F8 */
  FB_FLOAT32 FrustumAsConeIntensityScale; /* 0x00FC */
  QualityLevel CastShadowsMinLevel; /* 0x0100 */
  FB_BOOLEAN FrustumAsConeAngle; /* 0x0104 */
  FB_BOOLEAN CastShadowsEnable; /* 0x0105 */
  FB_BOOLEAN CastVolumetricShadowsEnable; /* 0x0106 */
  char pad_0107[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(SpotLightEntityData) == 272);

}
