#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C588
   RuntimeId:        26FA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          093E
   VfTable:          00000001423667D0
   Address (Base):   00000001430F68B0
*/
#pragma pack(push, 8)
class CharacterEntityRenderBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CharacterEntityRenderBuffEffectData) == 32);

}
