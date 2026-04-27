#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873BD8
   RuntimeId:        2C26
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A9B
   VfTable:          0000000142378D78
   Address (Base):   00000001430E1720
*/
#pragma pack(push, 8)
class PrioritizeTargetEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PriorityMultiplier; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PrioritizeTargetEntityData) == 32);

}
