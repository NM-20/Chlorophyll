#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849860
   RuntimeId:        0DC6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BFA
   VfTable:          000000014225FB90
   Address (Base):   00000001430EDBA0
*/
#pragma pack(push, 8)
class StreamingGateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Timeout; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StreamingGateEntityData) == 32);

}
