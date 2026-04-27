#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B860
   RuntimeId:        265A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC1
   VfTable:          000000014235AA28
   Address (Base):   0000000143106630
*/
#pragma pack(push, 8)
class AwardStarData : public AwardData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AwardStarNameData) StarTemplate; /* 0x00A0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(AwardStarData) == 168);

}
