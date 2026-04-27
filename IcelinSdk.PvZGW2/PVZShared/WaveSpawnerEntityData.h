#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873708
   RuntimeId:        2BE0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BBA
   VfTable:          0000000142379168
   Address (Base):   0000000143104710
*/
#pragma pack(push, 8)
class WaveSpawnerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WaveComposition) WaveComposition; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WaveSpawnerEntityData) == 32);

}
