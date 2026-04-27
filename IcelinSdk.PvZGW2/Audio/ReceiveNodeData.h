#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835CA8
   RuntimeId:        0349
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1214
   VfTable:          00000001421F16F0
   Address (Base):   00000001430F3120
*/
#pragma pack(push, 8)
class ReceiveNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ReceiveEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ReceiveNodeData) == 24);

}
