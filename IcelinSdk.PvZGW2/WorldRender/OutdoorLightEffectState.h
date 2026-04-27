#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856128
   RuntimeId:        18C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1145
   VfTable:          00000001422C4C88
   Address (Base):   000000014310D6B0
*/
#pragma pack(push, 16)
class OutdoorLightEffectState : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SunRotationX; /* 0x0010 */
  FB_FLOAT32 SunRotationY; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 SunColor; /* 0x0020 */
  Vec3 SkyColor; /* 0x0030 */
  Vec3 GroundColor; /* 0x0040 */
  FB_FLOAT32 SkyLightAngleFactor; /* 0x0050 */
  FB_FLOAT32 SunShadowHeightScale; /* 0x0054 */
  FB_HANDLE(class TextureAsset) CloudShadowTexture; /* 0x0058 */
  Vec2 CloudShadowSpeed; /* 0x0060 */
  FB_FLOAT32 CloudShadowSize; /* 0x0068 */
  FB_FLOAT32 CloudShadowCoverage; /* 0x006C */
  FB_FLOAT32 CloudShadowExponent; /* 0x0070 */
  FB_BOOLEAN Enable; /* 0x0074 */
  FB_BOOLEAN CloudShadowEnable; /* 0x0075 */
  char pad_0076[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(OutdoorLightEffectState) == 128);

}
