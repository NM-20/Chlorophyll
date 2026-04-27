#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870778
   RuntimeId:        29B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB4
   VfTable:          000000014236D4E0
   Address (Base):   00000001430E3640
*/
#pragma pack(push, 8)
class UIObjectiveMessageProviderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIObjectiveMessageProviderEntityData) == 24);

}
