#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C090
   RuntimeId:        1004
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B92
   VfTable:          0000000142267CB8
   Address (Base):   00000001430ED240
*/
#pragma pack(push, 16)
class PlayerTakeOverTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0060 */
  FB_FLOAT32 TimeToLoseControl; /* 0x0064 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PlayerTakeOverTriggerEntityData) == 112);

}
