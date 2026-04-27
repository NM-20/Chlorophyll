#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836CC0
   RuntimeId:        0446
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1227
   VfTable:          00000001421FA578
   Address (Base):   00000001430FEE90
*/
#pragma pack(push, 8)
class CrossfaderNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In1; /* 0x0010 */
  AudioGraphNodePort In2; /* 0x0018 */
  AudioGraphNodePort Ctrl; /* 0x0020 */
  AudioGraphNodePort Out; /* 0x0028 */
  SoundGraphPluginRef Plugin1; /* 0x0030 */
  SoundGraphPluginRef Plugin2; /* 0x0033 */
  char pad_0036[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CrossfaderNodeData) == 56);

}
