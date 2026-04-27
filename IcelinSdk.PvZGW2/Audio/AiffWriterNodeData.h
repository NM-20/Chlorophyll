#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836BE0
   RuntimeId:        0438
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1273
   VfTable:          00000001421FA5D8
   Address (Base):   00000001430FEF50
*/
#pragma pack(push, 8)
class AiffWriterNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Start; /* 0x0018 */
  AudioGraphNodePort Stop; /* 0x0020 */
  FB_CSTRING FileName; /* 0x0028 */
  SoundGraphPluginRef Plugin; /* 0x0030 */
  char pad_0033[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AiffWriterNodeData) == 56);

}
