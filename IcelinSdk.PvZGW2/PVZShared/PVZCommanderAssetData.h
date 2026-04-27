#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionType.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428632C8
   RuntimeId:        210A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ACC
   VfTable:          0000000142353D30
   Address (Base):   00000001430D4CF0
*/
#pragma pack(push, 8)
class PVZCommanderAssetData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZCommanderActionType ActionType; /* 0x0018 */
  TeamId Team; /* 0x001C */
  FB_BOOLEAN Enabled; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderAssetData) == 40);

}
