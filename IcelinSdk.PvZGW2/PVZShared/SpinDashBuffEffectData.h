#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CA28
   RuntimeId:        2744
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          093F
   VfTable:          0000000142366488
   Address (Base):   0000000143105EB0
*/
#pragma pack(push, 8)
class SpinDashBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SprintSpeed; /* 0x0018 */
  FB_FLOAT32 TimeAtMaxSpeed; /* 0x001C */
  FB_FLOAT32 TimeInBleedOff; /* 0x0020 */
  FB_FLOAT32 PrimingTime; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SpinDashBuffEffectData) == 40);

}
