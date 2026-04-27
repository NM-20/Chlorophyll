#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/MoverTuneOverride.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZLinkUsageFlags.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872FB0
   RuntimeId:        2B74
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06BC
   VfTable:          0000000142379698
   Address (Base):   0000000143104D10
*/
#pragma pack(push, 8)
class PVZMoverTuneOverride : public MoverTuneOverride
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZLinkUsageFlags PVZLinkUsageFlags; /* 0x00D8 */
  char pad_00DE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(PVZMoverTuneOverride) == 224);

}
