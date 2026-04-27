#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836168
   RuntimeId:        0395
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1230
   VfTable:          00000001421F14C8
   Address (Base):   00000001430FFE50
*/
#pragma pack(push, 8)
class MixerSimplePresetNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Index; /* 0x0010 */
  FB_REFARRAY(class MixerPreset) Presets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerSimplePresetNodeData) == 32);

}
