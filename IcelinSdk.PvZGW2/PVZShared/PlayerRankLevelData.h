#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428698B8
   RuntimeId:        24D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          114B
   VfTable:          0000000142355AE8
   Address (Base):   0000000143107710
*/
#pragma pack(push, 8)
class PlayerRankLevelData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 RankNeeded; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING ImageName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PlayerRankLevelData) == 32);

}
