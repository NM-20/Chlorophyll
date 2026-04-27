#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/WorldRender/SkyBoxBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855E88
   RuntimeId:        189E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D78
   VfTable:          00000001422C4FE8
   Address (Base):   00000001430E9280
*/
#pragma pack(push, 16)
class EnlightenComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 TerrainColor; /* 0x0080 */
  Vec3 SkyBoxSkyColor; /* 0x0090 */
  Vec3 SkyBoxGroundColor; /* 0x00A0 */
  Vec3 SkyBoxSunLightColor; /* 0x00B0 */
  Vec3 SkyBoxBackLightColor; /* 0x00C0 */
  Vec3 OpaqueAlphaTestSimpleScale; /* 0x00D0 */
  Realm Realm; /* 0x00E0 */
  FB_FLOAT32 BounceScale; /* 0x00E4 */
  FB_FLOAT32 SunScale; /* 0x00E8 */
  FB_FLOAT32 CullDistance; /* 0x00EC */
  FB_FLOAT32 CullRadius; /* 0x00F0 */
  SkyBoxBlendMode SkyBoxBlendMode; /* 0x00F4 */
  FB_FLOAT32 SkyBoxBlend; /* 0x00F8 */
  FB_FLOAT32 SkyBoxSunLightColorSize; /* 0x00FC */
  FB_FLOAT32 SkyBoxBackLightColorSize; /* 0x0100 */
  FB_FLOAT32 SkyBoxBackLightRotationX; /* 0x0104 */
  FB_FLOAT32 SkyBoxBackLightRotationY; /* 0x0108 */
  FB_BOOLEAN SkyBoxEnable; /* 0x010C */
  char pad_010D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(EnlightenComponentData) == 272);

}
