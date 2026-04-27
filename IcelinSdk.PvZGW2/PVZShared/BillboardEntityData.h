#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865220
   RuntimeId:        229B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A4C
   VfTable:          00000001423519C8
   Address (Base):   00000001430E6340
*/
#pragma pack(push, 8)
class BillboardEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AutoCycle; /* 0x0018 */
  FB_BOOLEAN NewOnly; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BillboardEntityData) == 32);

}
