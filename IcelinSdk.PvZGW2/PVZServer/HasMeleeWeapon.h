#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F3D8
   RuntimeId:        1D81
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1026
   VfTable:          000000014231DA78
   Address (Base):   000000014310ACB0
*/
#pragma pack(push, 8)
class HasMeleeWeapon : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasMeleeWeapon) == 16);

}
