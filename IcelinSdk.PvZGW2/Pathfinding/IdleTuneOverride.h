#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/IdleTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850898
   RuntimeId:        13C5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07CF
   VfTable:          000000014227C6E0
   Address (Base):   000000014310FB70
*/
#pragma pack(push, 8)
class IdleTuneOverride : public IdleTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IdleTuneOverride) == 32);

}
