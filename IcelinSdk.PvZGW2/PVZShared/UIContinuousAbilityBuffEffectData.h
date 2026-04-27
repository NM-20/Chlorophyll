#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIAbilityType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C7C8
   RuntimeId:        271E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0906
   VfTable:          0000000142366500
   Address (Base):   00000001430F5FB0
*/
#pragma pack(push, 8)
class UIContinuousAbilityBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */
  UIAbilityType UIAbilityType; /* 0x0020 */
  FB_BOOLEAN ShowContinuousEffect; /* 0x0024 */
  FB_BOOLEAN DisableOtherAbilities; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIContinuousAbilityBuffEffectData) == 40);

}
