#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859570
   RuntimeId:        1B24
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1256
   VfTable:          00000001422DC188
   Address (Base):   00000001430F9F10
*/
#pragma pack(push, 8)
class PlatformTunerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Output; /* 0x0010 */
  FB_FLOAT32 Win; /* 0x0018 */
  FB_FLOAT32 PS3; /* 0x001C */
  FB_FLOAT32 Xbox360; /* 0x0020 */
  FB_FLOAT32 PS4; /* 0x0024 */
  FB_FLOAT32 XboxOne; /* 0x0028 */
  FB_FLOAT32 IOS; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PlatformTunerNodeData) == 48);

}
