#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/MatrixPannerOutputChannelCount.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837040
   RuntimeId:        047E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          123F
   VfTable:          00000001421FA400
   Address (Base):   0000000143117F10
*/
#pragma pack(push, 8)
class MatrixPannerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort FrontLeft; /* 0x0018 */
  AudioGraphNodePort Center; /* 0x0020 */
  AudioGraphNodePort FrontRight; /* 0x0028 */
  AudioGraphNodePort RearLeft; /* 0x0030 */
  AudioGraphNodePort Lfe; /* 0x0038 */
  AudioGraphNodePort RearRight; /* 0x0040 */
  AudioGraphNodePort FarRearLeft; /* 0x0048 */
  AudioGraphNodePort FarRearRight; /* 0x0050 */
  AudioGraphNodePort Out; /* 0x0058 */
  MatrixPannerOutputChannelCount OutputChannelCount; /* 0x0060 */
  char pad_0064[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(MatrixPannerNodeData) == 104);

}
