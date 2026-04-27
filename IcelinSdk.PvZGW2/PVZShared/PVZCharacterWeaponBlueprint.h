#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862938
   RuntimeId:        209E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0797
   VfTable:          0000000142343A10
   Address (Base):   0000000143108730
*/
#pragma pack(push, 8)
class PVZCharacterWeaponBlueprint : public ObjectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponBlueprint) == 72);

}
