#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428631E8
   RuntimeId:        20FC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A62
   VfTable:          0000000142353C50
   Address (Base):   00000001430E6D60
*/
#pragma pack(push, 8)
class PVZFireWeaponActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterWeaponUnlockAsset) WeaponAsset; /* 0x0030 */
  FB_HANDLE(class WeaponFiringData) WeaponFiring; /* 0x0038 */
  FB_HANDLE(class WeaponData) CustomWeaponType; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZFireWeaponActionData) == 72);

}
