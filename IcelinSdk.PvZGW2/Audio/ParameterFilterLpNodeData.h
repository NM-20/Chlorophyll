#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/ParameterFilterLpNodeVersion.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835BD8
   RuntimeId:        033D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          121A
   VfTable:          00000001421F1748
   Address (Base):   0000000143100510
*/
#pragma pack(push, 8)
class ParameterFilterLpNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  AudioGraphNodePort Hz; /* 0x0020 */
  ParameterFilterLpNodeVersion Version; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ParameterFilterLpNodeData) == 48);

}
