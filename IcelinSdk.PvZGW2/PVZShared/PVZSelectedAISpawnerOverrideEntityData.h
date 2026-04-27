#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864808
   RuntimeId:        2211
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09AD
   VfTable:          0000000142352548
   Address (Base):   00000001430E6940
*/
#pragma pack(push, 8)
class PVZSelectedAISpawnerOverrideEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SelectionSet) SelectionSet; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZSelectedAISpawnerOverrideEntityData) == 32);

}
