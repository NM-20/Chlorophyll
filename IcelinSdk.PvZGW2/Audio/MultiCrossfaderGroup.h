#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/FaderType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835B18
   RuntimeId:        0331
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1196
   VfTable:          00000001421F1778
   Address (Base):   00000001431194D0
*/
#pragma pack(push, 8)
class MultiCrossfaderGroup : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Amplitude; /* 0x0010 */
  AudioGraphNodePort Start; /* 0x0018 */
  AudioGraphNodePort Stop; /* 0x0020 */
  FB_FLOAT32 FadeAmplitude; /* 0x0028 */
  FB_FLOAT32 FadeBegin; /* 0x002C */
  FB_FLOAT32 FadeEnd; /* 0x0030 */
  FaderType FadeType; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MultiCrossfaderGroup) == 56);

}
