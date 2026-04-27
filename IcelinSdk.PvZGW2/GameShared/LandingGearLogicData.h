#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/LandingGearConditionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CCF8
   RuntimeId:        10AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FAF
   VfTable:          0000000142267360
   Address (Base):   00000001431124B0
*/
#pragma pack(push, 8)
class LandingGearLogicData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LandingGearConditionData RetractCondition; /* 0x0010 */
  LandingGearConditionData DeployCondition; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(LandingGearLogicData) == 40);

}
