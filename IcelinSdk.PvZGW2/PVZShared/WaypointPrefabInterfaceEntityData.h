#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428731B8
   RuntimeId:        2B8E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A83
   VfTable:          00000001423795C0
   Address (Base):   00000001430D86F0
*/
#pragma pack(push, 8)
class WaypointPrefabInterfaceEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WaypointPrefabInterfaceEntityData) == 24);

}
