#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835838
   RuntimeId:        0303
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A8
   VfTable:          00000001421F18C8
   Address (Base):   0000000143119890
*/
#pragma pack(push, 8)
class DebugEventInput : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort E; /* 0x0010 */
  FB_CSTRING Name; /* 0x0018 */
  FB_BOOLEAN RequireTriggeredAndSet; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DebugEventInput) == 40);

}
