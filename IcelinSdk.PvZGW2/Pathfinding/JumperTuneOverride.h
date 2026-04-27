#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/JumperTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850838
   RuntimeId:        13BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F2
   VfTable:          000000014227C720
   Address (Base):   000000014310FC90
*/
#pragma pack(push, 8)
class JumperTuneOverride : public JumperTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(JumperTuneOverride) == 40);

}
