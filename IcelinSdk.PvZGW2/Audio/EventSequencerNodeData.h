#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/EventSequencerPlayback.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835F08
   RuntimeId:        036F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          121C
   VfTable:          00000001421F1600
   Address (Base):   0000000143100090
*/
#pragma pack(push, 8)
class EventSequencerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Start; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort Interval; /* 0x0020 */
  AudioGraphNodePort IntervalVariation; /* 0x0028 */
  AudioGraphNodePort Repeat; /* 0x0030 */
  AudioGraphNodePort RepeatVariation; /* 0x0038 */
  FB_REFARRAY(class EventSequencerOutEvent) OutEvents; /* 0x0040 */
  EventSequencerPlayback Playback; /* 0x0048 */
  FB_BOOLEAN IgnoreFirstInterval; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(EventSequencerNodeData) == 80);

}
