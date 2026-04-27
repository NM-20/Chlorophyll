#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/FadeTrackKeyframeType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F250
   RuntimeId:        129F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1149
   VfTable:          0000000142276940
   Address (Base):   0000000143110CB0
*/
#pragma pack(push, 8)
class FadeTrackKeyframe : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  FadeTrackKeyframeType FadeType; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FadeTrackKeyframe) == 32);

}
