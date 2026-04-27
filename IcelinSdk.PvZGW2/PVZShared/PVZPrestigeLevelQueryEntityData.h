#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865408
   RuntimeId:        22B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A98
   VfTable:          00000001423516F0
   Address (Base):   00000001430E73C0
*/
#pragma pack(push, 8)
class PVZPrestigeLevelQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class PVZCharacterWeaponUnlockAsset) PrimaryWeaponAsset; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZPrestigeLevelQueryEntityData) == 40);

}
