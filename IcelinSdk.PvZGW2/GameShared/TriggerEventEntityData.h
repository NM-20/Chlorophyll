#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BFB0
   RuntimeId:        0FF6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B6A
   VfTable:          0000000142267E08
   Address (Base):   00000001430DC050
*/
#pragma pack(push, 16)
class TriggerEventEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TriggerEventEntityData) == 112);

}
