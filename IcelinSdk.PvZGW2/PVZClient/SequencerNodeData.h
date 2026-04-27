#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/PVZClient/TimeMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428595B0
   RuntimeId:        1B28
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1215
   VfTable:          00000001422DC1A8
   Address (Base):   00000001430F9EB0
*/
#pragma pack(push, 8)
class SequencerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Start; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort EnableOutput; /* 0x0020 */
  AudioGraphNodePort Time; /* 0x0028 */
  AudioGraphNodePort Probability; /* 0x0030 */
  TimeMode TimeMode; /* 0x0038 */
  char pad_003C[0x0004];
  FB_REFARRAY(class SequencerEntry) Output; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(SequencerNodeData) == 72);

}
