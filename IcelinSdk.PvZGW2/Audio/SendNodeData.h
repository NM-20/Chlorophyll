#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835D08
   RuntimeId:        034F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          122E
   VfTable:          00000001421F16C0
   Address (Base):   0000000143100390
*/
#pragma pack(push, 8)
class SendNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SendEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SendNodeData) == 24);

}
