#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864BB8
   RuntimeId:        2238
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C1B
   VfTable:          00000001423521B8
   Address (Base):   00000001430E7180
*/
#pragma pack(push, 8)
class VaseRandomSelectorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DefaultDifficulty; /* 0x0018 */
  FB_INT32 Difficulty; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VaseRandomSelectorEntityData) == 32);

}
