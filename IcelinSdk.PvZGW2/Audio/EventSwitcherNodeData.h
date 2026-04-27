#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835938
   RuntimeId:        0313
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1234
   VfTable:          00000001421F1848
   Address (Base):   0000000143100870
*/
#pragma pack(push, 8)
class EventSwitcherNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class EventSwitcherEntry) Inputs; /* 0x0010 */
  AudioGraphNodePort Value; /* 0x0018 */
  FB_FLOAT32 DefaultValue; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EventSwitcherNodeData) == 40);

}
