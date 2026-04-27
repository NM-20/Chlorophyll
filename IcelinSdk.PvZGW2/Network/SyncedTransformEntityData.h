#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850030
   RuntimeId:        136A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A87
   VfTable:          0000000142278F48
   Address (Base):   00000001430EB740
*/
#pragma pack(push, 8)
class SyncedTransformEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Interpolate; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SyncedTransformEntityData) == 32);

}
