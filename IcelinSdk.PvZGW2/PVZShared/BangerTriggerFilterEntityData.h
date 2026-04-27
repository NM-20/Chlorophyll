#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D398
   RuntimeId:        27C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C42
   VfTable:          0000000142365E50
   Address (Base):   00000001430D3430
*/
#pragma pack(push, 8)
class BangerTriggerFilterEntityData : public TriggerFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BangerTriggerFilterEntityData) == 24);

}
