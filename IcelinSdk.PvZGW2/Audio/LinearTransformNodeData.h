#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835998
   RuntimeId:        0319
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1254
   VfTable:          00000001421F1818
   Address (Base):   0000000143100750
*/
#pragma pack(push, 8)
class LinearTransformNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  AudioGraphNodePort K; /* 0x0018 */
  AudioGraphNodePort M; /* 0x0020 */
  AudioGraphNodePort Y; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LinearTransformNodeData) == 48);

}
