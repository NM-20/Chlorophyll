#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835F28
   RuntimeId:        0371
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          121F
   VfTable:          00000001421F15F0
   Address (Base):   0000000143100030
*/
#pragma pack(push, 8)
class KeepAliveNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort KeepAlive; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(KeepAliveNodeData) == 24);

}
