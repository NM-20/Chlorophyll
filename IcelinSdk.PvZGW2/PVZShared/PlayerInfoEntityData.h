#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865568
   RuntimeId:        22CD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A7E
   VfTable:          0000000142351550
   Address (Base):   00000001430E7360
*/
#pragma pack(push, 8)
class PlayerInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlayerInfoEntityData) == 24);

}
