#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Pathfinding/PathLinkDirection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850A78
   RuntimeId:        13E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B81
   VfTable:          000000014227C540
   Address (Base):   00000001430EB500
*/
#pragma pack(push, 16)
class PathLinkEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3) Points; /* 0x0060 */
  PathLinkDirection Direction; /* 0x0068 */
  char pad_006C[0x0004];
  FB_HANDLE(class LinkDat) LinkDat; /* 0x0070 */
  FB_BOOLEAN ActiveAtStart; /* 0x0078 */
  FB_BOOLEAN DeferredCreation; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PathLinkEntityData) == 128);

}
