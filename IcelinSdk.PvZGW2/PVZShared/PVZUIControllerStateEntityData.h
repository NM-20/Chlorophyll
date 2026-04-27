#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>
#include <IcelinSdk.PvZGW2/PVZShared/ControllerState.h>

namespace fb
{

/* TypeInfo (Array): 00000001428705B8
   RuntimeId:        2999
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09DB
   VfTable:          000000014236D7C8
   Address (Base):   00000001430E2E60
*/
#pragma pack(push, 8)
class PVZUIControllerStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId TargetPlayer; /* 0x0018 */
  ControllerState State; /* 0x001C */
  FB_BOOLEAN IsCancelable; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZUIControllerStateEntityData) == 40);

}
