#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864888
   RuntimeId:        2219
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C0E
   VfTable:          00000001423522A8
   Address (Base):   00000001430D46F0
*/
#pragma pack(push, 8)
class PVZRoundOverEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId Team; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZRoundOverEntityData) == 32);

}
