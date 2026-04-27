#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ChildEffectEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142840518
   RuntimeId:        0ADF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B8E
   VfTable:          0000000142232780
   Address (Base):   00000001430FD990
*/
#pragma pack(push, 16)
class VisualEnvironmentEffectEntityData : public ChildEffectEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 LifetimeCurve; /* 0x00A0 */
  Vec4 CullAngleCurve; /* 0x00B0 */
  Vec4 CullDistanceCurve; /* 0x00C0 */
  FB_HANDLE(class VisualEnvironmentBlueprint) VisualEnvironment; /* 0x00D0 */
  FB_FLOAT32 Lifetime; /* 0x00D8 */
  FB_BOOLEAN SampleOnStartOnly; /* 0x00DC */
  FB_BOOLEAN HideOccluded; /* 0x00DD */
  char pad_00DE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(VisualEnvironmentEffectEntityData) == 224);

}
