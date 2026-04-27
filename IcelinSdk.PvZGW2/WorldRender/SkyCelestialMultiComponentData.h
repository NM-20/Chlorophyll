#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 00000001428560C8
   RuntimeId:        18C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D6A
   VfTable:          00000001422C4CE8
   Address (Base):   00000001430E8E00
*/
#pragma pack(push, 16)
class SkyCelestialMultiComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Tint; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  FB_UINT32 DrawOrder; /* 0x0094 */
  QualityScalableInt QuadCount; /* 0x0098 */
  FB_HANDLE(class TextureAsset) Texture; /* 0x00A8 */
  Vec2 UVStart; /* 0x00B0 */
  Vec2 UVEnd; /* 0x00B8 */
  Vec2 UVGrid; /* 0x00C0 */
  FB_FLOAT32 SkyEnvmapTintScale; /* 0x00C8 */
  FB_INT32 RandomSeed; /* 0x00CC */
  FB_FLOAT32 MinScale; /* 0x00D0 */
  FB_FLOAT32 MaxScale; /* 0x00D4 */
  FB_FLOAT32 ScaleMultiplier; /* 0x00D8 */
  FB_FLOAT32 ZenithStop; /* 0x00DC */
  FB_FLOAT32 NadirStop; /* 0x00E0 */
  FB_BOOLEAN Enable; /* 0x00E4 */
  QualityScalableBool EnabledOnQualityLevels; /* 0x00E5 */
  QualityScalableBool PlanarReflection; /* 0x00E9 */
  FB_BOOLEAN RenderInSkyEnvMap; /* 0x00ED */
  FB_BOOLEAN WriteAlpha; /* 0x00EE */
  char pad_00EF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(SkyCelestialMultiComponentData) == 240);

}
