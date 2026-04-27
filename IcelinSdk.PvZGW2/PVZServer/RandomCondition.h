#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EDF8
   RuntimeId:        1D23
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1064
   VfTable:          000000014231E058
   Address (Base):   000000014310BE50
*/
#pragma pack(push, 8)
class RandomCondition : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0010 */
  FB_FLOAT32 Duration; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RandomCondition) == 24);

}
