#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundEntityTrackKeyframeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428379B0
   RuntimeId:        0510
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1206
   VfTable:          00000001421FA030
   Address (Base):   0000000143117730
*/
#pragma pack(push, 8)
class SoundEntityTrackEventKeyframeData : public SoundEntityTrackKeyframeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackEventKeyframeData) == 24);

}
