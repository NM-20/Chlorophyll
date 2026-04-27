#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835978
   RuntimeId:        0317
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          123D
   VfTable:          00000001421F1828
   Address (Base):   00000001431007B0
*/
#pragma pack(push, 8)
class LfoNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Hz; /* 0x0010 */
  AudioGraphNodePort Amplitude; /* 0x0018 */
  AudioGraphNodePort Out; /* 0x0020 */
  FB_FLOAT32 Min; /* 0x0028 */
  FB_FLOAT32 Max; /* 0x002C */
  FB_BOOLEAN StartAtRandomValue; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(LfoNodeData) == 56);

}
