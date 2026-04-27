#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850010
   RuntimeId:        1368
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A23
   VfTable:          0000000142278FF0
   Address (Base):   00000001430EB7A0
*/
#pragma pack(push, 8)
class SyncedStringEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SyncedStringEntityData) == 24);

}
