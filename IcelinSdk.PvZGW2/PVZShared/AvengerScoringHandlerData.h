#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringHandlerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869A28
   RuntimeId:        24E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E29
   VfTable:          0000000142355980
   Address (Base):   00000001430F7AB0
*/
#pragma pack(push, 8)
class AvengerScoringHandlerData : public ScoringHandlerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 AvengerKillTimeout; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AvengerScoringHandlerData) == 24);

}
