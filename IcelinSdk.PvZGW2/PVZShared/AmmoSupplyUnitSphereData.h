#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SupplyUnitSphereData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DC38
   RuntimeId:        284E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          087D
   VfTable:          000000014236EA90
   Address (Base):   0000000143105730
*/
#pragma pack(push, 8)
class AmmoSupplyUnitSphereData : public SupplyUnitSphereData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(enum WeaponClassEnum) IgnoredWeaponClasses; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AmmoSupplyUnitSphereData) == 56);

}
