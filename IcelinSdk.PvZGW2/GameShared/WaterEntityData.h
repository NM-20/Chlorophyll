#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BA70
   RuntimeId:        0FA4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B29
   VfTable:          00000001422684A8
   Address (Base):   00000001430D67F0
*/
#pragma pack(push, 16)
class WaterEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(WaterEntityData) == 144);

}
