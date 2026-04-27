#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869878
   RuntimeId:        24CF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EFA
   VfTable:          0000000142355A70
   Address (Base):   00000001431077D0
*/
#pragma pack(push, 8)
class RankLevelData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING RankName; /* 0x0010 */
  FB_FLOAT32 PointsNeeded; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING ImageName; /* 0x0020 */
  FB_CSTRING IconName; /* 0x0028 */
  FB_CSTRING SoundName; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(RankLevelData) == 56);

}
