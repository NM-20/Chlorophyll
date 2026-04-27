#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FFD0
   RuntimeId:        1364
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C9F
   VfTable:          0000000142278FB8
   Address (Base):   00000001430EB860
*/
#pragma pack(push, 8)
class SyncedIntEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SyncedIntEntityData) == 24);

}
