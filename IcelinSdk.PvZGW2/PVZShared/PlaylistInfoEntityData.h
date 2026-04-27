#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865448
   RuntimeId:        22BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AAB
   VfTable:          0000000142351498
   Address (Base):   00000001430E5200
*/
#pragma pack(push, 8)
class PlaylistInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlaylistInfoEntityData) == 24);

}
