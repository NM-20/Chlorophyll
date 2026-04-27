#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428357B8
   RuntimeId:        02FB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1260
   VfTable:          00000001421F18F8
   Address (Base):   0000000143100AB0
*/
#pragma pack(push, 8)
class Crossfader2NodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Ctrl; /* 0x0010 */
  AudioGraphNodePort CtrlOut1; /* 0x0018 */
  AudioGraphNodePort CtrlOut2; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(Crossfader2NodeData) == 40);

}
