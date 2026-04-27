#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856168
   RuntimeId:        18CC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9DA0
   Default Value:    0000000142856180
*/
#pragma pack(push, 16)
struct SkyCloudLayer
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Color; /* 0x0000 */
  FB_FLOAT32 Altitude; /* 0x0010 */
  FB_FLOAT32 TileFactor; /* 0x0014 */
  FB_FLOAT32 Rotation; /* 0x0018 */
  FB_FLOAT32 Speed; /* 0x001C */
  FB_FLOAT32 SunLightIntensity; /* 0x0020 */
  FB_FLOAT32 SunLightPower; /* 0x0024 */
  FB_FLOAT32 AmbientLightIntensity; /* 0x0028 */
  FB_FLOAT32 AlphaMul; /* 0x002C */
  FB_HANDLE(class TextureAsset) Texture; /* 0x0030 */
  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SkyCloudLayer) == 64);

}
