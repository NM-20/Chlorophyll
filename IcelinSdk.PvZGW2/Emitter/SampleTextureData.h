#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EvaluatorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839598
   RuntimeId:        0694
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FF6
   VfTable:          00000001421FFC18
   Address (Base):   00000001430F1500
*/
#pragma pack(push, 16)
class SampleTextureData : public EvaluatorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec4) GradientData; /* 0x0018 */
  Vec3 ColorIntensityMax; /* 0x0020 */
  Vec3 ColorIntensityMin; /* 0x0030 */
  Vec2 TextureDimensions; /* 0x0040 */
  FB_FLOAT32 TextureOriginU; /* 0x0048 */
  FB_FLOAT32 TextureOriginV; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SampleTextureData) == 80);

}
