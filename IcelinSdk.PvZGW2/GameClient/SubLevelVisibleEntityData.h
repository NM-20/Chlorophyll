#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283CE68
   RuntimeId:        09F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA1
   VfTable:          0000000142219130
   Address (Base):   00000001430EEAA0
*/
#pragma pack(push, 8)
class SubLevelVisibleEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SubLevelVisibleEntityData) == 24);

}
