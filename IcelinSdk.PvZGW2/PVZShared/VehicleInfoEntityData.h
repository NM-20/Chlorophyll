#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864E78
   RuntimeId:        2264
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A04
   VfTable:          0000000142351DC8
   Address (Base):   00000001430E5B00
*/
#pragma pack(push, 8)
class VehicleInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VehicleInfoEntityData) == 24);

}
