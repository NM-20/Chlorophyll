#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/RadialTriggerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D438
   RuntimeId:        27D1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B49
   VfTable:          0000000142365C10
   Address (Base):   00000001430D33D0
*/
#pragma pack(push, 16)
class PVZAreaTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  RadialTriggerData TriggerData; /* 0x0064 */
  FB_BOOLEAN Enabled; /* 0x006C */
  char pad_006D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZAreaTriggerEntityData) == 112);

}
