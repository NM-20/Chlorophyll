#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C7E8
   RuntimeId:        2720
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0920
   VfTable:          00000001423664E8
   Address (Base):   00000001430F5F50
*/
#pragma pack(push, 8)
class UIDisabledAbilityBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */
  FB_BOOLEAN LeftAbility; /* 0x0020 */
  FB_BOOLEAN RightAbility; /* 0x0021 */
  FB_BOOLEAN UpAbility; /* 0x0022 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIDisabledAbilityBuffEffectData) == 40);

}
