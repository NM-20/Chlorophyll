#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835E08
   RuntimeId:        035F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1194
   VfTable:          00000001421F1660
   Address (Base):   0000000143119350
*/
#pragma pack(push, 8)
class SwitcherEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort CaseTrigger; /* 0x0010 */
  FB_FLOAT32 CaseValue; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SwitcherEntry) == 32);

}
