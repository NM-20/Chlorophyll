#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/LinkDat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872FF0
   RuntimeId:        2B78
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0945
   VfTable:          0000000142379578
   Address (Base):   0000000143104CB0
*/
#pragma pack(push, 8)
class PVZLinkDat : public LinkDat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZLinkDat) == 72);

}
