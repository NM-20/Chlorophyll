#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C628
   RuntimeId:        2704
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          092E
   VfTable:          0000000142366638
   Address (Base):   00000001430D9830
*/
#pragma pack(push, 8)
class InputRestrictorBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class InputRestrictionAsset) InputRestriction; /* 0x0018 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0020 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputRestrictorBuffEffectData) == 40);

}
