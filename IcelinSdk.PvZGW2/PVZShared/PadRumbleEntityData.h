#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865638
   RuntimeId:        22D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09DC
   VfTable:          0000000142351248
   Address (Base):   00000001430E5C80
*/
#pragma pack(push, 8)
class PadRumbleEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LowRumble; /* 0x0018 */
  FB_FLOAT32 HighRumble; /* 0x001C */
  FB_FLOAT32 Duration; /* 0x0020 */
  FB_FLOAT32 TimeBetweenRumbles; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PadRumbleEntityData) == 40);

}
