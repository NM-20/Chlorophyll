#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428380C0
   RuntimeId:        057E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1239
   VfTable:          00000001421F99D0
   Address (Base):   00000001430FE650
*/
#pragma pack(push, 8)
class MusicPlayerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Pitch; /* 0x0010 */
  AudioGraphNodePort Amplitude; /* 0x0018 */
  AudioGraphNodePort Buffer; /* 0x0020 */
  AudioGraphNodePort Start; /* 0x0028 */
  AudioGraphNodePort Stop; /* 0x0030 */
  AudioGraphNodePort Pause; /* 0x0038 */
  AudioGraphNodePort Unpause; /* 0x0040 */
  AudioGraphNodePort Output; /* 0x0048 */
  AudioGraphNodePort Overlay; /* 0x0050 */
  AudioGraphNodePort IsBuffered; /* 0x0058 */
  AudioGraphNodePort IsFinished; /* 0x0060 */
  FB_HANDLE(class MusicBaseAsset) Asset; /* 0x0068 */
  FB_UINT32 DefaultStartEventNameHash; /* 0x0070 */
  char pad_0074[0x0004];
  FB_REFARRAY(class MusicPlayerEntry) Entries; /* 0x0078 */
  FB_STDARRAY(struct MusicPlayerPlugins) Plugins; /* 0x0080 */
  FB_STDARRAY(struct MusicPlayerRoutedVoice) RoutedVoices; /* 0x0088 */
  FB_HANDLE(class OutputNodeData) PitchSource; /* 0x0090 */
  AudioGraphNodePort OnBeat; /* 0x0098 */
  AudioGraphNodePort OnBar; /* 0x00A0 */
  AudioGraphNodePort OnTransition; /* 0x00A8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(MusicPlayerNodeData) == 176);

}
