#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 00000001428560A8
   RuntimeId:        18C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D8B
   VfTable:          00000001422C4D28
   Address (Base):   00000001430E8E60
*/
#pragma pack(push, 16)
class SkyCelestialSingleComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Tint; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  FB_UINT32 DrawOrder; /* 0x0094 */
  FB_HANDLE(class TextureAsset) Texture; /* 0x0098 */
  Vec2 UVStart; /* 0x00A0 */
  Vec2 UVEnd; /* 0x00A8 */
  FB_FLOAT32 SkyEnvmapTintScale; /* 0x00B0 */
  FB_FLOAT32 Longitude; /* 0x00B4 */
  FB_FLOAT32 Latitude; /* 0x00B8 */
  FB_FLOAT32 Rotation; /* 0x00BC */
  Vec2 Scale; /* 0x00C0 */
  FB_BOOLEAN Enable; /* 0x00C8 */
  QualityScalableBool EnabledOnQualityLevels; /* 0x00C9 */
  QualityScalableBool PlanarReflection; /* 0x00CD */
  FB_BOOLEAN RenderInSkyEnvMap; /* 0x00D1 */
  FB_BOOLEAN WriteAlpha; /* 0x00D2 */
  char pad_00D3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(SkyCelestialSingleComponentData) == 224);

}
