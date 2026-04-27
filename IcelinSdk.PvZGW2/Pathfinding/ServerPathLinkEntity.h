#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/PathLinkEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        13F3
   TypeInfo Kind:    EntityClassInfo
   ClassId:          029A
   VfTable:          0000000000000000
   Address (Base):   0000000143138530
*/
class ServerPathLinkEntity : public PathLinkEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(ServerPathLinkEntity) == 88);

}
