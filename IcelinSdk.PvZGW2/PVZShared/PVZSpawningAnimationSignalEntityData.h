#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZSpawningAnimationSignalBinding.h>

namespace fb
{

/* TypeInfo (Array): 00000001428628D8
   RuntimeId:        2098
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A32
   VfTable:          0000000142343A38
   Address (Base):   00000001430E8140
*/
#pragma pack(push, 8)
class PVZSpawningAnimationSignalEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZSpawningAnimationSignalBinding Binding; /* 0x0018 */
  FB_FLOAT32 SpawnTime; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZSpawningAnimationSignalEntityData) == 72);

}
