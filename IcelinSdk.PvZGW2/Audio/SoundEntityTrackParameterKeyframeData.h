#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundEntityTrackKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428379D0
   RuntimeId:        0512
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1207
   VfTable:          00000001421FA018
   Address (Base):   00000001431176D0
*/
#pragma pack(push, 8)
class SoundEntityTrackParameterKeyframeData : public SoundEntityTrackKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackParameterKeyframeData) == 32);

}
