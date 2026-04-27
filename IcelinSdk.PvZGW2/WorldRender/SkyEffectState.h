#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/WorldRender/SkyCloudLayer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428561C8
   RuntimeId:        18CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          094D
   VfTable:          00000001422C4C28
   Address (Base):   000000014310D5F0
*/
#pragma pack(push, 16)
class SkyEffectState : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SunSize; /* 0x0010 */
  FB_FLOAT32 SunScale; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 CloudLayerSunColor; /* 0x0020 */
  SkyCloudLayer CloudLayer1; /* 0x0030 */
  SkyCloudLayer CloudLayer2; /* 0x0070 */
  FB_FLOAT32 SkyGradientScale; /* 0x00B0 */
  char pad_00B4[0x0004];
  FB_HANDLE(class TextureAsset) SkyGradientTexture; /* 0x00B8 */
  FB_FLOAT32 PanoramicUVMinX; /* 0x00C0 */
  FB_FLOAT32 PanoramicUVMaxX; /* 0x00C4 */
  FB_FLOAT32 PanoramicUVMinY; /* 0x00C8 */
  FB_FLOAT32 PanoramicUVMaxY; /* 0x00CC */
  FB_FLOAT32 PanoramicTileFactor; /* 0x00D0 */
  FB_FLOAT32 PanoramicRotation; /* 0x00D4 */
  FB_HANDLE(class TextureAsset) PanoramicTexture; /* 0x00D8 */
  FB_HANDLE(class TextureAsset) PanoramicAlphaTexture; /* 0x00E0 */
  FB_HANDLE(class TextureAsset) CloudLayerMaskTexture; /* 0x00E8 */
  FB_HANDLE(class TextureAsset) StaticEnvmapTexture; /* 0x00F0 */
  FB_FLOAT32 WindDirection; /* 0x00F8 */
  FB_BOOLEAN Enable; /* 0x00FC */
  char pad_00FD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(SkyEffectState) == 256);

}
