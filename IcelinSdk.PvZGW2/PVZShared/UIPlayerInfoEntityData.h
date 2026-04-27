#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870CC0
   RuntimeId:        29FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A27
   VfTable:          000000014236CE98
   Address (Base):   00000001430E33A0
*/
#pragma pack(push, 8)
class UIPlayerInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TargetPlayerName; /* 0x0018 */
  FB_UINT64 TargetPlayerId; /* 0x0020 */
  FB_BOOLEAN UseLocalPlayer; /* 0x0028 */
  FB_BOOLEAN SetTargetPlayerOnNameChange; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIPlayerInfoEntityData) == 48);

}
