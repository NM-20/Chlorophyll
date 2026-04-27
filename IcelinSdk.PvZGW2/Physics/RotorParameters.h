#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428512B0
   RuntimeId:        1456
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F12
   VfTable:          000000014227F5E8
   Address (Base):   000000014310F2D0
*/
#pragma pack(push, 8)
class RotorParameters : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CyclicInputScaleRoll; /* 0x0010 */
  FB_FLOAT32 CyclicInputScalePitch; /* 0x0014 */
  FB_FLOAT32 CollectiveThrottleInputScale; /* 0x0018 */
  FB_FLOAT32 CollectiveBrakeInputScale; /* 0x001C */
  FB_FLOAT32 CollectiveInputIdle; /* 0x0020 */
  FB_FLOAT32 HorizontalForceModifier; /* 0x0024 */
  FB_STDARRAY(struct Vec2) AngleOfAttack; /* 0x0028 */
  FB_FLOAT32 CyclicFadeOutOffset; /* 0x0030 */
  FB_FLOAT32 AdditionalGravityModifier; /* 0x0034 */
  FB_FLOAT32 HorisontalMinEffectVelocity; /* 0x0038 */
  FB_FLOAT32 HorisontalMinEffectMod; /* 0x003C */
  FB_BOOLEAN ReverseThrottle; /* 0x0040 */
  FB_BOOLEAN EnableHorisontalMinEffect; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(RotorParameters) == 72);

}
