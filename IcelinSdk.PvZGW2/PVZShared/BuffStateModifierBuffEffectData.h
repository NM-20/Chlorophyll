#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C1B8
   RuntimeId:        26D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0925
   VfTable:          00000001423669F8
   Address (Base):   00000001430F6C10
*/
#pragma pack(push, 8)
class BuffStateModifierBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffStateModifierData) BuffStateModifier; /* 0x0018 */
  FB_FLOAT32 Value; /* 0x0020 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0024 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BuffStateModifierBuffEffectData) == 48);

}
