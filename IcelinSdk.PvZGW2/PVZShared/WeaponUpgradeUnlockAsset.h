#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAsset.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUpgradeApplicator.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869168
   RuntimeId:        2463
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0731
   VfTable:          0000000142356040
   Address (Base):   00000001430B5B30
*/
#pragma pack(push, 8)
class WeaponUpgradeUnlockAsset : public UnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  WeaponUpgradeApplicator Application; /* 0x0048 */
  FB_BOOLEAN IsUnique; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(WeaponUpgradeUnlockAsset) == 80);

}
