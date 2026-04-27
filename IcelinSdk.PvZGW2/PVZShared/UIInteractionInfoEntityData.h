#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870D20
   RuntimeId:        2A05
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09EA
   VfTable:          000000014236D070
   Address (Base):   00000001430E32E0
*/
#pragma pack(push, 16)
class UIInteractionInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 InteractionIconOffset; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIInteractionInfoEntityData) == 48);

}
