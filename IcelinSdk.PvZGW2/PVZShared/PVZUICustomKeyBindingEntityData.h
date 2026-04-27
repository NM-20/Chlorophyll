#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870638
   RuntimeId:        29A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C5B
   VfTable:          000000014236D758
   Address (Base):   00000001430E2C20
*/
#pragma pack(push, 8)
class PVZUICustomKeyBindingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId LocalPlayerId; /* 0x0018 */
  FB_INT32 ActionIndexIn; /* 0x001C */
  FB_INT32 StateIn; /* 0x0020 */
  FB_INT32 SelectedColumnIn; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZUICustomKeyBindingEntityData) == 40);

}
