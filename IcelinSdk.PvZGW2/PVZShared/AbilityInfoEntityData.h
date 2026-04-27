#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865180
   RuntimeId:        2291
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A6E
   VfTable:          00000001423518B0
   Address (Base):   00000001430E5EC0
*/
#pragma pack(push, 8)
class AbilityInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AbilityInfoEntityData) == 24);

}
