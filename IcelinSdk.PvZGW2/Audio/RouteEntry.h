#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837300
   RuntimeId:        04AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A9
   VfTable:          00000001421FA2E0
   Address (Base):   0000000143117BB0
*/
#pragma pack(push, 8)
class RouteEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Output; /* 0x0010 */
  AudioGraphNodePort Amplitude; /* 0x0018 */
  SoundGraphPluginRef Plugin; /* 0x0020 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RouteEntry) == 40);

}
