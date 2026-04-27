#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428492C0
   RuntimeId:        0D6C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ADC
   VfTable:          00000001422602E8
   Address (Base):   00000001430FD570
*/
#pragma pack(push, 8)
class SurroundingGeometryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AllowedVehiclesData) AllowedVehicleList; /* 0x0018 */
  FB_HANDLE(class CombatAreaTriggerEntityData) CombatArea; /* 0x0020 */
  FB_UINT32 CombatAreaIndex; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SurroundingGeometryEntityData) == 48);

}
