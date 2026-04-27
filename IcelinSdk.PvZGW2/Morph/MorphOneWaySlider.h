#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/MorphBaseSlider.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FBD8
   RuntimeId:        1331
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E23
   VfTable:          0000000142277120
   Address (Base):   0000000143110410
*/
#pragma pack(push, 8)
class MorphOneWaySlider : public MorphBaseSlider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TargetMax; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MorphOneWaySlider) == 40);

}
