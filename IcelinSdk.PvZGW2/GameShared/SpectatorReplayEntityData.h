#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849840
   RuntimeId:        0DC4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A1
   VfTable:          000000014225FB20
   Address (Base):   00000001430EDC00
*/
#pragma pack(push, 8)
class SpectatorReplayEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SpectatorReplayEntityData) == 24);

}
