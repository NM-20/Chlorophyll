#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Render/BlurFilter.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855D88
   RuntimeId:        188E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D74
   VfTable:          00000001422BB650
   Address (Base):   00000001430E9520
*/
#pragma pack(push, 16)
class PlanarReflectionComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 KeyColorReflection; /* 0x0080 */
  Vec3 SkyColorReflection; /* 0x0090 */
  Vec3 GroundColorReflection; /* 0x00A0 */
  Realm Realm; /* 0x00B0 */
  FB_FLOAT32 GroundHeight; /* 0x00B4 */
  FB_FLOAT32 ViewDistance; /* 0x00B8 */
  BlurFilter VerticalBlurFilter; /* 0x00BC */
  FB_FLOAT32 VerticalDeviation; /* 0x00C0 */
  BlurFilter HorizontalBlurFilter; /* 0x00C4 */
  FB_FLOAT32 HorizontalDeviation; /* 0x00C8 */
  FB_FLOAT32 ClippingOffset; /* 0x00CC */
  FB_BOOLEAN Enable; /* 0x00D0 */
  FB_BOOLEAN TerrainReflectionsEnable; /* 0x00D1 */
  FB_BOOLEAN SkyRenderEnable; /* 0x00D2 */
  FB_BOOLEAN OverideOutdoorLightColors; /* 0x00D3 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(PlanarReflectionComponentData) == 224);

}
