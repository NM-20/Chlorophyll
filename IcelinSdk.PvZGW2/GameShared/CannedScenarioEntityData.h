#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/CannedAnimationBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EFA8
   RuntimeId:        127D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A30
   VfTable:          0000000142274670
   Address (Base):   00000001430D5FB0
*/
#pragma pack(push, 8)
class CannedScenarioEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CannedAnimationBinding CannedAnimBinding; /* 0x0018 */
  FB_INT32 AnimationEntitySpacePriority; /* 0x00F4 */
  FB_BOOLEAN AlwaysClearEntitySpaceWhenInScenario; /* 0x00F8 */
  char pad_00F9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(CannedScenarioEntityData) == 256);

}
