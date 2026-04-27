#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BF10
   RuntimeId:        0FEC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B68
   VfTable:          0000000142267E40
   Address (Base):   00000001430BF0D0
*/
#pragma pack(push, 16)
class TriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Delay; /* 0x0060 */
  FB_BOOLEAN RunOnce; /* 0x0064 */
  FB_BOOLEAN Enabled; /* 0x0065 */
  char pad_0066[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TriggerEntityData) == 112);

}
