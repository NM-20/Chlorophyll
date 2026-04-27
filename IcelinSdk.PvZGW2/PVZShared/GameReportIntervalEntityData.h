#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864F78
   RuntimeId:        2274
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B9B
   VfTable:          0000000142351B08
   Address (Base):   00000001430E74E0
*/
#pragma pack(push, 8)
class GameReportIntervalEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameReportIntervalEntityData) == 24);

}
