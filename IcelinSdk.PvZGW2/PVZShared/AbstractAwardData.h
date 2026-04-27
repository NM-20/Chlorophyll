#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B750
   RuntimeId:        264A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EBF
   VfTable:          000000014235AB30
   Address (Base):   00000001430E4CC0
*/
#pragma pack(push, 8)
class AbstractAwardData : public TreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AbstractAwardData) == 24);

}
