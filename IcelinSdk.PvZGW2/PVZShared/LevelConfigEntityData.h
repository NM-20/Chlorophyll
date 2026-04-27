#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865428
   RuntimeId:        22B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A19
   VfTable:          0000000142351728
   Address (Base):   00000001430E65E0
*/
#pragma pack(push, 8)
class LevelConfigEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LevelConfigEntityData) == 24);

}
