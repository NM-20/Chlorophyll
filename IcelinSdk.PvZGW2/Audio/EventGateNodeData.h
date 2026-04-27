#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428358F8
   RuntimeId:        030F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1266
   VfTable:          00000001421F1868
   Address (Base):   00000001431008D0
*/
#pragma pack(push, 8)
class EventGateNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  AudioGraphNodePort CoolDownTime; /* 0x0020 */
  AudioGraphNodePort Probability; /* 0x0028 */
  AudioGraphNodePort Enable; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(EventGateNodeData) == 56);

}
