#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/MorphBaseSlider.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FBB8
   RuntimeId:        132F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E21
   VfTable:          0000000142277140
   Address (Base):   0000000143110470
*/
#pragma pack(push, 8)
class MorphTwoWaySlider : public MorphBaseSlider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LeftMax; /* 0x0020 */
  FB_FLOAT32 RightMax; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MorphTwoWaySlider) == 40);

}
