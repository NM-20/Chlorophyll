#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859410
   RuntimeId:        1B0E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          126E
   VfTable:          00000001422DC258
   Address (Base):   00000001430FA1B0
*/
#pragma pack(push, 8)
class PadRumbleNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort RumbleHigh; /* 0x0010 */
  AudioGraphNodePort RumbleLow; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PadRumbleNodeData) == 32);

}
