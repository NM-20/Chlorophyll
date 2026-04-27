#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BasicSubGroup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873528
   RuntimeId:        2BC2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA3
   VfTable:          0000000142379390
   Address (Base):   00000001430F5290
*/
#pragma pack(push, 8)
class CoopSubGroup : public BasicSubGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CompletePercentage; /* 0x0070 */
  FB_FLOAT32 ActivationDelay; /* 0x0074 */
  FB_STDARRAY(struct TombstoneInfo) TombstoneInfos; /* 0x0078 */
  FB_STDARRAY(struct RewardInfo) RewardInfos; /* 0x0080 */
  FB_FLOAT32 TombstoneSpawnAtPercent; /* 0x0088 */
  FB_BOOLEAN SearchVaseOnly; /* 0x008C */
  FB_BOOLEAN SearchTransmitterOnly; /* 0x008D */
  char pad_008E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(CoopSubGroup) == 144);

}
