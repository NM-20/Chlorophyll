#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835858
   RuntimeId:        0305
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          123E
   VfTable:          00000001421F18B8
   Address (Base):   00000001431009F0
*/
#pragma pack(push, 8)
class EventDebugNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DebugEventInput) Events; /* 0x0010 */
  FB_BOOLEAN Enabled; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EventDebugNodeData) == 32);

}
