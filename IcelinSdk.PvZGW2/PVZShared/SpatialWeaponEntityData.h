#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864CB8
   RuntimeId:        2248
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B57
   VfTable:          0000000142351EA8
   Address (Base):   00000001430E68E0
*/
#pragma pack(push, 16)
class SpatialWeaponEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlockAsset; /* 0x0060 */
  FB_HANDLE(class WeaponFiringData) WeaponFiring; /* 0x0068 */
  FB_HANDLE(class WeaponData) CustomWeaponType; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(SpatialWeaponEntityData) == 128);

}
