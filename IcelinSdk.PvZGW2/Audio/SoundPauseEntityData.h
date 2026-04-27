#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837BD0
   RuntimeId:        0532
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C1C
   VfTable:          00000001421F9C08
   Address (Base):   00000001430F2A00
*/
#pragma pack(push, 8)
class SoundPauseEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixGroup) ExclusionList; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundPauseEntityData) == 32);

}
