#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringHandlerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869A68
   RuntimeId:        24ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E2A
   VfTable:          0000000142355A28
   Address (Base):   00000001430F79F0
*/
#pragma pack(push, 8)
class OnLevelScoringHandlerData : public ScoringHandlerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(OnLevelScoringHandlerData) == 16);

}
