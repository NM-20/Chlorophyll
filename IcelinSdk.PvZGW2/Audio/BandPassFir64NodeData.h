#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836C00
   RuntimeId:        043A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          126B
   VfTable:          00000001421FA5C8
   Address (Base):   00000001431184B0
*/
#pragma pack(push, 8)
class BandPassFir64NodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Frequency; /* 0x0018 */
  AudioGraphNodePort Bandwidth; /* 0x0020 */
  AudioGraphNodePort Out; /* 0x0028 */
  SoundGraphPluginRef Plugin; /* 0x0030 */
  char pad_0033[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BandPassFir64NodeData) == 56);

}
