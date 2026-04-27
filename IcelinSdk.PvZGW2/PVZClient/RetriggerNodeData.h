#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/PVZClient/RetriggerPlayback.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859610
   RuntimeId:        1B2E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1268
   VfTable:          00000001422DC130
   Address (Base):   00000001430F9E50
*/
#pragma pack(push, 8)
class RetriggerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort TriggerIn; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort Interval; /* 0x0020 */
  AudioGraphNodePort IntervalVariation; /* 0x0028 */
  AudioGraphNodePort Repeat; /* 0x0030 */
  AudioGraphNodePort RepeatVariation; /* 0x0038 */
  FB_REFARRAY(class RetriggerEntry) RetriggerGroups; /* 0x0040 */
  RetriggerPlayback Playback; /* 0x0048 */
  FB_BOOLEAN ImmediateStart; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(RetriggerNodeData) == 80);

}
