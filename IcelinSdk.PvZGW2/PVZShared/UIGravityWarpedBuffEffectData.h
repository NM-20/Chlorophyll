#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C908
   RuntimeId:        2732
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0941
   VfTable:          0000000142366518
   Address (Base):   00000001430F5BF0
*/
#pragma pack(push, 8)
class UIGravityWarpedBuffEffectData : public BuffEffectData
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

static_assert(sizeof(UIGravityWarpedBuffEffectData) == 32);

}
