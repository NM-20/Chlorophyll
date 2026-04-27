#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870488
   RuntimeId:        2987
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE3
   VfTable:          000000014236D9B8
   Address (Base):   00000001430E2DA0
*/
#pragma pack(push, 8)
class PVZUIMessageEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUIMessageEntityData) == 24);

}
