#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AISpawnNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873568
   RuntimeId:        2BC6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA4
   VfTable:          0000000142379238
   Address (Base):   00000001430E1A20
*/
#pragma pack(push, 8)
class BasicWaveComposition : public AISpawnNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BasicSubGroup) SubGroups; /* 0x0018 */
  FB_BOOLEAN RandomizeSubgroupOrder; /* 0x0020 */
  FB_BOOLEAN IsContinuousSpawn; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BasicWaveComposition) == 40);

}
