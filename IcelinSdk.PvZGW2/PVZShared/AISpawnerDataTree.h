#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AISpawnerTreeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873668
   RuntimeId:        2BD6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0770
   VfTable:          00000001423792F8
   Address (Base):   0000000143104830
*/
#pragma pack(push, 8)
class AISpawnerDataTree : public AISpawnerTreeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AISpawnerDataTree) == 32);

}
