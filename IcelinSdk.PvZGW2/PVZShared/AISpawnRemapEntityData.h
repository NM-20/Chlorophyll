#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873A18
   RuntimeId:        2C0C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A8C
   VfTable:          0000000142378E38
   Address (Base):   00000001430E1840
*/
#pragma pack(push, 8)
class AISpawnRemapEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AISpawnDataRemap) RemapValues; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AISpawnRemapEntityData) == 32);

}
