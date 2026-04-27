#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Pathfinding/NavLinkType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850A38
   RuntimeId:        13DF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0944
   VfTable:          000000014227C588
   Address (Base):   00000001430FC310
*/
#pragma pack(push, 8)
class LinkDat : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 LayerMask; /* 0x0010 */
  NavLinkType LinkType; /* 0x0014 */
  FB_UINT32 ForwardLinkUsageFlags; /* 0x0018 */
  FB_UINT32 BackwardLinkUsageFlags; /* 0x001C */
  FB_FLOAT32 PenaltyMult; /* 0x0020 */
  FB_FLOAT32 MaxSnapDist; /* 0x0024 */
  FB_FLOAT32 MayUseDist; /* 0x0028 */
  FB_FLOAT32 MustUseDist; /* 0x002C */
  FB_HANDLE(class CustomPathLinkData) UserData; /* 0x0030 */
  FB_HANDLE(class LinkFlowTune) LinkFlowTune; /* 0x0038 */
  FB_BOOLEAN Bidirectional; /* 0x0040 */
  FB_BOOLEAN StopToUseLink; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(LinkDat) == 72);

}
