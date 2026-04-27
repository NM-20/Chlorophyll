#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SelectableUnlock.h>

namespace fb
{

/* TypeInfo (Array): 00000001428658B8
   RuntimeId:        2301
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EBC
   VfTable:          0000000142351128
   Address (Base):   00000001430DA6D0
*/
#pragma pack(push, 8)
class SelectableUnlockSpawner : public SelectableUnlock
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AISpawnData) AISpawn; /* 0x0028 */
  FB_BOOLEAN UsePlayersCustomizations; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SelectableUnlockSpawner) == 56);

}
