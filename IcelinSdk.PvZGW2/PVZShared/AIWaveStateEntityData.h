#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873788
   RuntimeId:        2BE8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF5
   VfTable:          00000001423791C0
   Address (Base):   00000001431045F0
*/
#pragma pack(push, 8)
class AIWaveStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AIWaveStateEntityData) == 24);

}
