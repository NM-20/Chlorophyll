#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428372C0
   RuntimeId:        04A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1250
   VfTable:          00000001421FA2F0
   Address (Base):   00000001430FE890
*/
#pragma pack(push, 8)
class IrReverbControllerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Reverb0; /* 0x0010 */
  AudioGraphNodePort Amplitude0; /* 0x0018 */
  AudioGraphNodePort Reverb1; /* 0x0020 */
  AudioGraphNodePort Amplitude1; /* 0x0028 */
  FB_BOOLEAN NormalizeGain; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(IrReverbControllerNodeData) == 56);

}
