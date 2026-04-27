#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/SurfaceOrientTune.h>

namespace fb
{

/* TypeInfo (Array): 00000001428508D8
   RuntimeId:        13C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          062E
   VfTable:          000000014227C690
   Address (Base):   000000014310FAB0
*/
#pragma pack(push, 8)
class SurfaceOrientTuneOverride : public SurfaceOrientTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SurfaceOrientTuneOverride) == 40);

}
