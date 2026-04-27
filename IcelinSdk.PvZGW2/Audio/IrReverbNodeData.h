#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428372A0
   RuntimeId:        04A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1224
   VfTable:          00000001421FA300
   Address (Base):   00000001430FE8F0
*/
#pragma pack(push, 8)
class IrReverbNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  AudioGraphNodePort Reverb0; /* 0x0020 */
  AudioGraphNodePort Amplitude0; /* 0x0028 */
  AudioGraphNodePort Reverb1; /* 0x0030 */
  AudioGraphNodePort Amplitude1; /* 0x0038 */
  FB_FLOAT32 MaxReverbLength; /* 0x0040 */
  SoundGraphPluginRef ReverbPlugin; /* 0x0044 */
  char pad_0047[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(IrReverbNodeData) == 72);

}
