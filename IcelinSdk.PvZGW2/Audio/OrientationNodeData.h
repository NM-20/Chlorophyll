#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428371E0
   RuntimeId:        0498
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          123A
   VfTable:          00000001421FA350
   Address (Base):   00000001430FE9B0
*/
#pragma pack(push, 8)
class OrientationNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort ListenerAngularVelocity; /* 0x0010 */
  FB_REFARRAY(class OrientationNodeEntry) Entries; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OrientationNodeData) == 32);

}
