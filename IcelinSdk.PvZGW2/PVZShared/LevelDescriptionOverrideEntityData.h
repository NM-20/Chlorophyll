#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861C28
   RuntimeId:        1FD5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C2B
   VfTable:          00000001423441C8
   Address (Base):   00000001430E85C0
*/
#pragma pack(push, 8)
class LevelDescriptionOverrideEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class LevelDescriptionComponent) Components; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LevelDescriptionOverrideEntityData) == 32);

}
