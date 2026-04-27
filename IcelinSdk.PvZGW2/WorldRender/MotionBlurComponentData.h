#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855FA8
   RuntimeId:        18B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D75
   VfTable:          00000001422C4E68
   Address (Base):   00000001430E9040
*/
#pragma pack(push, 16)
class MotionBlurComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 MotionBlurScale; /* 0x0084 */
  FB_FLOAT32 MotionBlurCutoffRadius; /* 0x0088 */
  FB_FLOAT32 CutoffGradientScale; /* 0x008C */
  Vec2 RadialBlurCenter; /* 0x0090 */
  FB_FLOAT32 RadialBlurOffset; /* 0x0098 */
  FB_FLOAT32 RadialBlurScale; /* 0x009C */
  FB_BOOLEAN MotionBlurEnable; /* 0x00A0 */
  FB_BOOLEAN MotionBlurCentered; /* 0x00A1 */
  FB_BOOLEAN RadialBlurEnable; /* 0x00A2 */
  char pad_00A3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(MotionBlurComponentData) == 176);

}
