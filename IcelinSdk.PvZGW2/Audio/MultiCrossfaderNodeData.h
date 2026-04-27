#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835B38
   RuntimeId:        0333
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          122F
   VfTable:          00000001421F1768
   Address (Base):   00000001431005D0
*/
#pragma pack(push, 8)
class MultiCrossfaderNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MultiCrossfaderGroup) CrossfaderGroups; /* 0x0010 */
  AudioGraphNodePort Start; /* 0x0018 */
  AudioGraphNodePort Stop; /* 0x0020 */
  AudioGraphNodePort Control; /* 0x0028 */
  FB_BOOLEAN LockControlValue; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MultiCrossfaderNodeData) == 56);

}
