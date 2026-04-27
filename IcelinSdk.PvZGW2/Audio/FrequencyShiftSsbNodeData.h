#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/FrequencyShiftSsbFilter.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836E20
   RuntimeId:        045C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1241
   VfTable:          00000001421FA4E0
   Address (Base):   00000001430FEC50
*/
#pragma pack(push, 8)
class FrequencyShiftSsbNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Frequency; /* 0x0018 */
  AudioGraphNodePort Out; /* 0x0020 */
  FrequencyShiftSsbFilter Filter; /* 0x0028 */
  SoundGraphPluginRef Plugin; /* 0x002C */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FrequencyShiftSsbNodeData) == 48);

}
