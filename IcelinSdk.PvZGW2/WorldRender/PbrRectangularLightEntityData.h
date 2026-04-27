#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrAnalyticLightEntityData.h>
#include <IcelinSdk.PvZGW2/Render/RectangularLightShape.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855B48
   RuntimeId:        186A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B61
   VfTable:          00000001422BB9F0
   Address (Base):   00000001430E9A60
*/
#pragma pack(push, 16)
class PbrRectangularLightEntityData : public PbrAnalyticLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RectangularLightShape Shape; /* 0x00E0 */
  FB_FLOAT32 OuterAngle; /* 0x00E4 */
  FB_FLOAT32 Aspect; /* 0x00E8 */
  FB_FLOAT32 Width; /* 0x00EC */
  FB_FLOAT32 Height; /* 0x00F0 */
  char pad_00F4[0x0004];
  FB_HANDLE(class TextureAsset) Texture; /* 0x00F8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(PbrRectangularLightEntityData) == 256);

}
