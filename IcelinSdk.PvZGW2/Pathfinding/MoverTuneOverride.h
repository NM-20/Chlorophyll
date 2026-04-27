#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/MoverTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850918
   RuntimeId:        13CD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06BB
   VfTable:          000000014227C6A0
   Address (Base):   00000001430FC370
*/
#pragma pack(push, 8)
class MoverTuneOverride : public MoverTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */
#pragma pack(pop)

static_assert(sizeof(MoverTuneOverride) == 216);

}
