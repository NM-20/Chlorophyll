#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GrenadeEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/StrikePattern.h>

namespace fb
{

/* TypeInfo (Array): 00000001428695A8
   RuntimeId:        24A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B1A
   VfTable:          0000000142355CF0
   Address (Base):   00000001430D3A30
*/
#pragma pack(push, 16)
class PVZArtilleryStrikeGrenadeEntityData : public GrenadeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Speed; /* 0x0180 */
  FB_HANDLE(class ProjectileBlueprint) ArtilleryShell; /* 0x0190 */
  FB_FLOAT32 LeadingShotDelay; /* 0x0198 */
  FB_FLOAT32 LeadShotDamageMultiplier; /* 0x019C */
  FB_FLOAT32 StrikeRadius; /* 0x01A0 */
  FB_FLOAT32 StrikeSpeed; /* 0x01A4 */
  FB_FLOAT32 StrikeDelay; /* 0x01A8 */
  FB_FLOAT32 SpawnHeight; /* 0x01AC */
  FB_FLOAT32 SpawnDelay; /* 0x01B0 */
  FB_INT32 NumberOfShells; /* 0x01B4 */
  StrikePattern Pattern; /* 0x01B8 */
  char pad_01BC[0x0004];
  FB_HANDLE(class EffectBlueprint) StrikeEffect; /* 0x01C0 */
  FB_BOOLEAN FailToCallStrikeIfCallerDied; /* 0x01C8 */
  FB_BOOLEAN UseLeadingShot; /* 0x01C9 */
  FB_BOOLEAN EnableTrails; /* 0x01CA */
  char pad_01CB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */
#pragma pack(pop)

static_assert(sizeof(PVZArtilleryStrikeGrenadeEntityData) == 464);

}
