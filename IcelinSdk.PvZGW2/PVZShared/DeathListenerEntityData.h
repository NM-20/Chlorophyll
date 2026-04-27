#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865160
   RuntimeId:        228F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A84
   VfTable:          0000000142351878
   Address (Base):   00000001430E5F20
*/
#pragma pack(push, 8)
class DeathListenerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DeathListenerEntityData) == 24);

}
