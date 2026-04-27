#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StrikePattern.h>

namespace fb
{

/* TypeInfo (Array): 00000001428695C8
   RuntimeId:        24A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F05
   VfTable:          0000000142355CA8
   Address (Base):   00000001430D9DD0
*/
#pragma pack(push, 8)
class PvZArtilleryStrikeWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxStrikeDistance; /* 0x0018 */
  FB_FLOAT32 LeadingShotDelay; /* 0x001C */
  FB_FLOAT32 LeadShotDamageMultiplier; /* 0x0020 */
  FB_FLOAT32 StrikeRadius; /* 0x0024 */
  FB_FLOAT32 StrikeSpeed; /* 0x0028 */
  FB_FLOAT32 StrikeDelay; /* 0x002C */
  FB_FLOAT32 SpawnHeight; /* 0x0030 */
  FB_FLOAT32 SpawnDelay; /* 0x0034 */
  StrikePattern Pattern; /* 0x0038 */
  FB_BOOLEAN UseLeadingShot; /* 0x003C */
  FB_BOOLEAN EnableProjectileTrails; /* 0x003D */
  FB_BOOLEAN UseAITarget; /* 0x003E */
  char pad_003F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PvZArtilleryStrikeWeaponData) == 64);

}
