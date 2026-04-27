#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873648
   RuntimeId:        2BD4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          076F
   VfTable:          0000000142379308
   Address (Base):   00000001430F52F0
*/
#pragma pack(push, 8)
class AISpawnerTreeBase : public TreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AISpawnNodeBase) WaveGroups; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AISpawnerTreeBase) == 32);

}
