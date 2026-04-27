#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835E28
   RuntimeId:        0361
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1245
   VfTable:          00000001421F1650
   Address (Base):   00000001431001B0
*/
#pragma pack(push, 8)
class SwitcherNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SwitcherEntry) Outputs; /* 0x0010 */
  AudioGraphNodePort Trigger; /* 0x0018 */
  AudioGraphNodePort Value; /* 0x0020 */
  FB_FLOAT32 DefaultCaseValue; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SwitcherNodeData) == 48);

}
