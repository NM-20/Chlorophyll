#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428371C0
   RuntimeId:        0496
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11AE
   VfTable:          00000001421FA360
   Address (Base):   0000000143117D30
*/
#pragma pack(push, 8)
class OrientationNodeEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort ListenerRelativeYaw; /* 0x0010 */
  AudioGraphNodePort ListenerRelativePitch; /* 0x0018 */
  AudioGraphNodePort ListenerRelativeRoll; /* 0x0020 */
  AudioGraphNodePort ListenerRelativeAngle; /* 0x0028 */
  AudioGraphNodePort ListenerFovRelativeAngle; /* 0x0030 */
  AudioGraphNodePort TowardsListenerAngle; /* 0x0038 */
  FB_HANDLE(class OutputNodeData) Output; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(OrientationNodeEntry) == 72);

}
