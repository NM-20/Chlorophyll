#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphData.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837770
   RuntimeId:        04EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0891
   VfTable:          00000001421FA170
   Address (Base):   00000001430FEFB0
*/
#pragma pack(push, 8)
class SoundGraphData : public AudioGraphData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SoundGraphInfo Info; /* 0x0038 */
  FB_REFARRAY(class AudioGraphParameter) InputParameters; /* 0x0060 */
  FB_REFARRAY(class AudioGraphParameter) OutputParameters; /* 0x0068 */
  FB_REFARRAY(class AudioGraphEvent) InputEvents; /* 0x0070 */
  FB_REFARRAY(class AudioGraphEvent) OutputEvents; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphData) == 128);

}
