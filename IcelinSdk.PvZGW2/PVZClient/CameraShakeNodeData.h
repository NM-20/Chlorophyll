#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428593F0
   RuntimeId:        1B0C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          125C
   VfTable:          00000001422DC218
   Address (Base):   00000001430FA210
*/
#pragma pack(push, 8)
class CameraShakeNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Pitch; /* 0x0010 */
  AudioGraphNodePort Yaw; /* 0x0018 */
  AudioGraphNodePort Roll; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraShakeNodeData) == 40);

}
