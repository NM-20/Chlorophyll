#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870538
   RuntimeId:        2991
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C9E
   VfTable:          000000014236DA38
   Address (Base):   00000001430E2EC0
*/
#pragma pack(push, 8)
class PVZUIEndOfRoundEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PreEorTime; /* 0x0018 */
  FB_FLOAT32 EorTime; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZUIEndOfRoundEntityData) == 32);

}
