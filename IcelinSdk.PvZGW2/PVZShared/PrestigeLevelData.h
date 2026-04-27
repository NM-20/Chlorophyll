#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869898
   RuntimeId:        24D1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0609
   VfTable:          0000000142355B08
   Address (Base):   0000000143107770
*/
#pragma pack(push, 8)
class PrestigeLevelData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class RankLevelData) RankNeeded; /* 0x0018 */
  FB_UINT32 RankNeededIndex; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PrestigeLevelData) == 40);

}
