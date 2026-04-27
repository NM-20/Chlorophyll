#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849B88
   RuntimeId:        0DF2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1164
   VfTable:          000000014225F8D0
   Address (Base):   00000001430DC470
*/
#pragma pack(push, 8)
class MaterialRelationVehicleData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) ChassiEffect; /* 0x0010 */
  FB_HANDLE(class EffectBlueprint) TrackEffect; /* 0x0018 */
  FB_HANDLE(class EffectBlueprint) WheelEffect; /* 0x0020 */
  FB_HANDLE(class EffectBlueprint) GroundEffect; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationVehicleData) == 48);

}
