#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 00000001428734E8
   RuntimeId:        2BBE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E9C
   VfTable:          00000001423793B0
   Address (Base):   00000001430D87B0
*/
#pragma pack(push, 8)
class AISpawnNodeBase : public TreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AISpawnNodeBase) == 24);

}
