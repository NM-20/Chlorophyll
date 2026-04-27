#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865EC8
   RuntimeId:        235F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1163
   VfTable:          0000000142350A00
   Address (Base):   00000001430F8530
*/
#pragma pack(push, 8)
class MaterialPropertyPVZRootingData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) RootingEffect; /* 0x0010 */
  FB_HANDLE(class EffectBlueprint) RootedEffect; /* 0x0018 */
  FB_HANDLE(class EffectBlueprint) UnrootingEffect; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyPVZRootingData) == 40);

}
