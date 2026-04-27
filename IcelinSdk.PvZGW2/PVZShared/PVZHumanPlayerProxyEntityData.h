#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864D78
   RuntimeId:        2254
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C13
   VfTable:          0000000142351FD0
   Address (Base):   00000001430E7540
*/
#pragma pack(push, 8)
class PVZHumanPlayerProxyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZHumanPlayerProxyEntityData) == 24);

}
