#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428380A0
   RuntimeId:        057C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B1
   VfTable:          00000001421F99E0
   Address (Base):   00000001431170D0
*/
#pragma pack(push, 8)
class MusicPlayerEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  FB_UINT32 TargetNameHash; /* 0x0018 */
  FB_BOOLEAN IsEvent; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MusicPlayerEntry) == 32);

}
