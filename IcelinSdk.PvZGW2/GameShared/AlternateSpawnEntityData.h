#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B788
   RuntimeId:        0F7D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B36
   VfTable:          00000001422687E8
   Address (Base):   00000001430DBED0
*/
#pragma pack(push, 16)
class AlternateSpawnEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId Team; /* 0x0060 */
  FB_FLOAT32 Priority; /* 0x0064 */
  FB_BOOLEAN Enabled; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(AlternateSpawnEntityData) == 112);

}
