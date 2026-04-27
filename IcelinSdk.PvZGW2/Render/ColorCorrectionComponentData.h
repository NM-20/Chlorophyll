#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852F40
   RuntimeId:        1618
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D69
   VfTable:          00000001422A1640
   Address (Base):   00000001430EABA0
*/
#pragma pack(push, 16)
class ColorCorrectionComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Brightness; /* 0x0080 */
  Vec3 Contrast; /* 0x0090 */
  Vec3 Saturation; /* 0x00A0 */
  Realm Realm; /* 0x00B0 */
  FB_FLOAT32 Hue; /* 0x00B4 */
  FB_HANDLE(class TextureAsset) ColorGradingTexture; /* 0x00B8 */
  FB_FLOAT32 ColorGradingMaxHdrValue; /* 0x00C0 */
  FB_BOOLEAN Enable; /* 0x00C4 */
  FB_BOOLEAN ColorGradingEnable; /* 0x00C5 */
  char pad_00C6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(ColorCorrectionComponentData) == 208);

}
