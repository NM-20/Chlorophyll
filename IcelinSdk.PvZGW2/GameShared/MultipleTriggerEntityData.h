#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEventEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BFD0
   RuntimeId:        0FF8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B6D
   VfTable:          0000000142267DD0
   Address (Base):   00000001430ED360
*/
#pragma pack(push, 16)
class MultipleTriggerEntityData : public TriggerEventEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TriggerAmount; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(MultipleTriggerEntityData) == 128);

}
