#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863DA8
   RuntimeId:        2177
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D24
   VfTable:          0000000142353120
   Address (Base):   00000001430D4BD0
*/
#pragma pack(push, 16)
class CollectableItemComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CollectableItemComponentData) == 112);

}
