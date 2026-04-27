#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LayeredTransformTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F818
   RuntimeId:        12F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CBC
   VfTable:          0000000142276BA0
   Address (Base):   00000001430EBAA0
*/
#pragma pack(push, 8)
class ANTBoneTrackData : public LayeredTransformTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING BoneName; /* 0x0048 */
  FB_BOOLEAN ApplyLayeredTransform; /* 0x0050 */
  FB_BOOLEAN RelativeToParent; /* 0x0051 */
  FB_BOOLEAN RelativeToParentConvert; /* 0x0052 */
  char pad_0053[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ANTBoneTrackData) == 88);

}
