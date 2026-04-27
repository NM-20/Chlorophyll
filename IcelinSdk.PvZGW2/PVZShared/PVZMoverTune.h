#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/MoverTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872F90
   RuntimeId:        2B72
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06BA
   VfTable:          0000000142379688
   Address (Base):   0000000143104D70
*/
#pragma pack(push, 8)
class PVZMoverTune : public MoverTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */
#pragma pack(pop)

static_assert(sizeof(PVZMoverTune) == 216);

}
