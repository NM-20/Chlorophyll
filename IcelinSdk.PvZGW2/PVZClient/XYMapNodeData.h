#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859530
   RuntimeId:        1B20
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1246
   VfTable:          00000001422DC198
   Address (Base):   00000001430F9FD0
*/
#pragma pack(push, 8)
class XYMapNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Default; /* 0x0018 */
  AudioGraphNodePort Out; /* 0x0020 */
  FB_REFARRAY(class XYMapEntry) Regions; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(XYMapNodeData) == 48);

}
