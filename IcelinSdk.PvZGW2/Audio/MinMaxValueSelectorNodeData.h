#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835AD8
   RuntimeId:        032D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          124C
   VfTable:          00000001421F1788
   Address (Base):   0000000143100630
*/
#pragma pack(push, 8)
class MinMaxValueSelectorNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MinMaxValueSelectorEntry) Inputs; /* 0x0010 */
  AudioGraphNodePort MaxValue; /* 0x0018 */
  AudioGraphNodePort MaxIndex; /* 0x0020 */
  AudioGraphNodePort MinValue; /* 0x0028 */
  AudioGraphNodePort MinIndex; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MinMaxValueSelectorNodeData) == 56);

}
