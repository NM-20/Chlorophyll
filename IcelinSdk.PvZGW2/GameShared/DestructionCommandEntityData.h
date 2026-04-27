#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BE50
   RuntimeId:        0FE0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A79
   VfTable:          0000000142268048
   Address (Base):   0000000143112B70
*/
#pragma pack(push, 8)
class DestructionCommandEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 InstanceCountDestroyedPerFrame; /* 0x0018 */
  FB_UINT32 InstanceCountDestroyedPerType; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DestructionCommandEntityData) == 32);

}
