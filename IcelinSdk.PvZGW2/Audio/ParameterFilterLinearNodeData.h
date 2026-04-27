#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/ParameterFilterLinearNodeVersion.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835C18
   RuntimeId:        0341
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1229
   VfTable:          00000001421F1738
   Address (Base):   00000001431004B0
*/
#pragma pack(push, 8)
class ParameterFilterLinearNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  AudioGraphNodePort AttackSpeed; /* 0x0020 */
  AudioGraphNodePort ReleaseSpeed; /* 0x0028 */
  ParameterFilterLinearNodeVersion Version; /* 0x0030 */
  FB_FLOAT32 DefaultOutputValue; /* 0x0034 */
  FB_BOOLEAN KeepActive; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ParameterFilterLinearNodeData) == 64);

}
