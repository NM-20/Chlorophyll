#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859630
   RuntimeId:        1B30
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1251
   VfTable:          00000001422DC150
   Address (Base):   00000001430F9DF0
*/
#pragma pack(push, 8)
class MixerGroupNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Gain; /* 0x0010 */
  AudioGraphNodePort Pitch; /* 0x0018 */
  AudioGraphNodePort LfeSend; /* 0x0020 */
  AudioGraphNodePort WetSend; /* 0x0028 */
  AudioGraphNodePort LPF; /* 0x0030 */
  FB_HANDLE(class MixGroup) MixGroup; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MixerGroupNodeData) == 64);

}
