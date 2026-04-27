#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428358D8
   RuntimeId:        030D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          124F
   VfTable:          00000001421F1878
   Address (Base):   0000000143100930
*/
#pragma pack(push, 8)
class DeMuxNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DeMuxOutput) Outputs; /* 0x0010 */
  AudioGraphNodePort Trigger; /* 0x0018 */
  AudioGraphNodePort Value; /* 0x0020 */
  FB_BOOLEAN WrapValue; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DeMuxNodeData) == 48);

}
