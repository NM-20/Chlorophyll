#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/TimerMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835E68
   RuntimeId:        0365
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          120E
   VfTable:          00000001421F1640
   Address (Base):   0000000143100150
*/
#pragma pack(push, 8)
class TimerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Start; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort Period; /* 0x0020 */
  AudioGraphNodePort Tick; /* 0x0028 */
  AudioGraphNodePort Progress; /* 0x0030 */
  TimerMode Mode; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TimerNodeData) == 64);

}
