#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849720
   RuntimeId:        0DB2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD9
   VfTable:          000000014225FD18
   Address (Base):   00000001430EE440
*/
#pragma pack(push, 8)
class EventIfSwitchEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN StartState; /* 0x0018 */
  FB_BOOLEAN RunOnce; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EventIfSwitchEntityData) == 32);

}
