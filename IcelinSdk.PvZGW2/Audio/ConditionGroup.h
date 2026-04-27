#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/ConditionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835778
   RuntimeId:        02F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A3
   VfTable:          00000001421F1918
   Address (Base):   0000000143119950
*/
#pragma pack(push, 8)
class ConditionGroup : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  AudioGraphNodePort Y; /* 0x0018 */
  AudioGraphNodePort True; /* 0x0020 */
  ConditionType Condition; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ConditionGroup) == 48);

}
