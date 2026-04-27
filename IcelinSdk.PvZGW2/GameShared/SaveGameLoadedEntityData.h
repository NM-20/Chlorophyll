#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849620
   RuntimeId:        0DA2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BF9
   VfTable:          000000014225FF48
   Address (Base):   00000001430EE5C0
*/
#pragma pack(push, 8)
class SaveGameLoadedEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SaveGameLoadedEntityData) == 24);

}
