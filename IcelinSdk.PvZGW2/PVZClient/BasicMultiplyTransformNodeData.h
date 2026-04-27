#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859450
   RuntimeId:        1B12
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1232
   VfTable:          00000001422DC248
   Address (Base):   00000001430FA0F0
*/
#pragma pack(push, 8)
class BasicMultiplyTransformNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  AudioGraphNodePort Y; /* 0x0018 */
  AudioGraphNodePort Z; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BasicMultiplyTransformNodeData) == 40);

}
