#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835898
   RuntimeId:        0309
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          125B
   VfTable:          00000001421F1898
   Address (Base):   0000000143100990
*/
#pragma pack(push, 8)
class DeltaNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DeltaGroup) Deltas; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DeltaNodeData) == 24);

}
