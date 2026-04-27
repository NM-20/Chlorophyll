#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZDebugCommands.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870E88
   RuntimeId:        2A13
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C9D
   VfTable:          000000014236CDB8
   Address (Base):   00000001430E3820
*/
#pragma pack(push, 8)
class DebugCommandEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZDebugCommands Command; /* 0x0018 */
  FB_INT32 CommandValue; /* 0x001C */
  FB_CSTRING ConsoleCommand; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DebugCommandEntityData) == 40);

}
