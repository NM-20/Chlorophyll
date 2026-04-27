#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B840
   RuntimeId:        2658
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1154
   VfTable:          000000014235AA48
   Address (Base):   0000000143106690
*/
#pragma pack(push, 8)
class AwardStarNameData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AwardStarNameInstance) NameInstances; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AwardStarNameData) == 24);

}
