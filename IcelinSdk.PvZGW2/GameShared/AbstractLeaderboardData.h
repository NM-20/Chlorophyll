#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A0A8
   RuntimeId:        0E40
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1192
   VfTable:          000000014225F5B8
   Address (Base):   0000000143113FB0
*/
#pragma pack(push, 8)
class AbstractLeaderboardData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LeaderboardName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AbstractLeaderboardData) == 24);

}
