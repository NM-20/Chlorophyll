#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837280
   RuntimeId:        04A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          121D
   VfTable:          00000001421FA310
   Address (Base):   00000001430FE950
*/
#pragma pack(push, 8)
class PhysicsNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Distance; /* 0x0010 */
  AudioGraphNodePort Velocity; /* 0x0018 */
  AudioGraphNodePort RelativeVelocity; /* 0x0020 */
  AudioGraphNodePort Azimuth; /* 0x0028 */
  AudioGraphNodePort ElevationAngle; /* 0x0030 */
  FB_REFARRAY(class PhysicsEntry) Entries; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PhysicsNodeData) == 64);

}
