#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ExplosionEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864AD8
   RuntimeId:        222C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B80
   VfTable:          0000000142352180
   Address (Base):   00000001430D5050
*/
#pragma pack(push, 16)
class PvZExplosionEntityData : public ExplosionEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterWeaponUnlockAsset) WeaponAsset; /* 0x00F0 */
  FB_BOOLEAN AllowMultiDetonate; /* 0x00F8 */
  FB_BOOLEAN ApplyDamageOnSameTeamOnly; /* 0x00F9 */
  FB_BOOLEAN ExcludeIncomingPlayerEvent; /* 0x00FA */
  char pad_00FB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(PvZExplosionEntityData) == 256);

}
