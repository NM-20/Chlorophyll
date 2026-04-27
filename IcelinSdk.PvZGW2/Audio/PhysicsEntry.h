#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837220
   RuntimeId:        049C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A1
   VfTable:          00000001421FA330
   Address (Base):   0000000143117C70
*/
#pragma pack(push, 8)
class PhysicsEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Distance; /* 0x0010 */
  AudioGraphNodePort Azimuth; /* 0x0018 */
  AudioGraphNodePort ElevationAngle; /* 0x0020 */
  FB_HANDLE(class OutputNodeData) Output; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PhysicsEntry) == 48);

}
