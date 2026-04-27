#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428653A8
   RuntimeId:        22B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C7B
   VfTable:          0000000142351798
   Address (Base):   00000001430E7000
*/
#pragma pack(push, 8)
class PVZStatsCategoryFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class StatsCategoryBaseData) FilterCategories; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZStatsCategoryFilterEntityData) == 40);

}
