#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864D58
   RuntimeId:        2252
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A4B
   VfTable:          0000000142351F98
   Address (Base):   00000001430E6700
*/
#pragma pack(push, 8)
class PVZOSEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZOSEntityData) == 24);

}
