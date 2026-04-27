#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836188
   RuntimeId:        0397
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11AC
   VfTable:          00000001421F14B8
   Address (Base):   00000001431190B0
*/
#pragma pack(push, 8)
class MixerSetPropertyEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  FB_UINT32 Target; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class MixGroup) Group; /* 0x0020 */
  FB_FLOAT32 AttackTime; /* 0x0028 */
  FB_FLOAT32 ReleaseTime; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MixerSetPropertyEntry) == 48);

}
