#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/RumbleTriggerData.h>
#include <IcelinSdk.PvZGW2/PVZShared/TrapezoidLocation.h>

namespace fb
{

/* TypeInfo (Array): 00000001428696E8
   RuntimeId:        24BB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6718
   Default Value:    0000000142869700
*/
#pragma pack(push, 16)
struct MirrorDamageTrapezoid
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Offset; /* 0x0000 */
  FB_FLOAT32 Damage; /* 0x0010 */
  FB_FLOAT32 Impulse; /* 0x0014 */
  RumbleTriggerData RumbleHit; /* 0x0018 */
  FB_FLOAT32 OnTriggerSelfDamage; /* 0x0024 */
  FB_FLOAT32 OnHitSelfDamageMultiplier; /* 0x0028 */
  TrapezoidLocation TrapezoidLocation; /* 0x002C */
  FB_FLOAT32 MaxYDifference; /* 0x0030 */
  FB_FLOAT32 Length; /* 0x0034 */
  FB_FLOAT32 NearWidth; /* 0x0038 */
  FB_FLOAT32 FarWidth; /* 0x003C */
  FB_CSTRING GlobalUnrevivableEffect; /* 0x0040 */
  FB_BOOLEAN UseShootTransform; /* 0x0048 */
  FB_BOOLEAN IgnoreVictimIfOccluded; /* 0x0049 */
  FB_BOOLEAN KillIsUnrevivable; /* 0x004A */
  FB_BOOLEAN HidePlayerOnUnrevivableKill; /* 0x004B */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MirrorDamageTrapezoid) == 80);

}
