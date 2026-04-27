#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/ObstacleDat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873030
   RuntimeId:        2B7C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0884
   VfTable:          0000000142379588
   Address (Base):   0000000143104BF0
*/
#pragma pack(push, 8)
class PVZObstacleDat : public ObstacleDat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZObstacleDat) == 48);

}
