#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FFF0
   RuntimeId:        1366
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A3A
   VfTable:          0000000142278F80
   Address (Base):   00000001430EB800
*/
#pragma pack(push, 8)
class SyncedUIntEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SyncedUIntEntityData) == 24);

}
