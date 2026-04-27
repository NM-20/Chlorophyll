#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865D48
   RuntimeId:        2347
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F9
   VfTable:          0000000142350B70
   Address (Base):   00000001430E5C20
*/
#pragma pack(push, 8)
class DialogueTreeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DialogueTreeData) Dialogue; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DialogueTreeEntityData) == 32);

}
