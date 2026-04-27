#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870AA0
   RuntimeId:        29E1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09BE
   VfTable:          000000014236D150
   Address (Base):   00000001430E3BE0
*/
#pragma pack(push, 8)
class UIPendingInviteEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIPendingInviteEntityData) == 24);

}
