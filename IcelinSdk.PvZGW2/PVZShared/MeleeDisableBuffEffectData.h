#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C6E8
   RuntimeId:        2710
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          093A
   VfTable:          00000001423666E0
   Address (Base):   00000001430D9710
*/
#pragma pack(push, 8)
class MeleeDisableBuffEffectData : public BuffEffectData
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

static_assert(sizeof(MeleeDisableBuffEffectData) == 32);

}
