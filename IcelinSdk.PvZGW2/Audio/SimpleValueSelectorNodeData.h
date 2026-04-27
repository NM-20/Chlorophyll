#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835DE8
   RuntimeId:        035D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1211
   VfTable:          00000001421F1670
   Address (Base):   0000000143100210
*/
#pragma pack(push, 8)
class SimpleValueSelectorNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_FLOAT32) OutValues; /* 0x0010 */
  AudioGraphNodePort Index; /* 0x0018 */
  AudioGraphNodePort Out; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SimpleValueSelectorNodeData) == 40);

}
