#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859550
   RuntimeId:        1B22
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1236
   VfTable:          00000001422DC178
   Address (Base):   00000001430F9F70
*/
#pragma pack(push, 8)
class JittererNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Min; /* 0x0010 */
  AudioGraphNodePort Max; /* 0x0018 */
  AudioGraphNodePort Frequency; /* 0x0020 */
  AudioGraphNodePort Value; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(JittererNodeData) == 48);

}
